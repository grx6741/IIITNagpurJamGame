#pragma once

#include "IScene.h"

class MenuScene : public IScene
{
public:

	MenuScene();

	virtual void Init();
	virtual void RunFrame();
	virtual void CleanUp();

	~MenuScene();
};
