#pragma once
#include "Solid.h"
#include "EmitterConfiguration.h"
#include <vector>
#include <chrono>
#include <random>

using namespace std;
using namespace chrono;

class Emitter: public Solid
{
private:
	milliseconds initialMilliseconds;
	long lastUpdateTime;

	float getRandomFloat(float minValue, float maxValue) {
		static random_device rd;
		static mt19937 gen(rd());
		std::uniform_real_distribution<float> dist(minValue, maxValue);
		return dist(gen);
	}

	Vector3D randomVector3D(float minValue, float maxValue) {
		return Vector3D(getRandomFloat(minValue, maxValue),
			getRandomFloat(minValue, maxValue),
			getRandomFloat(minValue, maxValue));
	}

	Color randomColor() {
		return Color(getRandomFloat(0.0f, 1.0f),
			getRandomFloat(0.0f, 1.0f),
			getRandomFloat(0.0f, 1.0f));
	}


public:
	Emitter(Vector3D coords, Vector3D rot, Color c, EmitterConfiguration emitterConfig) : Solid(coords, rot, c), emitterConf(emitterConfig) {
		this->initialMilliseconds = duration_cast<milliseconds>(system_clock::now().time_since_epoch());
		this->lastUpdateTime = 0;
	}

	Emitter(EmitterConfiguration emitterConfig) : Solid(), emitterConf(emitterConfig) {
		this->initialMilliseconds = duration_cast<milliseconds>(system_clock::now().time_since_epoch());
		this->lastUpdateTime = 0;
	}

	EmitterConfiguration emitterConf;
	vector<Solid*> particles;
	void Render();
	void Update();
};

