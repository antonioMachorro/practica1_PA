#pragma once
#include "Solid.h"

class Camera:Solid
{
public:
	Camera(Vector3D coords) : Solid(coords, Vector3D(), Vector3D(), Color()) {};
	Camera() : Solid(Vector3D(), Vector3D(), Vector3D(), Vector3D(), Color()) {};

	void Render();

	void Update();
};

