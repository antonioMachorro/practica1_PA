#pragma once
#include <GL/glut.h>
#include <iostream>
#include "Vector3D.h"
#include "Color.h"

#define TIME_SCALE 1

class Solid
{
protected:
	//Core Attributes
	Vector3D coordinates;
	Vector3D rotation;
	Color color;

	//Animation Attributes
	Vector3D orientationSpeed;
	Vector3D speed;

public:
	//Default constructor
	Solid()
	{
		this->coordinates = Vector3D();
		this->rotation = Vector3D();
		this->color = Color();
		this->orientationSpeed = Vector3D();
		this->speed = Vector3D();
	}
	//Constructor con posicion, rotacion y color.
	Solid(Vector3D coords, Vector3D rot, Color c) :
		coordinates(coords), rotation(rot), orientationSpeed(Vector3D()), speed(Vector3D()), color(c) {};

	//Constructor con posicion, rotacion, color y velocidad de rotacion.
	Solid(Vector3D coords, Vector3D rot, Vector3D orient, Color c) :
		coordinates(coords), rotation(rot), orientationSpeed(orient), speed(Vector3D()), color(c) {};

	//Constructor con posicion, rotacion, color, velocidad de rotacion y velocidad lineal.
	Solid(Vector3D coords, Vector3D rot, Vector3D orient, Vector3D sp, Color c) : 
		coordinates(coords), rotation(rot), orientationSpeed(orient), speed(sp), color(c) {};

	//GETTERS
	inline float GetCoordinateX() const { return this->coordinates.GetX(); }
	inline float GetCoordinateY() const { return this->coordinates.GetY(); }
	inline float GetCoordinateZ() const { return this->coordinates.GetZ(); }

	inline Vector3D GetCoordinates() const { return this->coordinates; }

	inline float GetAngleX() const { return this->rotation.GetX(); }
	inline float GetAngleY() const { return this->rotation.GetY(); }
	inline float GetAngleZ() const { return this->rotation.GetZ(); }

	inline Vector3D GetAngle() const { return this->rotation; }

	inline float GetOrientationSpeedX() const { return this->orientationSpeed.GetX(); }
	inline float GetOrientationSpeedY() const { return this->orientationSpeed.GetY(); }
	inline float GetOrientationSpeedZ() const { return this->orientationSpeed.GetZ(); }

	inline Vector3D GetOrientationSpeed() const { return this->orientationSpeed; }

	inline float GetSpeedX() const { return this->speed.GetX(); }
	inline float GetSpeedY() const { return this->speed.GetY(); }
	inline float GetSpeedZ() const { return this->speed.GetZ(); }

	inline Vector3D GetSpeed() const { return this->speed; }

	inline float GetRedComponent() const { return this->color.GetRedComponent(); }
	inline float GetGreenComponent() const { return this->color.GetGreenComponent(); }
	inline float GetBlueComponent() const { return this->color.GetBlueComponent(); }

	inline Color GetColor() const { return this->color; }

	//SETTERS
	inline void SetCoordinateX(const float& coordinateXToSet) { this->coordinates.SetX(coordinateXToSet); }
	inline void SetCoordinateY(const float& coordinateYToSet) { this->coordinates.SetY(coordinateYToSet); }
	inline void SetCoordinateZ(const float& coordinateZToSet) { this->coordinates.SetZ(coordinateZToSet); }

	inline void SetCoordinates(const Vector3D& coordinatesToSet) { this->coordinates = coordinatesToSet; }

	inline void SetAngleX(const float& angleXToSet) { this->rotation.SetX(angleXToSet); }
	inline void SetAngleY(const float& angleYToSet) { this->rotation.SetY(angleYToSet); }
	inline void SetAngleZ(const float& angleZToSet) { this->rotation.SetZ(angleZToSet); }

	inline void SetAngle(const Vector3D& angleToSet) { this->rotation = angleToSet; }

	inline void SetOrientationSpeedX(const float& orientationXToSet) { this->orientationSpeed.SetX(orientationXToSet); }
	inline void SetOrientationSpeedY(const float& orientationYToSet) { this->orientationSpeed.SetY(orientationYToSet); }
	inline void SetOrientationSpeedZ(const float& orientationZToSet) { this->orientationSpeed.SetZ(orientationZToSet); }

	inline void SetOrientationSpeed(const Vector3D& orientationSpeedToSet) { this->orientationSpeed = orientationSpeedToSet; }

	inline void SetSpeedX(const float& speedXToSet) { this->speed.SetX(speedXToSet); }
	inline void SetSpeedY(const float& speedYToSet) { this->speed.SetY(speedYToSet); }
	inline void SetSpeedZ(const float& speedZToSet) { this->speed.SetZ(speedZToSet); }

	inline void SetSpeed(const Vector3D& speedToSet) { this->speed = speedToSet; }

	inline void SetRedComponent(const float& redToSet) { this->color.SetRedComponent(redToSet); }
	inline void SetGreenComponent(const float& greenToSet) { this->color.SetGreenComponent(greenToSet); }
	inline void SetBlueComponent(const float& blueToSet) { this->color.SetBlueComponent(blueToSet); }

	inline void SetColor(const Color& colorToSet) { this->color = colorToSet; }

	//METODOS
	virtual void Render() = 0;

	virtual void Update() = 0;

	virtual bool CheckCollision(Solid* other);

	virtual Solid* Clone();
};

