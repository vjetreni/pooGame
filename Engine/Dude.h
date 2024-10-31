#pragma once

#include "Graphics.h"
#include "Keyboard.h"

class Dude {

public:
	Dude(int in_x, int in_y);
	int GetX() const;
	int GetY() const;
	void checkBorders();
	void Draw(Graphics& gfx) const;
	void MovePressCheck(Keyboard& kbd);

	static constexpr int width = 20;
	static constexpr int height = 20;
	
private:
	int x;
	int y;
};
