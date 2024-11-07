#pragma once


#include "Colors.h"
#include "Graphics.h"
#include "Vec2d.h"


class Lives {

public:
	Lives(Vec2d pos_in, int num_in);
	void Draw(Graphics& gfx) const;
	void DecNum();
	int GetNum() const;

private:
	Vec2d pos;
	int num;

	Color c = Colors::Green;

	static int constexpr dimension = 10;
	static int constexpr distance = 5;
};