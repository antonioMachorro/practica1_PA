#pragma once
#include "Solid.h"

class Cuboid: public Solid
{
private:
	float length;
	float height;
	float width;

public:
	Cuboid(Vector3D coords, Vector3D rot, Color color, float length, float height, float width) :
		Solid(coords, rot, Vector3D(), color), length(length), height(height), width(width) {}

	Cuboid(Vector3D coords, Vector3D rot, Vector3D orient, Color color, float length, float height, float width) :
		Solid(coords, rot, orient, color), length(length), height(height), width(width) {}

	inline float GetLength() const { return this->length; }
	inline float GetHeight() const { return this->height; }
	inline float GetWidth() const { return this->width; }

	inline void SetLength(const float& lengthToSet) { this->length = lengthToSet; }
	inline void SetHeight(const float& heightToSet) { this->height = heightToSet; }
	inline void SetWidth(const float& widthToSet) { this->width = widthToSet; }

	void Render();

	void Update();

	Solid* Clone();
};

