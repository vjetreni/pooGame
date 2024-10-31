#pragma once

#include "Dude.h"
#include "Colors.h"


class Rect {

public:
	Rect(int x_in, int y_in);
	bool TestCollision(Dude& dude) const ;
	void Draw(Graphics& gfx) const;
	void Replace(int x_in, int y_in);
	void ChangeColor(int r, int g, int b);
	
private:
	
	int x;
	int y;
	Color c;
	static int constexpr width = 10;
	static int constexpr height = 10;

};