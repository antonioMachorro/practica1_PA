#include "Cylinder.h"

void Cylinder::Render() {
	GLUquadricObj* quadricTemp = gluNewQuadric();
	glPushMatrix();
	glTranslatef(this->GetCoordinateX(), this->GetCoordinateY(), this->GetCoordinateZ());
	glColor3f(this->GetRedComponent(), this->GetGreenComponent(), this->GetBlueComponent());
	glRotatef(this->GetAngleX(), 1.0, 0.0, 0.0);
	glRotatef(this->GetAngleY(), 0.0, 1.0, 0.0);
	glRotatef(this->GetAngleZ(), 0.0, 0.0, 1.0);
	gluCylinder(quadricTemp, this->GetBaseRadius(), this->GetUpperRadius(), this->GetHeight(), this->GetSlices(), this->GetStacks());
	glPopMatrix();
	gluDeleteQuadric(quadricTemp);
}

void Cylinder::Update() {
	SetCoordinates(this->coordinates + this->speed * TIME_SCALE);
	SetAngle(this->rotation + this->orientationSpeed * TIME_SCALE);
}

Solid* Cylinder::Clone() {
	return new Cylinder(*this);
}