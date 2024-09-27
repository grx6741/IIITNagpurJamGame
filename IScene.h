#pragma once

enum EScenes {
	MAIN_MENU = 0,
	SOLAR_SYSTEM_VIEW,
	DECK_BATTLE_VIEW
};

class IScene {
protected:
	bool m_Initialized;
public:
	static EScenes currentScene;

	inline IScene() : m_Initialized(false) { }

/*
 *  All one time Init stuffs go here
 */
	virtual void Init() = 0;

/*
 *  Will be called every frame and calls Init() only once
 */
	virtual void RunFrame() = 0;

/*
 * All cleanup goes here, for our purpose the cleanup will be called by the destructor.
 * Because we switch between scenes frequently, it doesnt make sense to clean up its
 * resources when we switch scene.
 */
	virtual void CleanUp() = 0;
};
