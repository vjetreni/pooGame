#include "Vec2d.h"
#include <cmath>

Vec2d::Vec2d(float x, float y)
	:
	x(x),
	y(y)
{
}

Vec2d& Vec2d::operator+=(Vec2d& rhs)
{
	return *this = *this + rhs;
}

Vec2d Vec2d::operator*(float rhs) const
{
	return Vec2d(x * rhs, y * rhs);
}

Vec2d& Vec2d::operator*=(float rhs)
{
	return *this = *this * rhs;
}

Vec2d Vec2d::operator-(Vec2d& rhs) const
{
	return Vec2d(x - rhs.x, y - rhs.y);
}

Vec2d& Vec2d::operator-=(Vec2d& rhs)
{
	return *this = *this - rhs;
}

float Vec2d::GetLength() const
{
	return std::sqrt(GetLengthSQ());
}

float Vec2d::GetLengthSQ() const
{
	return (x * x + y * y);
}

Vec2d& Vec2d::Normalize()
{
	return *this = GetNormalized();
}

Vec2d Vec2d::GetNormalized() const
{
	const float len = GetLength();
	if (len != 0.0f) {
		return *this * (1.0f / len);
	}
	else {
		return *this;
	}
}

bool Vec2d::operator==(Vec2d& rhs)
{
	return ((x = rhs.x) && (y = rhs.y));
}

Vec2d Vec2d::operator+(Vec2d& rhs) const
{
	return Vec2d(x + rhs.x, y + rhs.y);
}
