#include "Poo.h"
#include "Dude.h"
#include "Graphics.h"

void Poo::Init(Vec2d pos_in, Vec2d vel_in)
{
	pos = pos_in;
	vel = vel_in;
}

void Poo::MoveCheckBordersBounce(float dt)
{
	pos += vel * (dt * 60);

	if (pos.x + width > (float)Graphics::ScreenWidth) {
		pos.x = (float)Graphics::ScreenWidth - width;
		vel.x *= -1.0f; 
	}
	if (pos.x < 0) {
		pos.x = 0;
		vel.x *= -1.0f;
	}
	if (pos.y + height > (float)Graphics::ScreenHeight) {
		pos.y = (float)Graphics::ScreenHeight - height;
		vel.y *= -1.0f;
	}
	if (pos.y < 0) {
		pos.y = 0;
		vel.y *= -1.0f;
	}
}

bool Poo::TestCollision(Dude& dude)
{
	if (!isPooEaten) {
		float rightPoo = pos.x + width;
		float rightDude = dude.GetPos().x + dude.width;
		float	downPoo = pos.y + height;
		float	downDude = dude.GetPos().y + dude.height;

		if ((rightPoo >= dude.GetPos().x) && (pos.x <= rightDude) && (pos.y <= downDude) && (downPoo >= dude.GetPos().y)) {
			isPooEaten = true;
		}
	}
	return isPooEaten;
}

