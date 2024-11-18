#include "Game.h"
#include "Color.h"
#include <iostream>
#include <cstdlib>
#include <random>

#define GREY_COLOR_RGB 0.05
#define RED_COLOR_RGB 1

using namespace std;

float randomBallSpeedX;

void Game::ProcessKeyPressed(unsigned char key, int px, int py) {
	cout << "Tecla pulsada: " << key << endl;
	
	//Change display cuboids's color depending on the key pressed (0-9)
	switch (key) {
#pragma region Number Keys
	case '0':
		this->GetDpA().SetColor(Color(RED_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		this->GetDpB().SetColor(Color(RED_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		this->GetDpC().SetColor(Color(RED_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		this->GetDpD().SetColor(Color(RED_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		this->GetDpE().SetColor(Color(RED_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		this->GetDpF().SetColor(Color(RED_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		this->GetDpG().SetColor(Color(GREY_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		break;
	case '1':
		this->GetDpA().SetColor(Color(GREY_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		this->GetDpB().SetColor(Color(RED_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		this->GetDpC().SetColor(Color(RED_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		this->GetDpD().SetColor(Color(GREY_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		this->GetDpE().SetColor(Color(GREY_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		this->GetDpF().SetColor(Color(GREY_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		this->GetDpG().SetColor(Color(GREY_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		break;
	case '2':
		this->GetDpA().SetColor(Color(RED_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		this->GetDpB().SetColor(Color(RED_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		this->GetDpC().SetColor(Color(GREY_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		this->GetDpD().SetColor(Color(RED_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		this->GetDpE().SetColor(Color(RED_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		this->GetDpF().SetColor(Color(GREY_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		this->GetDpG().SetColor(Color(RED_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		break;
	case '3':
		this->GetDpA().SetColor(Color(RED_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		this->GetDpB().SetColor(Color(RED_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		this->GetDpC().SetColor(Color(RED_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		this->GetDpD().SetColor(Color(RED_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		this->GetDpE().SetColor(Color(GREY_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		this->GetDpF().SetColor(Color(GREY_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		this->GetDpG().SetColor(Color(RED_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		break;
	case '4':
		this->GetDpA().SetColor(Color(GREY_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		this->GetDpB().SetColor(Color(RED_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		this->GetDpC().SetColor(Color(RED_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		this->GetDpD().SetColor(Color(GREY_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		this->GetDpE().SetColor(Color(GREY_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		this->GetDpF().SetColor(Color(RED_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		this->GetDpG().SetColor(Color(RED_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		break;
	case '5':
		this->GetDpA().SetColor(Color(RED_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		this->GetDpB().SetColor(Color(GREY_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		this->GetDpC().SetColor(Color(RED_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		this->GetDpD().SetColor(Color(RED_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		this->GetDpE().SetColor(Color(GREY_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		this->GetDpF().SetColor(Color(RED_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		this->GetDpG().SetColor(Color(RED_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		break;
	case '6':
		this->GetDpA().SetColor(Color(RED_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		this->GetDpB().SetColor(Color(GREY_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		this->GetDpC().SetColor(Color(RED_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		this->GetDpD().SetColor(Color(RED_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		this->GetDpE().SetColor(Color(RED_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		this->GetDpF().SetColor(Color(RED_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		this->GetDpG().SetColor(Color(RED_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		break;
	case '7':
		this->GetDpA().SetColor(Color(RED_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		this->GetDpB().SetColor(Color(RED_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		this->GetDpC().SetColor(Color(RED_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		this->GetDpD().SetColor(Color(GREY_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		this->GetDpE().SetColor(Color(GREY_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		this->GetDpF().SetColor(Color(GREY_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		this->GetDpG().SetColor(Color(GREY_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		break;
	case '8':
		this->GetDpA().SetColor(Color(RED_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		this->GetDpB().SetColor(Color(RED_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		this->GetDpC().SetColor(Color(RED_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		this->GetDpD().SetColor(Color(RED_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		this->GetDpE().SetColor(Color(RED_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		this->GetDpF().SetColor(Color(RED_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		this->GetDpG().SetColor(Color(RED_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		break;
	case '9':
		this->GetDpA().SetColor(Color(RED_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		this->GetDpB().SetColor(Color(RED_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		this->GetDpC().SetColor(Color(RED_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		this->GetDpD().SetColor(Color(GREY_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		this->GetDpE().SetColor(Color(GREY_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		this->GetDpF().SetColor(Color(RED_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		this->GetDpG().SetColor(Color(RED_COLOR_RGB, GREY_COLOR_RGB, GREY_COLOR_RGB));
		break;
#pragma endregion Number Keys
#pragma region Arkanoid Keys
	case 'a':
		this->paddle.SetCoordinates(paddle.GetCoordinates() - Vector3D(0.08, 0.0, 0.0));
		break;
	case 'd':
		this->paddle.SetCoordinates(paddle.GetCoordinates() + Vector3D(0.08, 0.0, 0.0));
		break;
	case ' ':
		this->ball.SetSpeed(Vector3D(randomBallSpeedX, -0.003, 0));
		break;
#pragma endregion Arkanoid Keys
	default:
		break;
	}
}

void Game::ProcessMouseMovement(int x, int y) {
	cout << "Movimiento del mouse: " << x << ", " << y << endl;
}

void Game::ProcessMouseClicked(int button, int state, int px, int py) {

	cout << "Click: " << button << ", State: " << state << endl;

	if (state == 0) {
		this->GetCube().SetColor(Color((static_cast<float>(rand()) / RAND_MAX), (static_cast<float>(rand()) / RAND_MAX),
			float((static_cast<float>(rand()) / RAND_MAX))));
		this->GetCuboid().SetColor(Color((static_cast<float>(rand()) / RAND_MAX), (static_cast<float>(rand()) / RAND_MAX),
			float((static_cast<float>(rand()) / RAND_MAX))));
		this->GetSphere().SetColor(Color((static_cast<float>(rand()) / RAND_MAX), (static_cast<float>(rand()) / RAND_MAX),
			float((static_cast<float>(rand()) / RAND_MAX))));
		this->GetTeapot().SetColor(Color((static_cast<float>(rand()) / RAND_MAX), (static_cast<float>(rand()) / RAND_MAX),
			float((static_cast<float>(rand()) / RAND_MAX))));
		
		/*
		this->GetCube().SetRedComponent(static_cast<float>(rand()) / RAND_MAX);
		this->GetCube().SetGreenComponent(static_cast<float>(rand()) / RAND_MAX);
		this->GetCube().SetBlueComponent(static_cast<float>(rand()) / RAND_MAX);
		
		this->GetCuboid().SetRedComponent(static_cast<float>(rand()) / RAND_MAX);
		this->GetCuboid().SetGreenComponent(static_cast<float>(rand()) / RAND_MAX);
		this->GetCuboid().SetBlueComponent(static_cast<float>(rand()) / RAND_MAX);

		this->GetSphere().SetRedComponent(static_cast<float>(rand()) / RAND_MAX);
		this->GetSphere().SetGreenComponent(static_cast<float>(rand()) / RAND_MAX);
		this->GetSphere().SetBlueComponent(static_cast<float>(rand()) / RAND_MAX);

		this->GetTeapot().SetRedComponent(static_cast<float>(rand()) / RAND_MAX);
		this->GetTeapot().SetGreenComponent(static_cast<float>(rand()) / RAND_MAX);
		this->GetTeapot().SetBlueComponent(static_cast<float>(rand()) / RAND_MAX);
		*/
	}
}

void Game::Init() {

	//SCENE 1
	//Object assortment
	scene1.AddGameObject(&cube);
	scene1.AddGameObject(&teapot);
	scene1.AddGameObject(&cuboid);
	scene1.AddGameObject(&sphere);

	//Digital display cuboids
	scene1.AddGameObject(&dpA);
	scene1.AddGameObject(&dpB);
	scene1.AddGameObject(&dpC);
	scene1.AddGameObject(&dpD);
	scene1.AddGameObject(&dpE);
	scene1.AddGameObject(&dpF);
	scene1.AddGameObject(&dpG);

	//SCENE 2
	//Arkanoid bricks
	scene2.AddGameObject(&blueBrick);
	scene2.AddGameObject(&redBrick);
	scene2.AddGameObject(&greenBrick);
	scene2.AddGameObject(&pinkBrick);

	//Arkanoid paddle
	scene2.AddGameObject(&paddle);

	//Arkanoid ball
	scene2.AddGameObject(&ball);

	//Get random number for ball movement
	randomBallSpeedX = rand() % 9;
	randomBallSpeedX = randomBallSpeedX / 10000;
	cout << "Random Ball Speed " << randomBallSpeedX << endl;

	//SCENE 3
	//Particles Emitter
	scene3.AddGameObject(&particlesEmitter);
};

void Game::Render() {
	scene3.Render();
};

void Game::Update() {
	scene3.Update();
};