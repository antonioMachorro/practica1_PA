#include <iostream>
#include "Cube.h"

void Cube::Render() {
	glPushMatrix();
	glTranslatef(this->GetCoordinateX(), this->GetCoordinateY(), this->GetCoordinateZ());
	glColor3f(this->GetRedComponent(), this->GetGreenComponent(), this->GetBlueComponent());
	glRotatef(this->GetAngleX(), 1.0, 0.0, 0.0);
	glRotatef(this->GetAngleY(), 0.0, 1.0, 0.0);
	glRotatef(this->GetAngleZ(), 0.0, 0.0, 1.0);
	glutSolidCube(this->GetSize());
	glPopMatrix();
}

void Cube::Update() {
	SetCoordinates(this->coordinates + this->speed * TIME_SCALE);
	SetAngle(this->rotation + this->orientationSpeed * TIME_SCALE);
}

Solid* Cube::Clone() {
	return new Cube(*this);
}