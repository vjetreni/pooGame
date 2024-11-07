#include "Lives.h"
#include "Vec2d.h"

Lives::Lives(Vec2d pos_in, int num_in)
	:
	pos(pos_in),
	num(num_in)
{
}

void Lives::Draw(Graphics& gfx) const
{
	for (int i = 0; i < num; i++) {
		gfx.drawRectangle(int(pos.x) - i * (dimension + distance), int(pos.y), dimension, dimension, c);
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
