#include "Cuboid.h"

void Cuboid::Render() {
	glPushMatrix();
	glTranslatef(this->GetCoordinateX(), this->GetCoordinateY(), this->GetCoordinateZ());
	glColor3f(this->GetRedComponent(), this->GetGreenComponent(), this->GetBlueComponent());
	glRotatef(this->GetAngleX(), 1.0, 0.0, 0.0);
	glRotatef(this->GetAngleY(), 0.0, 1.0, 0.0);
	glRotatef(this->GetAngleZ(), 0.0, 0.0, 1.0);
	glScalef(this->GetLength(), this->GetHeight(), this->GetWidth());
	glutSolidCube(1);
	glPopMatrix();
}

void Cuboid::Update() {
	SetAngle(this->rotation + this->orientationSpeed * TIME_SCALE);
}

Solid* Cuboid::Clone() {
	return new Cuboid(*this);
}