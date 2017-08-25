#include "MathsLib.h"
#include <stdexcept>

MathsLib::Vector2::Vector2()
{
		x = y = 0.0f;
}

MathsLib::Vector2::Vector2(float _x, float _y)
{
	x = _x; y = _y;
}

MathsLib::Vector3::Vector3()
{
	x = y = z = 0.0f;
}

MathsLib::Vector3::Vector3(float _x, float _y, float _z)
{
	x = _x; y = _y; x = _z;
}
