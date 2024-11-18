#pragma once
#include "Solid.h"

class EmitterConfiguration
{
private:
	int particleNum;
	int emissionPeriod; //Miliseconds
	Solid* particle;

public:
	EmitterConfiguration(int pNum, int emPeriod, Solid* particle) : particleNum(pNum), emissionPeriod(emPeriod), particle(particle) {};

	inline int GetParticleNum() const { return this->particleNum; }
	inline int GetEmissionPeriod() const { return this->emissionPeriod; }
	inline Solid* GetParticle() const { return this->particle; }

	inline void SetParticleNum(const int& particleNumToSet) { this->particleNum = particleNumToSet; }
	inline void SetEmissionPeriod(const int& emissionPeriodToSet) { this->emissionPeriod = emissionPeriodToSet; }
	inline void SetParticle(Solid* particleToSet) { this->particle = particleToSet; }
};

