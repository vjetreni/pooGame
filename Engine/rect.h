#pragma once

#include "Dude.h"
#include "Colors.h"


class Rect {

public:
	Rect(float x_in, float y_in);
	bool TestCollision(Dude& dude) const ;
	void Draw(Graphics& gfx) const;
	void Replace(float x_in, float y_in);
	void ChangeColor(int r, int g, int b);
	
private:
	
	float x;
	float y;
	Color c;
	static float constexpr width = 10.0f;
	static float constexpr height = 10.0f;

};