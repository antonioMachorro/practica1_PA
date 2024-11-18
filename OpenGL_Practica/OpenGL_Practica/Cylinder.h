#pragma once
#include "Solid.h"

class Cylinder : public Solid
{
private:
	float baseR;
	float upperR;
	float height;
	float slices;
	float stacks;

public:
	Cylinder(Vector3D coords, Vector3D rot, Color color, float br, float ur, float h, float slice, float stack) :
		Solid(coords, rot, Vector3D(), color), baseR(br), upperR(ur), height(h), slices(slice), stacks(stack) {}

	Cylinder(Vector3D coords, Vector3D rot, Vector3D orient, Vector3D speed, Color color, float br, float ur, float h, float slice, float stack) : 
		Solid(coords, rot, orient, speed, color), baseR(br), upperR(ur), height(h), slices(slice), stacks(stack) {}

	inline float GetBaseRadius() const { return this->baseR; }
	inline float GetUpperRadius() const { return this->upperR; }
	inline float GetHeight() const { return this->height; }
	inline float GetSlices() const { return this->slices; }
	inline float GetStacks() const { return this->stacks; }

	inline void SetBaseRadius(const float& baseRadiusToSet) { this->baseR = baseRadiusToSet; }
	inline void SetUpperRadius(const float& upperRadiusToSet) { this->upperR = upperRadiusToSet; }
	inline void SetHeight(const float& heightToSet) { this->height = heightToSet; }
	inline void SetSlices(const float& slicesToSet) { this->slices = slicesToSet; }
	inline void SetStacks(const float& stacksToSet) { this->stacks = stacksToSet; }

	void Render();

	void Update();

	Solid* Clone();
};

