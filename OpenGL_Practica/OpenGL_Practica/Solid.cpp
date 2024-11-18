#include "Solid.h"

bool Solid::CheckCollision(Solid* other) {
	Vector3D diff = this->GetCoordinates() - other->GetCoordinates();
	return diff.Magnitude() < 0.5;
}

Solid* Solid::Clone() {
	return nullptr;
}