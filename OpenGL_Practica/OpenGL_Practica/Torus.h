#pragma once
#include "Solid.h"

class Torus : public Solid
{
private:
	float rExt;
	float rInt;
	float faces;
	float rings;

public:
	Torus(Vector3D coords, Vector3D rot, Vector3D orient, Color color, float re, float ri, float f, float r) : 
		Solid(coords, rot, orient, color), rExt(re), rInt(ri), faces(f), rings(r) {}

	inline float GetExternalRadius() const { return this->rExt; }
	inline float GetInternalRadius() const { return this->rInt; }
	inline float GetFaces() const { return this->faces; }
	inline float GetRings() const { return this->rings; }

	inline void SetExternalRadius(const float& extRadiusToSet) { this->rExt = extRadiusToSet; }
	inline void SetInternalRadius(const float& intRadiusToSet) { this->rInt = intRadiusToSet; }
	inline void SetFaces(const float& facesToSet) { this->faces = facesToSet; }
	inline void SetRings(const float& ringsToSet) { this->rings = ringsToSet; }

	void Render();

	void Update();

	Solid* Clone();
};

