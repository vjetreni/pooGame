#include "Poo.h"
#include "Dude.h"
#include "Graphics.h"

void Poo::Init(float in_x, float in_y, float in_vx, float in_vy)
{
	x = in_x;
	y = in_y;
	vx = in_vx;
	vy = in_vy;
}

void Poo::MoveCheckBordersBounce(float dt)
{
	x += vx * dt * 60;
	y += vy * dt * 60;

	if (x + width > (float)Graphics::ScreenWidth) {
		x = (float)Graphics::ScreenWidth - width;
		vx = -vx;
	}
	if (x < 0) {
		x = 0;
		vx = -vx;
	}
	if (y + height > (float)Graphics::ScreenHeight) {
		y = (float)Graphics::ScreenHeight - height;
		vy = -vy;
	}
	if (y < 0) {
		y = 0;
		vy = -vy;
	}
}

bool Poo::TestCollision(Dude& dude)
{
	if (!isPooEaten) {
		float rightPoo = x + width;
		float rightDude = dude.GetX() + dude.width;
		float	downPoo = y + height;
		float	downDude = dude.GetY() + dude.height;

		if ((rightPoo >= dude.GetX()) && (x <= rightDude) && (y <= downDude) && (downPoo >= dude.GetY())) {
			isPooEaten = true;
		}
	}
	return isPooEaten;
}

