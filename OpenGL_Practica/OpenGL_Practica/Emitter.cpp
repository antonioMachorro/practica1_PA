#include "Emitter.h"
#include <random>

void Emitter::Render()
{
	for (Solid* particle : particles) {
		particle->Render();
	}
}

void Emitter::Update()
{
	if (particles.size() < emitterConf.GetParticleNum())
	{
		milliseconds currentTime = duration_cast<milliseconds>(system_clock::now().time_since_epoch());
		long lastEmission = (currentTime.count() - this->initialMilliseconds.count()) - this->lastUpdateTime;
		if ((currentTime.count() - this->initialMilliseconds.count()) - this->lastUpdateTime > this->emitterConf.GetEmissionPeriod())
		{
			Solid* newParticle = emitterConf.GetParticle()->Clone();
			newParticle->SetCoordinates(randomVector3D(-4, 4));
			newParticle->SetAngle(randomVector3D(-180, 180));
			newParticle->SetColor(randomColor());
			newParticle->SetOrientationSpeed(randomVector3D(-0.000005, 0.000005));
			newParticle->SetSpeed(randomVector3D(-0.001, 0.001));
			particles.push_back(newParticle);
		}
		this->lastUpdateTime = currentTime.count() - this->initialMilliseconds.count();
	}

	for (Solid* particle : particles) {
		particle->Update();
	}
}