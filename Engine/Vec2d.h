#pragma once


class Vec2d {

public:
	Vec2d() = default;
	Vec2d(float x, float y);
	bool operator==( Vec2d& rhs);
	Vec2d operator+(Vec2d& rhs)  const;
	Vec2d& operator+=(Vec2d& rhs);
	Vec2d operator*(float rhs)  const;
	Vec2d& operator*=(float rhs);
	Vec2d operator-(Vec2d& rhs)  const;
	Vec2d& operator-=(Vec2d& rhs);
	float GetLength() const;
	float GetLengthSQ() const;
	Vec2d& Normalize();
	Vec2d GetNormalized() const;

public:
	float x;
	float y;
};