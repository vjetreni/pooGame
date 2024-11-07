#include "rect.h"
#include "Dude.h"
#include "Graphics.h"
#include "Colors.h" 
#include <random>

Rect::Rect(Vec2d pos_in)
	:
	pos(pos_in)
{
}

bool Rect::TestCollision(Dude& dude) const {

	float rightRect = pos.x + width;
	float rightDude = dude.GetPos().x + dude.width;
	float	downRect = pos.y + height;
	float	downDude = dude.GetPos().y + dude.height;

	return (rightRect >= dude.GetPos().x) && (pos.x <= rightDude) && (pos.y <= downDude) && (downRect >= dude.GetPos().y);
}


void Rect::Draw(Graphics& gfx) const
{
	
	gfx.drawRectangle((int)pos.x, (int)pos.y, (int)width, (int)height, c);
	
}

void Rect::Replace(Vec2d pos_in)
{
	pos = pos_in;
}

void Rect::ChangeColor(int r, int g, int b)
{
	c = Color( r*255,g*255,b*255 );
}

