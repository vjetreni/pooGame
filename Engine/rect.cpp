#include "rect.h"
#include "Dude.h"
#include "Graphics.h"
#include "Colors.h" 
#include <random>

Rect::Rect(int in_x, int in_y)
{
	x = in_x;
	y = in_y;
}

bool Rect::TestCollision(Dude& dude) const {

	int rightRect = x + width;
	int rightDude = dude.GetX() + dude.width;
	int	downRect = y + height;
	int	downDude = dude.GetY() + dude.height;

	return (rightRect >= dude.GetX()) && (x <= rightDude) && (y <= downDude) && (downRect >= dude.GetY());
}


void Rect::Draw(Graphics& gfx) const
{
	
	gfx.drawRectangle(x, y, width, height, c);
	
}

void Rect::Replace(int x_in, int y_in)
{
	x = x_in;
	y = y_in;
}

void Rect::ChangeColor(int r, int g, int b)
{
	c = Color( r*255,g*255,b*255 );
}

