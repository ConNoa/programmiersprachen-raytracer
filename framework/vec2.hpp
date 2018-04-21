#ifndef VEC2_HPP
#define VEC2_HPP

struct Vec2
{

	float x_;
	float y_;

	Vec2& operator+=(Vec2 const& other){
		x_ += other.x_;
		y_ += other.y_;
		return *this;
	}

	friend Vec2 operator+(Vec2 const& a, Vec2 const& b){
		Vec2 tmp(a);
		tmp += b;
		return tmp;
	}
};



#endif
