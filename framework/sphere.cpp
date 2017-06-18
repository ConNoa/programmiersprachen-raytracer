#include "sphere.hpp"


Sphere::Sphere():
Shape::Shape(),
	midpoint{}{}


Sphere::Sphere():Shape::Shape()(glm::vec3 const& midpoint_in):
		midpoint{midpoint_in}
		{}


		glm::vec3 	get_midpoint() const
		{
			return midpoint;
		}

		float		area()	const override
		{
				return 0.1f;
		}

		float		volume() const override
		{
					return  0.1f;

		}


