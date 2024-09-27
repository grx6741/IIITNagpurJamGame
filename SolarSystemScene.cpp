#include "SolarSystemScene.h"

#include <raylib.h>

/*
 * See IScene.hpp for the details
 */

SolarSystemScene::SolarSystemScene() { }

void SolarSystemScene::Init()
{
	// DO Initialization here

	// Make sure its not called again
	m_Initialized = true;
}

void SolarSystemScene::RunFrame()
{
	// Call Init if not initialized first
	if (!m_Initialized) {
		this->Init();
	}

	// Frame Stuff goes here

	if (IsKeyPressed(KEY_SPACE)) {
		currentScene = EScenes::MAIN_MENU;
		TraceLog(LOG_INFO, "Changing Scene to %d ", currentScene);
	}

	BeginDrawing();

	ClearBackground(BLACK);

	EndDrawing();
}

void SolarSystemScene::CleanUp()
{
}

SolarSystemScene::~SolarSystemScene()
{
	this->CleanUp();
}
