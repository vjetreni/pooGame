#pragma once

#include "Graphics.h"
#include "Dude.h"
#include "Lives.h"
#include "Vec2d.h"


class Poo {

public:
	void Init(Vec2d pos_in, Vec2d vel_in);
	void MoveCheckBordersBounce(float dt);
	bool TestCollision(Dude&);
	void Draw(Graphics& gfx) const;
	void IsFailed(Lives& lives);
private:
	Vec2d pos = {0 , 0};
	Vec2d vel = { 0 , 0 };
	bool isPooEaten = false;
	static constexpr float width = 24.0f;
	static constexpr float height = 24.0f;
	bool lives_dec_allowed = true;
};