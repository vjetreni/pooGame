#pragma once


#include "Colors.h"
#include "Graphics.h"


class Meter {

public:
	Meter(int x_in, int y_in);
	void Draw(Graphics& gfx) const;
	void IncWidth();

private:
	int x;
	int y;

	Color c = Colors::Blue;
	int width = 0;
	static int constexpr height = 10;
};