#pragma once
namespace MathsLib 
{
	class Vector2
	{
	public:
		float x, y;

		Vector2();

		Vector2(float _x, float _y);

		inline Vector2 Add(const Vector2 &rhs) const
		{
			return Vector2(x + rhs.x, y + rhs.y);
		};

		inline Vector2 Subtract(const Vector2 &rhs) const
		{
			return Vector2(x - rhs.x, y - rhs.y);
		};

		inline float Dot(const Vector2 &rhs) const
		{
			return x * rhs.x + y * rhs.y;
		};

		inline Vector2 Cross(const Vector2 &rhs) const
		{
			return Vector2(x * rhs.x , y * rhs.y);
		};

		inline 

		inline void Normalise()
		{
			float length = sqrt(x*x + y*y);

			if (length > 0.0f)
			{
				x /= length;
				y /= length;
			}
			else
			{
				x = y = 0.0f;
			}
		};
	};

	class Vector3
	{
	public:
		float x, y, z;

		Vector3();

		Vector3(float _x, float _y, float _3);

		inline Vector3 Add(const Vector3 &rhs) const
		{
			return Vector3(x + rhs.x, y + rhs.y, z + rhs.z);
		};

		inline Vector3 Subtract(const Vector3 &rhs) const
		{
			return Vector3(x - rhs.x, y - rhs.y, z - rhs.z);
		};

		inline float Dot(const Vector3 &rhs) const
		{
			return x * rhs.x + y * rhs.y + z * rhs.z;
		};

		inline Vector3 Cross(const Vector3 &rhs) const
		{
			return Vector3(x * rhs.x, y * rhs.y, z * rhs.z);
		};

		inline

			inline void Normalise()
		{
			float length = sqrt(x*x + y*y + z*z);

			if (length > 0.0f)
			{
				x /= length;
				y /= length;
				z /= length;
			}
			else
			{
				x = y = z = 0.0f;
			}
		};
	};
}