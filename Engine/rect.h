#pragma once

#include "Dude.h"
#include "Colors.h"


class Rect {

public:
	Rect(Vec2d pos_in);
	bool TestCollision(Dude& dude) const ;
	void Draw(Graphics& gfx) const;
	void Replace(Vec2d pos_in);
	void ChangeColor(int r, int g, int b);
	
private:
	
	Vec2d pos;
	Color c;
	static float constexpr width = 10.0f;
	static float constexpr height = 10.0f;

};