// Scenes
#include "MenuScene.h"
#include "SolarSystemScene.h"

#include <vector>
#include <raylib.h>

EScenes IScene::currentScene = MAIN_MENU;

int main() {
	InitWindow(800, 600, "Hello World");

	std::vector<IScene*> scenes = {
		new MenuScene(),
		new SolarSystemScene(),
	};

	SetTargetFPS(60);
	while (!WindowShouldClose()) {
		// Global var currentScene to hold the current Scene
		scenes[IScene::currentScene]->RunFrame();
	}

	CloseWindow();
}