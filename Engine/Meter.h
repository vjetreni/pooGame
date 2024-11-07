#pragma once


#include "Colors.h"
#include "Graphics.h"
#include "Vec2d.h"


class Meter {

public:
	Meter(Vec2d pos_in);
	void Draw(Graphics& gfx) const;
	void IncWidth();

private:
	Vec2d pos;

	Color c = Colors::Blue;
	int width = 0;
	static int constexpr height = 10;
};