void Poo::Draw(Graphics& gfx) const
{
	

	gfx.PutPixel(int(pos.x) + 14, 0 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(7 + int(pos.x),  1 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(13 + int(pos.x),  1 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(20 + int(pos.x),  1 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(6 + int(pos.x),  2 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(13 + int(pos.x),  2 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(20 + int(pos.x),  2 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(6 + int(pos.x),  3 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(6 + int(pos.x),  4 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(14 + int(pos.x),  4 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(21 + int(pos.x),  4 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(7 + int(pos.x),  5 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(13 + int(pos.x),  5 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(21 + int(pos.x),  5 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(7 + int(pos.x),  6 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(20 + int(pos.x),  6 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(6 + int(pos.x),  7 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(14 + int(pos.x),  7 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(15 + int(pos.x),  7 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(20 + int(pos.x),  7 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(12 + int(pos.x),  8 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(13 + int(pos.x),  8 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(14 + int(pos.x),  8 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(7 + int(pos.x),  9 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(11 + int(pos.x),  9 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(12 + int(pos.x),  9 + int(pos.y), 102, 57, 0);
	gfx.PutPixel(13 + int(pos.x),  9 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(14 + int(pos.x),  9 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(15 + int(pos.x),  9 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(21 + int(pos.x),  9 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(10 + int(pos.x),  10 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(11 + int(pos.x),  10 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(12 + int(pos.x),  10 + int(pos.y), 102, 57, 0);
	gfx.PutPixel(13 + int(pos.x),  10 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(14 + int(pos.x),  10 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(15 + int(pos.x),  10 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(20 + int(pos.x),  10 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(9 + int(pos.x),  11 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(10 + int(pos.x),  11 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(11 + int(pos.x),  11 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(12 + int(pos.x),  11 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(13 + int(pos.x),  11 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(14 + int(pos.x),  11 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(15 + int(pos.x),  11 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(16 + int(pos.x),  11 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(9 + int(pos.x),  12 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(10 + int(pos.x),  12 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(11 + int(pos.x),  12 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(12 + int(pos.x),  12 + int(pos.y), 111, 62, 0);
	gfx.PutPixel(13 + int(pos.x),  12 + int(pos.y), 102, 57, 0);
	gfx.PutPixel(14 + int(pos.x),  12 + int(pos.y), 102, 57, 0);
	gfx.PutPixel(15 + int(pos.x),  12 + int(pos.y), 102, 57, 0);
	gfx.PutPixel(16 + int(pos.x),  12 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(9 + int(pos.x),  13 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(10 + int(pos.x),  13 + int(pos.y), 109, 61, 0);
	gfx.PutPixel(11 + int(pos.x),  13 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(12 + int(pos.x),  13 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(13 + int(pos.x),  13 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(14 + int(pos.x),  13 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(15 + int(pos.x),  13 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(16 + int(pos.x),  13 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(5 + int(pos.x),  14 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(7 + int(pos.x),  14 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(8 + int(pos.x),  14 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(9 + int(pos.x),  14 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(10 + int(pos.x),  14 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(11 + int(pos.x),  14 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(12 + int(pos.x),  14 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(13 + int(pos.x),  14 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(14 + int(pos.x),  14 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(15 + int(pos.x),  14 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(16 + int(pos.x),  14 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(4 + int(pos.x),  15 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(5 + int(pos.x),  15 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(6 + int(pos.x),  15 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(7 + int(pos.x),  15 + int(pos.y), 116, 65, 0);
	gfx.PutPixel(8 + int(pos.x),  15 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(9 + int(pos.x),  15 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(10 + int(pos.x),  15 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(11 + int(pos.x),  15 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(12 + int(pos.x),  15 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(13 + int(pos.x),  15 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(14 + int(pos.x),  15 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(15 + int(pos.x),  15 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(16 + int(pos.x),  15 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(17 + int(pos.x),  15 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(18 + int(pos.x),  15 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(1 + int(pos.x),  16 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(2 + int(pos.x),  16 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(3 + int(pos.x),  16 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(4 + int(pos.x),  16 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(5 + int(pos.x),  16 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(6 + int(pos.x),  16 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(7 + int(pos.x),  16 + int(pos.y), 116, 65, 0);
	gfx.PutPixel(8 + int(pos.x),  16 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(9 + int(pos.x),  16 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(10 + int(pos.x),  16 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(11 + int(pos.x),  16 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(12 + int(pos.x),  16 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(13 + int(pos.x),  16 + int(pos.y), 109, 61, 0);
	gfx.PutPixel(14 + int(pos.x),  16 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(15 + int(pos.x),  16 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(16 + int(pos.x),  16 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(17 + int(pos.x),  16 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(18 + int(pos.x),  16 + int(pos.y), 123, 69, 0);
	gfx.PutPixel(19 + int(pos.x),  16 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(0 + int(pos.x),  17 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(1 + int(pos.x),  17 + int(pos.y), 87, 49, 0);
	gfx.PutPixel(2 + int(pos.x),  17 + int(pos.y), 87, 49, 0);
	gfx.PutPixel(3 + int(pos.x),  17 + int(pos.y), 87, 49, 0);
	gfx.PutPixel(4 + int(pos.x),  17 + int(pos.y), 87, 49, 0);
	gfx.PutPixel(5 + int(pos.x),  17 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(6 + int(pos.x),  17 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(7 + int(pos.x),  17 + int(pos.y), 43, 24, 0);
	gfx.PutPixel(8 + int(pos.x),  17 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(9 + int(pos.x),  17 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(10 + int(pos.x),  17 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(11 + int(pos.x),  17 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(12 + int(pos.x),  17 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(13 + int(pos.x),  17 + int(pos.y), 40, 22, 0);
	gfx.PutPixel(14 + int(pos.x),  17 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(15 + int(pos.x),  17 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(16 + int(pos.x),  17 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(17 + int(pos.x),  17 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(18 + int(pos.x),  17 + int(pos.y), 123, 69, 0);
	gfx.PutPixel(19 + int(pos.x),  17 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(0 + int(pos.x),  18 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(1 + int(pos.x),  18 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(2 + int(pos.x),  18 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(3 + int(pos.x),  18 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(4 + int(pos.x),  18 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(5 + int(pos.x),  18 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(6 + int(pos.x),  18 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(7 + int(pos.x),  18 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(8 + int(pos.x),  18 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(9 + int(pos.x),  18 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(10 + int(pos.x),  18 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(11 + int(pos.x),  18 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(12 + int(pos.x),  18 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(13 + int(pos.x),  18 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(14 + int(pos.x),  18 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(15 + int(pos.x),  18 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(16 + int(pos.x),  18 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(17 + int(pos.x),  18 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(18 + int(pos.x),  18 + int(pos.y), 123, 69, 0);
	gfx.PutPixel(19 + int(pos.x),  18 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(20 + int(pos.x),  18 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(21 + int(pos.x),  18 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(22 + int(pos.x),  18 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(0 + int(pos.x),  19 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(1 + int(pos.x),  19 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(2 + int(pos.x),  19 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(3 + int(pos.x),  19 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(4 + int(pos.x),  19 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(5 + int(pos.x),  19 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(6 + int(pos.x),  19 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(7 + int(pos.x),  19 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(8 + int(pos.x),  19 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(9 + int(pos.x),  19 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(10 + int(pos.x),  19 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(11 + int(pos.x),  19 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(12 + int(pos.x),  19 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(13 + int(pos.x),  19 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(14 + int(pos.x),  19 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(15 + int(pos.x),  19 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(16 + int(pos.x),  19 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(17 + int(pos.x),  19 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(18 + int(pos.x),  19 + int(pos.y), 123, 69, 0);
	gfx.PutPixel(19 + int(pos.x),  19 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(20 + int(pos.x),  19 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(21 + int(pos.x),  19 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(22 + int(pos.x),  19 + int(pos.y), 65, 36, 0);
	gfx.PutPixel(23 + int(pos.x),  19 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(1 + int(pos.x),  20 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(2 + int(pos.x),  20 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(3 + int(pos.x),  20 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(4 + int(pos.x),  20 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(5 + int(pos.x),  20 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(6 + int(pos.x),  20 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(7 + int(pos.x),  20 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(8 + int(pos.x),  20 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(9 + int(pos.x),  20 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(10 + int(pos.x),  20 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(11 + int(pos.x),  20 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(12 + int(pos.x),  20 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(13 + int(pos.x),  20 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(14 + int(pos.x),  20 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(15 + int(pos.x),  20 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(16 + int(pos.x),  20 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(17 + int(pos.x),  20 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(18 + int(pos.x),  20 + int(pos.y), 123, 69, 0);
	gfx.PutPixel(19 + int(pos.x),  20 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(20 + int(pos.x),  20 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(21 + int(pos.x),  20 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(22 + int(pos.x),  20 + int(pos.y), 65, 36, 0);
	gfx.PutPixel(23 + int(pos.x),  20 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(0 + int(pos.x),  21 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(1 + int(pos.x),  21 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(2 + int(pos.x),  21 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(3 + int(pos.x),  21 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(4 + int(pos.x),  21 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(5 + int(pos.x),  21 + int(pos.y), 138, 77, 0);
	gfx.PutPixel(6 + int(pos.x),  21 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(7 + int(pos.x),  21 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(8 + int(pos.x),  21 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(9 + int(pos.x),  21 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(10 + int(pos.x),  21 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(11 + int(pos.x),  21 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(12 + int(pos.x),  21 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(13 + int(pos.x),  21 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(14 + int(pos.x),  21 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(15 + int(pos.x),  21 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(16 + int(pos.x),  21 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(17 + int(pos.x),  21 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(18 + int(pos.x),  21 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(20 + int(pos.x),  21 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(21 + int(pos.x),  21 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(22 + int(pos.x),  21 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(0 + int(pos.x),  22 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(1 + int(pos.x),  22 + int(pos.y), 65, 36, 0);
	gfx.PutPixel(2 + int(pos.x),  22 + int(pos.y), 65, 36, 0);
	gfx.PutPixel(3 + int(pos.x),  22 + int(pos.y), 65, 36, 0);
	gfx.PutPixel(4 + int(pos.x),  22 + int(pos.y), 65, 36, 0);
	gfx.PutPixel(5 + int(pos.x),  22 + int(pos.y), 65, 36, 0);
	gfx.PutPixel(6 + int(pos.x),  22 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(1 + int(pos.x),  23 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(2 + int(pos.x),  23 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(3 + int(pos.x),  23 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(4 + int(pos.x),  23 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(5 + int(pos.x),  23 + int(pos.y), 51, 28, 0);
	gfx.PutPixel(6 + int(pos.x),  23 + int(pos.y), 51, 28, 0);
}

void Poo::IsFailed(Lives& lives)
{
	if ((lives_dec_allowed) && (isPooEaten)) {
		lives.DecNum();
		lives_dec_allowed = false;
	}
}
