#include "Scene.h"

void Scene::AddGameObject(Solid* object) 
{
	gameObjects.push_back(object);
}

void Scene::Render()
{
	camera.Render();
	for (Solid* object : gameObjects) {
		object->Render();
	}
}

void Scene::Update()
{
	for (Solid* object : gameObjects) {
		object->Update();
		CheckBoundary(object);
		CheckBounce(object);
	}
}