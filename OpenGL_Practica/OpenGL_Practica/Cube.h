#pragma once
#include "Solid.h"

class Cube: public Solid
{
private:
	float size;

public:
	Cube(Vector3D coords, Vector3D rot, Color c, float s) : Solid(coords, rot, c), size(s) {};

	Cube(Vector3D coords, Vector3D rot, Vector3D ori, Vector3D speed, Color c, float s) : Solid(coords, rot, ori, speed, c), size(s) {};

	inline float GetSize() const { return this->size; }

	inline void SetSize(const float& sizeToSet) { this->size = sizeToSet; }

	void Render();

	void Update();

	Solid* Clone();
};

