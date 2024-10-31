#pragma once

#include "Graphics.h"
#include "Dude.h"
#include "Lives.h"


class Poo {

public:
	void Init(int in_x, int in_y, int in_vx, int in_vy);
	void MoveCheckBordersBounce();
	bool TestCollision(Dude&);
	void Draw(Graphics& gfx) const;
	void IsFailed(Lives& lives);
private:
	int x;
	int y;
	bool isPooEaten = false;
	static constexpr int width = 24;
	static constexpr int height = 24;
	int vx;
	int vy;
	bool lives_dec_allowed = true;
};