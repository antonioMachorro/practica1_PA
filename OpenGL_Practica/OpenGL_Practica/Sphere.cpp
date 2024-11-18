#include "Sphere.h"

void Sphere::Render() {
	glPushMatrix();
	glTranslatef(this->GetCoordinateX(), this->GetCoordinateY(), this->GetCoordinateZ());
	glColor3f(this->GetRedComponent(), this->GetGreenComponent(), this->GetBlueComponent());
	glRotatef(this->GetAngleX(), 1.0, 0.0, 0.0);
	glRotatef(this->GetAngleY(), 0.0, 1.0, 0.0);
	glRotatef(this->GetAngleZ(), 0.0, 0.0, 1.0);
	glutSolidSphere(this->GetRadius(), this->GetSlices(), this->GetSlacks());
	glPopMatrix();
}

void Sphere::Update() {
	SetCoordinates(this->coordinates + this->speed * TIME_SCALE);
	SetAngle(this->rotation + this->orientationSpeed * TIME_SCALE);
}

Solid* Sphere::Clone() {
	return new Sphere(*this);
}