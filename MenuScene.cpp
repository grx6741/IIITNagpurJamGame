#include "MenuScene.h"

#include <raylib.h>

/*
 * See IScene.hpp for the details
 */

MenuScene::MenuScene() { }

void MenuScene::Init()
{
	// DO Initialization here

	// Make sure its not called again
	m_Initialized = true;
}

void MenuScene::RunFrame()
{
	// Call Init if not initialized first
	if (!m_Initialized) {
		this->Init();
	}

	// Frame Stuff goes here

	if (IsKeyPressed(KEY_SPACE)) {
		currentScene = EScenes::SOLAR_SYSTEM_VIEW;
		TraceLog(LOG_INFO, "Changing Scene to %d", currentScene);
	}

	BeginDrawing();

	ClearBackground(RED);

	EndDrawing();
}

void MenuScene::CleanUp()
{
}

MenuScene::~MenuScene()
{
	this->CleanUp();
}
