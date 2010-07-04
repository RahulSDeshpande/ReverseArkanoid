#pragma once
#include "IMode.h"
#include <ArkGame.h>

class Widget;

/* ModeGame
 * Where the game occurs
 */
class ModeGame : 
	public IMode
{
//Private members
private:
	ArkGame::SharedPointer mGame;
	Widget* mFeedbackWidget;
//Private methods
private:
	void clickBack(Widget* /*widget*/);
	void clickBetaTag(Widget* /*widget*/);
	
public:
	ModeGame();

	virtual IMode* Teardown();
	virtual void Setup();
	virtual ModeAction::Enum Tick(float _dt);
	virtual ModeType::Enum GetType();
	virtual void Draw(SDL_Surface* screenSurface);
};
