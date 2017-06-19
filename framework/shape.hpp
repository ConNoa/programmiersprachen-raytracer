#ifndef SHAPE_HPP
#define SHAPE_HPP
#include "color.hpp"

class Shape
{

	Color color_;
	std::string name_;



public:

	Shape();
	Shape(Color const& color_);
	Shape(std::string name_);
	Shape(Color const& color_, std::string name_);



	Color 		const& get_color_();
	std::string const& get_name_();

	virtual float area() const = 0;
	virtual float volume() const = 0;

	virtual std::ostream& print(std::ostream& os) const =0;
	
};




#endif