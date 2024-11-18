#pragma once
#include "Teapot.h"
#include "Cube.h"
#include "Cuboid.h"
#include "Sphere.h"
#include "Vector3D.h"
#include "Color.h"
#include "Scene.h"
#include "Cylinder.h"
#include "EmitterConfiguration.h"
#include "Emitter.h"

using namespace std;

class Game
{
private:
	//Initialize scene
	Scene scene1; //Objects scene
	Scene scene2; //Arkanoid scene
	Scene scene3; //Particles scene

	//SCENE 1 OBJECTS
	//Initialize assortment of objects
	Sphere sphere = Sphere(Vector3D(0.9, -0.9, -2), Vector3D(20, 15, 10), Vector3D(0.5, 0, 0), Color(0.9, 0.2, 0.1), 0.1, 90, 90);
	Teapot teapot = Teapot(Vector3D(-0.9, 0.9, -2), Vector3D(90, 30, 0), Vector3D(0, 0.5, 0), Color(0.2, 0.3, 0.4), 0.1);
	Cube cube = Cube(Vector3D(0.9, 0.9, -2), Vector3D(0, 30, 0), Vector3D(0, 0, 0.5), Vector3D(0.005, 0.002, 0), Color(0.2, 0.3, 0.8), 0.1);
	Cuboid cuboid = Cuboid(Vector3D(-0.9, -0.9, -2), Vector3D(30, 0, 0), Vector3D(0.2, 0.2, 0.2), Color(0.1, 0.5, 0.2), 0.1, 0.2, 0.2);

	//Initialize digital display as a "0"
	Cuboid dpA = Cuboid(Vector3D(0.0,0.6,-2.0), Vector3D(0.0,0.0,0.0), Vector3D(0, 0, 0), Color(1, 0.05, 0.05), 0.4, 0.1, 0.2);
	Cuboid dpB = Cuboid(Vector3D(0.35, 0.3, -2.0), Vector3D(0.0, 0.0, 90.0), Vector3D(0, 0, 0), Color(1, 0.05, 0.05), 0.4, 0.1, 0.2);
	Cuboid dpC = Cuboid(Vector3D(0.35, -0.3, -2.0), Vector3D(0.0, 0.0, 90.0), Vector3D(0, 0, 0), Color(1, 0.05, 0.05), 0.4, 0.1, 0.2);
	Cuboid dpD = Cuboid(Vector3D(0.0, -0.6, -2.0), Vector3D(0.0, 0.0, 0.0), Vector3D(0, 0, 0), Color(1, 0.05, 0.05), 0.4, 0.1, 0.2);
	Cuboid dpE = Cuboid(Vector3D(-0.35, -0.3, -2.0), Vector3D(0.0, 0.0, 90.0), Vector3D(0, 0, 0), Color(1, 0.05, 0.05), 0.4, 0.1, 0.2);
	Cuboid dpF = Cuboid(Vector3D(-0.35, 0.3, -2.0), Vector3D(0.0, 0.0, 90.0), Vector3D(0, 0, 0), Color(1, 0.05, 0.05), 0.4, 0.1, 0.2);
	Cuboid dpG = Cuboid(Vector3D(0.0, 0.0, -2.0), Vector3D(0.0, 0.0, 0.0), Vector3D(0, 0, 0), Color(0.05, 0.05, 0.05), 0.4, 0.1, 0.2);

	//SCENE 2 OBJECTS
	//Blocks
	Cuboid blueBrick = Cuboid(Vector3D(-3.5, 3.5, 0), Vector3D(0,0,0), Color(0.1,0.1,1), 2.33, 0.5, 0.3);
	Cuboid redBrick = Cuboid(Vector3D(-1.17, 3.5, 0), Vector3D(0, 0, 0), Color(1, 0.1, 0.1), 2.33, 0.5, 0.3);;
	Cuboid greenBrick = Cuboid(Vector3D(1.17, 3.5, 0), Vector3D(0, 0, 0), Color(0.1, 1, 0.1), 2.33, 0.5, 0.3);;
	Cuboid pinkBrick = Cuboid(Vector3D(3.5, 3.5, 0), Vector3D(0, 0, 0), Color(0.5, 0.2, 0.3), 2.33, 0.5, 0.3);;

	//Paddle
	Cylinder paddle = Cylinder(Vector3D(-1.0, -3.5, 0), Vector3D(0, 90, 0), Color(0.5, 0.5, 0.5), 0.15f, 0.15f, 2.0f, 360.0f, 100.0f);

	//Ball
	Sphere ball = Sphere(Vector3D(0.0, 0.0, 0.0), Vector3D(0, 0, 0), Color(1, 0.8, 0.3), 0.15, 90, 90);

	//SCENE 3 OBJECTS
	//Cube Particle
	Cube cubeParticle = Cube(Vector3D(0.0, 0.0, 0.0), Vector3D(0.0, 0.0, 0.0), Color(1, 0.2, 0.1), 0.1);

	//Emitter Configuration
	EmitterConfiguration particlesConf = EmitterConfiguration(10000, 0.2, &cubeParticle);

	//Emitter
	Emitter particlesEmitter = Emitter(particlesConf);

public:

	Game() {};

	void Init();
	void Render();
	void Update();
	void ProcessKeyPressed(unsigned char key, int px, int py);
	void ProcessMouseMovement(int x, int y);
	void ProcessMouseClicked(int button, int state, int px, int py);

	//Object assortment
	inline Teapot& GetTeapot() { return this->teapot; }
	inline Cube& GetCube() { return this->cube; }
	inline Cuboid& GetCuboid() { return this->cuboid; }
	inline Sphere& GetSphere() { return this->sphere; }

	//Digital Display
	inline Cuboid& GetDpA() { return this->dpA; }
	inline Cuboid& GetDpB() { return this->dpB; }
	inline Cuboid& GetDpC() { return this->dpC; }
	inline Cuboid& GetDpD() { return this->dpD; }
	inline Cuboid& GetDpE() { return this->dpE; }
	inline Cuboid& GetDpF() { return this->dpF; }
	inline Cuboid& GetDpG() { return this->dpG; }

	//Arkanoid Bricks
	inline Cuboid& GetBlueBrick() { return this->blueBrick; }
	inline Cuboid& GetRedBrick() { return this->redBrick; }
	inline Cuboid& GetGreenBrick() { return this->greenBrick; }

	//Arkanoid Paddle
	inline Cylinder& GetPaddle() { return this->paddle; }

	//Arkanoid Ball
	inline Sphere& GetBall() { return this->ball; }

	//Particles
	inline Cube& GetCubeParticle() { return this->cubeParticle; }
};

