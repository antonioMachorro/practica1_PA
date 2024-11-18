#pragma once
#include "Solid.h"

class Sphere:public Solid
{
private:
	float radius;
	float slices;
	float slacks;

public:
	Sphere(Vector3D coords, Vector3D rot, Color c, float r, float slice, float slack) :
		Solid(coords, rot, Vector3D(), c), radius(r), slices(slice), slacks(slack) {}

	Sphere(Vector3D coords, Vector3D rot, Vector3D orient, Color c, float r, float slice, float slack) : 
		Solid(coords, rot, orient, c), radius(r), slices(slice), slacks(slack) {}

	inline float GetRadius() const { return this->radius; }
	inline float GetSlices() const { return this->slices; }
	inline float GetSlacks() const { return this->slacks; }

	inline void SetRadius(const float& radiusToSet) { this->radius = radiusToSet; }
	inline void SetSlices(const float& slicesToSet) { this->slices = slicesToSet; }
	inline void SetSlacks(const float& slacksToSet) { this->slacks = slacksToSet; }

	void Render();

	void Update();

	Solid* Clone();
};

