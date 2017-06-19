#include "shape.hpp"




	Shape::Shape():
    color_{Color{0.0f,0.0f,0.0f}},
    name_{"newShape"}{}

    Shape::Shape(Color const& color_in):
    color_{color_in},
    name_{"newShape"}{}

    Shape::Shape(std::string name_in):
    color_{Color{0.0f,0.0f,0.0f}},
    name_{name_in}{}

    Shape::Shape(Color const& color_in, std::string name_in):
    color_{color_in},
    name_{name_in}{}

 
   	Color 		const& Shape::get_color_()
   	{
   			return color_;
   	}

	std::string const& Shape::get_name_()
	{
			return name_;
	}

	std::ostream& Shape::print(std::ostream& os) const
	{
		os << "name:   " << name_  << "\n"<< "color:  " << color_; 
		return os;
	}

	std::ostream& operator<<(std::ostream& os, Shape const& s)
	{
	    return s.print(os);
	}