#include "Meter.h"
#include "Vec2d.h"

Meter::Meter(Vec2d pos_in)
	:
	pos(pos_in)
{
}

void Meter::Draw(Graphics& gfx) const
{
	gfx.drawRectangle(int(pos.x), int(pos.y), width, height, c);
}

void Meter::IncWidth()
{
	width += 5;
}
