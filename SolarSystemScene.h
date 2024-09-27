#pragma once
#include "IScene.h"

class SolarSystemScene : public IScene
{
public:
	SolarSystemScene();

	virtual void Init();
	virtual void RunFrame();
	virtual void CleanUp();

	~SolarSystemScene();
};

