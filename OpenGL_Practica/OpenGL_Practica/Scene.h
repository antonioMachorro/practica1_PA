#pragma once
#include "Solid.h"
#include "Camera.h"
#include <vector>

using namespace std;

class Scene
{
private:

	void CheckBoundary(Solid* gameObject)
	{
		if (gameObject->GetCoordinateX() > boundary.GetX() || gameObject->GetCoordinateX() < (boundary.GetX() * -1)) {
			gameObject->SetSpeedX(gameObject->GetSpeed().GetX() * -1);
		}
		if (gameObject->GetCoordinateY() > boundary.GetY() || gameObject->GetCoordinateY() < (boundary.GetY() * -1)) {
			gameObject->SetSpeedY(gameObject->GetSpeed().GetY() * -1);
		}
		if (gameObject->GetCoordinateZ() > boundary.GetZ() || gameObject->GetCoordinateZ() < (boundary.GetZ() * -1)) {
			gameObject->SetSpeedZ(gameObject->GetSpeed().GetZ() * -1);
		}
	}

	void CheckBounce(Solid* gameObject)
	{
		for (Solid* object : gameObjects) {
			if (gameObject->CheckCollision(object))
			{

			}
		}
	}

public:
	vector<Solid*> gameObjects;
	Camera camera = Camera(Vector3D(0, 0, 8));
	Vector3D boundary = Vector3D(6, 6, 6);

	virtual void AddGameObject(Solid* object);

	void Render();
	void Update();
};


