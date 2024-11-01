#include "rect.h"
#include "Dude.h"
#include "Graphics.h"
#include "Colors.h" 
#include <random>

Rect::Rect(float in_x, float in_y)
{
	x = in_x;
	y = in_y;
}

bool Rect::TestCollision(Dude& dude) const {

	float rightRect = x + width;
	float rightDude = dude.GetX() + dude.width;
	float	downRect = y + height;
	float	downDude = dude.GetY() + dude.height;

	return (rightRect >= dude.GetX()) && (x <= rightDude) && (y <= downDude) && (downRect >= dude.GetY());
}


void Rect::Draw(Graphics& gfx) const
{
	
	gfx.drawRectangle((int)x, (int)y, (int)width, (int)height, c);
	
}

void Rect::Replace(float x_in, float y_in)
{
	x = x_in;
	y = y_in;
}

void Rect::ChangeColor(int r, int g, int b)
{
	c = Color( r*255,g*255,b*255 );
}

