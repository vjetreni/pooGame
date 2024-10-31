#pragma once


#include "Colors.h"
#include "Graphics.h"


class Lives {

public:
	Lives(int x_in, int y_in, int num_in);
	void Draw(Graphics& gfx) const;
	void DecNum();
	int GetNum() const;

private:
	int x;
	int y;
	int num;

	Color c = Colors::Green;

	static int constexpr dimension = 10;
	static int constexpr distance = 5;
};