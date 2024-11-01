#pragma once

#include "Graphics.h"
#include "Keyboard.h"

class Dude {

public:
	Dude(float in_x, float in_y);
	float GetX() const;
	float GetY() const;
	void checkBorders();
	void Draw(Graphics& gfx) const;
	void MovePressCheck(Keyboard& kbd);

	static constexpr float width = 20.0f;
	static constexpr float height = 20.0f;
	
private:
	float x;
	float y;
};
