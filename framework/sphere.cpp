#include "sphere.hpp"
#include <cmath>

		Sphere::Sphere():
		Shape{},
		midpoint{10.0,10.0,10.0},
		radius{5.0}{}


		Sphere::Sphere(glm::vec3 midpoint_in, float radius_in):
		midpoint{midpoint_in},
		radius{radius_in}
		{}

		Sphere::Sphere(glm::vec3 midpoint_in, float radius_in, Color const& color_in, std::string name_in):
		Shape{color_in, name_in},
		midpoint{midpoint_in},
		radius{radius_in}
		{}


		glm::vec3 	const& Sphere::get_midpoint() const
		{
			return midpoint;
		}

		float  Sphere::get_radius() const
		{
			return radius;
		}


		float		Sphere::area()	const 
		{


				return (fabs(4*M_PI*radius*radius));
		}

		float		Sphere::volume() const 
		{
					return  (fabs(4/3*M_PI*radius*radius*radius));

		}

		std::ostream& Sphere::print(std::ostream& os) const
		{
			Shape::print(os) ;
			os << "middle: <" << midpoint.x << "," << midpoint.y << "," << midpoint.z << "> \n" 
			   << "radius: " << radius <<"\n" ;
			return os; 
		}


