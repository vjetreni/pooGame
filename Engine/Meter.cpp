#include "Meter.h"

Meter::Meter(int x_in, int y_in)
{
	x = x_in;
	y = y_in;
}

void Meter::Draw(Graphics& gfx) const
{
	gfx.drawRectangle(x, y, width, height, c);
}

void Meter::IncWidth()
{
	width += 5;
}
