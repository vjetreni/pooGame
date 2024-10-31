#include "Lives.h"

Lives::Lives(int x_in, int y_in, int num_in)
{
	x = x_in;
	y = y_in;
	num = num_in;
}

void Lives::Draw(Graphics& gfx) const
{
	for (int i = 0; i < num; i++) {
		gfx.drawRectangle(x - i * (dimension + distance), y, dimension, dimension, c);
	}
}

void Lives::DecNum()
{
	num--;
}

int Lives::GetNum() const
{
	return num;
}
