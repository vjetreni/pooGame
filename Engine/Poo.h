#pragma once

#include "Graphics.h"
#include "Dude.h"
#include "Lives.h"


class Poo {

public:
	void Init(float in_x, float in_y, float in_vx, float in_vy);
	void MoveCheckBordersBounce(float dt);
	bool TestCollision(Dude&);
	void Draw(Graphics& gfx) const;
	void IsFailed(Lives& lives);
private:
	float x;
	float y;
	bool isPooEaten = false;
	static constexpr float width = 24.0f;
	static constexpr float height = 24.0f;
	float vx;
	float vy;
	bool lives_dec_allowed = true;
};