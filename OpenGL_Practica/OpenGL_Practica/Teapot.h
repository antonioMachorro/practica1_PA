#pragma once
#include "Solid.h"

class Teapot: public Solid
{
private:
	float size;

public:
	Teapot(Vector3D coords, Vector3D rot, Vector3D orient, Color c, float s) : Solid(coords, rot, orient, c), size(s) {};

	inline float GetSize() const { return this->size; }

	inline void SetSize(const float& sizeToSet) { this->size = sizeToSet; }

	void Render();

	void Update();

	Solid* Clone();
};

