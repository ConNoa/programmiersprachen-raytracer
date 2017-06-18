#ifndef SHAPE_HPP
#define SHAPE_HPP
#include "color.hpp"

class Shape
{
/*
	Color color_;
	std::string name_;
*/
public:
/*
	virtual Color const& get_color_() const = 0;
	virtual std::string const& get_name_() const = 0;
*/

	virtual float area() const = 0;
	virtual float volume() const = 0;
};




#endif