void Poo::Draw(Graphics& gfx) const
{
	

	gfx.PutPixel(int(x) + 14, 0 + int(y), 138, 77, 0);
	gfx.PutPixel(7 + int(x),  1 + int(y), 138, 77, 0);
	gfx.PutPixel(13 + int(x),  1 + int(y), 138, 77, 0);
	gfx.PutPixel(20 + int(x),  1 + int(y), 138, 77, 0);
	gfx.PutPixel(6 + int(x),  2 + int(y), 138, 77, 0);
	gfx.PutPixel(13 + int(x),  2 + int(y), 138, 77, 0);
	gfx.PutPixel(20 + int(x),  2 + int(y), 138, 77, 0);
	gfx.PutPixel(6 + int(x),  3 + int(y), 138, 77, 0);
	gfx.PutPixel(6 + int(x),  4 + int(y), 138, 77, 0);
	gfx.PutPixel(14 + int(x),  4 + int(y), 138, 77, 0);
	gfx.PutPixel(21 + int(x),  4 + int(y), 138, 77, 0);
	gfx.PutPixel(7 + int(x),  5 + int(y), 138, 77, 0);
	gfx.PutPixel(13 + int(x),  5 + int(y), 138, 77, 0);
	gfx.PutPixel(21 + int(x),  5 + int(y), 138, 77, 0);
	gfx.PutPixel(7 + int(x),  6 + int(y), 138, 77, 0);
	gfx.PutPixel(20 + int(x),  6 + int(y), 138, 77, 0);
	gfx.PutPixel(6 + int(x),  7 + int(y), 138, 77, 0);
	gfx.PutPixel(14 + int(x),  7 + int(y), 51, 28, 0);
	gfx.PutPixel(15 + int(x),  7 + int(y), 51, 28, 0);
	gfx.PutPixel(20 + int(x),  7 + int(y), 138, 77, 0);
	gfx.PutPixel(12 + int(x),  8 + int(y), 51, 28, 0);
	gfx.PutPixel(13 + int(x),  8 + int(y), 51, 28, 0);
	gfx.PutPixel(14 + int(x),  8 + int(y), 51, 28, 0);
	gfx.PutPixel(7 + int(x),  9 + int(y), 138, 77, 0);
	gfx.PutPixel(11 + int(x),  9 + int(y), 51, 28, 0);
	gfx.PutPixel(12 + int(x),  9 + int(y), 102, 57, 0);
	gfx.PutPixel(13 + int(x),  9 + int(y), 138, 77, 0);
	gfx.PutPixel(14 + int(x),  9 + int(y), 138, 77, 0);
	gfx.PutPixel(15 + int(x),  9 + int(y), 51, 28, 0);
	gfx.PutPixel(21 + int(x),  9 + int(y), 138, 77, 0);
	gfx.PutPixel(10 + int(x),  10 + int(y), 51, 28, 0);
	gfx.PutPixel(11 + int(x),  10 + int(y), 51, 28, 0);
	gfx.PutPixel(12 + int(x),  10 + int(y), 102, 57, 0);
	gfx.PutPixel(13 + int(x),  10 + int(y), 138, 77, 0);
	gfx.PutPixel(14 + int(x),  10 + int(y), 138, 77, 0);
	gfx.PutPixel(15 + int(x),  10 + int(y), 51, 28, 0);
	gfx.PutPixel(20 + int(x),  10 + int(y), 138, 77, 0);
	gfx.PutPixel(9 + int(x),  11 + int(y), 51, 28, 0);
	gfx.PutPixel(10 + int(x),  11 + int(y), 138, 77, 0);
	gfx.PutPixel(11 + int(x),  11 + int(y), 138, 77, 0);
	gfx.PutPixel(12 + int(x),  11 + int(y), 51, 28, 0);
	gfx.PutPixel(13 + int(x),  11 + int(y), 51, 28, 0);
	gfx.PutPixel(14 + int(x),  11 + int(y), 51, 28, 0);
	gfx.PutPixel(15 + int(x),  11 + int(y), 51, 28, 0);
	gfx.PutPixel(16 + int(x),  11 + int(y), 51, 28, 0);
	gfx.PutPixel(9 + int(x),  12 + int(y), 51, 28, 0);
	gfx.PutPixel(10 + int(x),  12 + int(y), 138, 77, 0);
	gfx.PutPixel(11 + int(x),  12 + int(y), 138, 77, 0);
	gfx.PutPixel(12 + int(x),  12 + int(y), 111, 62, 0);
	gfx.PutPixel(13 + int(x),  12 + int(y), 102, 57, 0);
	gfx.PutPixel(14 + int(x),  12 + int(y), 102, 57, 0);
	gfx.PutPixel(15 + int(x),  12 + int(y), 102, 57, 0);
	gfx.PutPixel(16 + int(x),  12 + int(y), 51, 28, 0);
	gfx.PutPixel(9 + int(x),  13 + int(y), 51, 28, 0);
	gfx.PutPixel(10 + int(x),  13 + int(y), 109, 61, 0);
	gfx.PutPixel(11 + int(x),  13 + int(y), 138, 77, 0);
	gfx.PutPixel(12 + int(x),  13 + int(y), 138, 77, 0);
	gfx.PutPixel(13 + int(x),  13 + int(y), 138, 77, 0);
	gfx.PutPixel(14 + int(x),  13 + int(y), 138, 77, 0);
	gfx.PutPixel(15 + int(x),  13 + int(y), 138, 77, 0);
	gfx.PutPixel(16 + int(x),  13 + int(y), 51, 28, 0);
	gfx.PutPixel(5 + int(x),  14 + int(y), 51, 28, 0);
	gfx.PutPixel(7 + int(x),  14 + int(y), 51, 28, 0);
	gfx.PutPixel(8 + int(x),  14 + int(y), 51, 28, 0);
	gfx.PutPixel(9 + int(x),  14 + int(y), 51, 28, 0);
	gfx.PutPixel(10 + int(x),  14 + int(y), 51, 28, 0);
	gfx.PutPixel(11 + int(x),  14 + int(y), 138, 77, 0);
	gfx.PutPixel(12 + int(x),  14 + int(y), 138, 77, 0);
	gfx.PutPixel(13 + int(x),  14 + int(y), 138, 77, 0);
	gfx.PutPixel(14 + int(x),  14 + int(y), 138, 77, 0);
	gfx.PutPixel(15 + int(x),  14 + int(y), 138, 77, 0);
	gfx.PutPixel(16 + int(x),  14 + int(y), 51, 28, 0);
	gfx.PutPixel(4 + int(x),  15 + int(y), 51, 28, 0);
	gfx.PutPixel(5 + int(x),  15 + int(y), 138, 77, 0);
	gfx.PutPixel(6 + int(x),  15 + int(y), 51, 28, 0);
	gfx.PutPixel(7 + int(x),  15 + int(y), 116, 65, 0);
	gfx.PutPixel(8 + int(x),  15 + int(y), 138, 77, 0);
	gfx.PutPixel(9 + int(x),  15 + int(y), 138, 77, 0);
	gfx.PutPixel(10 + int(x),  15 + int(y), 138, 77, 0);
	gfx.PutPixel(11 + int(x),  15 + int(y), 51, 28, 0);
	gfx.PutPixel(12 + int(x),  15 + int(y), 51, 28, 0);
	gfx.PutPixel(13 + int(x),  15 + int(y), 51, 28, 0);
	gfx.PutPixel(14 + int(x),  15 + int(y), 51, 28, 0);
	gfx.PutPixel(15 + int(x),  15 + int(y), 51, 28, 0);
	gfx.PutPixel(16 + int(x),  15 + int(y), 51, 28, 0);
	gfx.PutPixel(17 + int(x),  15 + int(y), 51, 28, 0);
	gfx.PutPixel(18 + int(x),  15 + int(y), 51, 28, 0);
	gfx.PutPixel(1 + int(x),  16 + int(y), 51, 28, 0);
	gfx.PutPixel(2 + int(x),  16 + int(y), 51, 28, 0);
	gfx.PutPixel(3 + int(x),  16 + int(y), 51, 28, 0);
	gfx.PutPixel(4 + int(x),  16 + int(y), 51, 28, 0);
	gfx.PutPixel(5 + int(x),  16 + int(y), 138, 77, 0);
	gfx.PutPixel(6 + int(x),  16 + int(y), 51, 28, 0);
	gfx.PutPixel(7 + int(x),  16 + int(y), 116, 65, 0);
	gfx.PutPixel(8 + int(x),  16 + int(y), 138, 77, 0);
	gfx.PutPixel(9 + int(x),  16 + int(y), 138, 77, 0);
	gfx.PutPixel(10 + int(x),  16 + int(y), 138, 77, 0);
	gfx.PutPixel(11 + int(x),  16 + int(y), 138, 77, 0);
	gfx.PutPixel(12 + int(x),  16 + int(y), 138, 77, 0);
	gfx.PutPixel(13 + int(x),  16 + int(y), 109, 61, 0);
	gfx.PutPixel(14 + int(x),  16 + int(y), 51, 28, 0);
	gfx.PutPixel(15 + int(x),  16 + int(y), 138, 77, 0);
	gfx.PutPixel(16 + int(x),  16 + int(y), 138, 77, 0);
	gfx.PutPixel(17 + int(x),  16 + int(y), 138, 77, 0);
	gfx.PutPixel(18 + int(x),  16 + int(y), 123, 69, 0);
	gfx.PutPixel(19 + int(x),  16 + int(y), 51, 28, 0);
	gfx.PutPixel(0 + int(x),  17 + int(y), 51, 28, 0);
	gfx.PutPixel(1 + int(x),  17 + int(y), 87, 49, 0);
	gfx.PutPixel(2 + int(x),  17 + int(y), 87, 49, 0);
	gfx.PutPixel(3 + int(x),  17 + int(y), 87, 49, 0);
	gfx.PutPixel(4 + int(x),  17 + int(y), 87, 49, 0);
	gfx.PutPixel(5 + int(x),  17 + int(y), 51, 28, 0);
	gfx.PutPixel(6 + int(x),  17 + int(y), 51, 28, 0);
	gfx.PutPixel(7 + int(x),  17 + int(y), 43, 24, 0);
	gfx.PutPixel(8 + int(x),  17 + int(y), 51, 28, 0);
	gfx.PutPixel(9 + int(x),  17 + int(y), 51, 28, 0);
	gfx.PutPixel(10 + int(x),  17 + int(y), 51, 28, 0);
	gfx.PutPixel(11 + int(x),  17 + int(y), 51, 28, 0);
	gfx.PutPixel(12 + int(x),  17 + int(y), 51, 28, 0);
	gfx.PutPixel(13 + int(x),  17 + int(y), 40, 22, 0);
	gfx.PutPixel(14 + int(x),  17 + int(y), 51, 28, 0);
	gfx.PutPixel(15 + int(x),  17 + int(y), 138, 77, 0);
	gfx.PutPixel(16 + int(x),  17 + int(y), 138, 77, 0);
	gfx.PutPixel(17 + int(x),  17 + int(y), 138, 77, 0);
	gfx.PutPixel(18 + int(x),  17 + int(y), 123, 69, 0);
	gfx.PutPixel(19 + int(x),  17 + int(y), 51, 28, 0);
	gfx.PutPixel(0 + int(x),  18 + int(y), 51, 28, 0);
	gfx.PutPixel(1 + int(x),  18 + int(y), 138, 77, 0);
	gfx.PutPixel(2 + int(x),  18 + int(y), 138, 77, 0);
	gfx.PutPixel(3 + int(x),  18 + int(y), 138, 77, 0);
	gfx.PutPixel(4 + int(x),  18 + int(y), 138, 77, 0);
	gfx.PutPixel(5 + int(x),  18 + int(y), 51, 28, 0);
	gfx.PutPixel(6 + int(x),  18 + int(y), 51, 28, 0);
	gfx.PutPixel(7 + int(x),  18 + int(y), 51, 28, 0);
	gfx.PutPixel(8 + int(x),  18 + int(y), 51, 28, 0);
	gfx.PutPixel(9 + int(x),  18 + int(y), 51, 28, 0);
	gfx.PutPixel(10 + int(x),  18 + int(y), 51, 28, 0);
	gfx.PutPixel(11 + int(x),  18 + int(y), 51, 28, 0);
	gfx.PutPixel(12 + int(x),  18 + int(y), 51, 28, 0);
	gfx.PutPixel(13 + int(x),  18 + int(y), 51, 28, 0);
	gfx.PutPixel(14 + int(x),  18 + int(y), 51, 28, 0);
	gfx.PutPixel(15 + int(x),  18 + int(y), 138, 77, 0);
	gfx.PutPixel(16 + int(x),  18 + int(y), 138, 77, 0);
	gfx.PutPixel(17 + int(x),  18 + int(y), 138, 77, 0);
	gfx.PutPixel(18 + int(x),  18 + int(y), 123, 69, 0);
	gfx.PutPixel(19 + int(x),  18 + int(y), 51, 28, 0);
	gfx.PutPixel(20 + int(x),  18 + int(y), 51, 28, 0);
	gfx.PutPixel(21 + int(x),  18 + int(y), 51, 28, 0);
	gfx.PutPixel(22 + int(x),  18 + int(y), 51, 28, 0);
	gfx.PutPixel(0 + int(x),  19 + int(y), 51, 28, 0);
	gfx.PutPixel(1 + int(x),  19 + int(y), 138, 77, 0);
	gfx.PutPixel(2 + int(x),  19 + int(y), 138, 77, 0);
	gfx.PutPixel(3 + int(x),  19 + int(y), 138, 77, 0);
	gfx.PutPixel(4 + int(x),  19 + int(y), 138, 77, 0);
	gfx.PutPixel(5 + int(x),  19 + int(y), 51, 28, 0);
	gfx.PutPixel(6 + int(x),  19 + int(y), 138, 77, 0);
	gfx.PutPixel(7 + int(x),  19 + int(y), 138, 77, 0);
	gfx.PutPixel(8 + int(x),  19 + int(y), 138, 77, 0);
	gfx.PutPixel(9 + int(x),  19 + int(y), 138, 77, 0);
	gfx.PutPixel(10 + int(x),  19 + int(y), 138, 77, 0);
	gfx.PutPixel(11 + int(x),  19 + int(y), 138, 77, 0);
	gfx.PutPixel(12 + int(x),  19 + int(y), 138, 77, 0);
	gfx.PutPixel(13 + int(x),  19 + int(y), 138, 77, 0);
	gfx.PutPixel(14 + int(x),  19 + int(y), 138, 77, 0);
	gfx.PutPixel(15 + int(x),  19 + int(y), 138, 77, 0);
	gfx.PutPixel(16 + int(x),  19 + int(y), 138, 77, 0);
	gfx.PutPixel(17 + int(x),  19 + int(y), 138, 77, 0);
	gfx.PutPixel(18 + int(x),  19 + int(y), 123, 69, 0);
	gfx.PutPixel(19 + int(x),  19 + int(y), 51, 28, 0);
	gfx.PutPixel(20 + int(x),  19 + int(y), 138, 77, 0);
	gfx.PutPixel(21 + int(x),  19 + int(y), 138, 77, 0);
	gfx.PutPixel(22 + int(x),  19 + int(y), 65, 36, 0);
	gfx.PutPixel(23 + int(x),  19 + int(y), 51, 28, 0);
	gfx.PutPixel(1 + int(x),  20 + int(y), 51, 28, 0);
	gfx.PutPixel(2 + int(x),  20 + int(y), 51, 28, 0);
	gfx.PutPixel(3 + int(x),  20 + int(y), 51, 28, 0);
	gfx.PutPixel(4 + int(x),  20 + int(y), 51, 28, 0);
	gfx.PutPixel(5 + int(x),  20 + int(y), 51, 28, 0);
	gfx.PutPixel(6 + int(x),  20 + int(y), 138, 77, 0);
	gfx.PutPixel(7 + int(x),  20 + int(y), 138, 77, 0);
	gfx.PutPixel(8 + int(x),  20 + int(y), 138, 77, 0);
	gfx.PutPixel(9 + int(x),  20 + int(y), 138, 77, 0);
	gfx.PutPixel(10 + int(x),  20 + int(y), 138, 77, 0);
	gfx.PutPixel(11 + int(x),  20 + int(y), 138, 77, 0);
	gfx.PutPixel(12 + int(x),  20 + int(y), 138, 77, 0);
	gfx.PutPixel(13 + int(x),  20 + int(y), 138, 77, 0);
	gfx.PutPixel(14 + int(x),  20 + int(y), 138, 77, 0);
	gfx.PutPixel(15 + int(x),  20 + int(y), 138, 77, 0);
	gfx.PutPixel(16 + int(x),  20 + int(y), 138, 77, 0);
	gfx.PutPixel(17 + int(x),  20 + int(y), 138, 77, 0);
	gfx.PutPixel(18 + int(x),  20 + int(y), 123, 69, 0);
	gfx.PutPixel(19 + int(x),  20 + int(y), 51, 28, 0);
	gfx.PutPixel(20 + int(x),  20 + int(y), 138, 77, 0);
	gfx.PutPixel(21 + int(x),  20 + int(y), 138, 77, 0);
	gfx.PutPixel(22 + int(x),  20 + int(y), 65, 36, 0);
	gfx.PutPixel(23 + int(x),  20 + int(y), 51, 28, 0);
	gfx.PutPixel(0 + int(x),  21 + int(y), 51, 28, 0);
	gfx.PutPixel(1 + int(x),  21 + int(y), 138, 77, 0);
	gfx.PutPixel(2 + int(x),  21 + int(y), 138, 77, 0);
	gfx.PutPixel(3 + int(x),  21 + int(y), 138, 77, 0);
	gfx.PutPixel(4 + int(x),  21 + int(y), 138, 77, 0);
	gfx.PutPixel(5 + int(x),  21 + int(y), 138, 77, 0);
	gfx.PutPixel(6 + int(x),  21 + int(y), 51, 28, 0);
	gfx.PutPixel(7 + int(x),  21 + int(y), 51, 28, 0);
	gfx.PutPixel(8 + int(x),  21 + int(y), 51, 28, 0);
	gfx.PutPixel(9 + int(x),  21 + int(y), 51, 28, 0);
	gfx.PutPixel(10 + int(x),  21 + int(y), 51, 28, 0);
	gfx.PutPixel(11 + int(x),  21 + int(y), 51, 28, 0);
	gfx.PutPixel(12 + int(x),  21 + int(y), 51, 28, 0);
	gfx.PutPixel(13 + int(x),  21 + int(y), 51, 28, 0);
	gfx.PutPixel(14 + int(x),  21 + int(y), 51, 28, 0);
	gfx.PutPixel(15 + int(x),  21 + int(y), 51, 28, 0);
	gfx.PutPixel(16 + int(x),  21 + int(y), 51, 28, 0);
	gfx.PutPixel(17 + int(x),  21 + int(y), 51, 28, 0);
	gfx.PutPixel(18 + int(x),  21 + int(y), 51, 28, 0);
	gfx.PutPixel(20 + int(x),  21 + int(y), 51, 28, 0);
	gfx.PutPixel(21 + int(x),  21 + int(y), 51, 28, 0);
	gfx.PutPixel(22 + int(x),  21 + int(y), 51, 28, 0);
	gfx.PutPixel(0 + int(x),  22 + int(y), 51, 28, 0);
	gfx.PutPixel(1 + int(x),  22 + int(y), 65, 36, 0);
	gfx.PutPixel(2 + int(x),  22 + int(y), 65, 36, 0);
	gfx.PutPixel(3 + int(x),  22 + int(y), 65, 36, 0);
	gfx.PutPixel(4 + int(x),  22 + int(y), 65, 36, 0);
	gfx.PutPixel(5 + int(x),  22 + int(y), 65, 36, 0);
	gfx.PutPixel(6 + int(x),  22 + int(y), 51, 28, 0);
	gfx.PutPixel(1 + int(x),  23 + int(y), 51, 28, 0);
	gfx.PutPixel(2 + int(x),  23 + int(y), 51, 28, 0);
	gfx.PutPixel(3 + int(x),  23 + int(y), 51, 28, 0);
	gfx.PutPixel(4 + int(x),  23 + int(y), 51, 28, 0);
	gfx.PutPixel(5 + int(x),  23 + int(y), 51, 28, 0);
	gfx.PutPixel(6 + int(x),  23 + int(y), 51, 28, 0);
}

void Poo::IsFailed(Lives& lives)
{
	if ((lives_dec_allowed) && (isPooEaten)) {
		lives.DecNum();
		lives_dec_allowed = false;
	}
}
