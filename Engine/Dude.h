#pragma once

#include "Graphics.h"
#include "Keyboard.h"
#include "Vec2d.h"

class Dude {

public:
	Dude(Vec2d pos_in);
	Vec2d GetPos() const;
	void checkBorders();
	void Draw(Graphics& gfx) const;
	void MovePressCheck(Keyboard& kbd, float dt);

	static constexpr float width = 20.0f;
	static constexpr float height = 20.0f;
	
private:
	Vec2d pos;
};

