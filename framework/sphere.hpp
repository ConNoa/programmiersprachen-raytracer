#ifndef SPHERE_HPP
#define SPHERE_HPP
#include "shape.hpp"
#include <glm/vec3.hpp>
#include <iostream>


class Sphere : public Shape
{		
		
		glm::vec3 midpoint;
		float radius;
		

		public:

		Sphere();
		Sphere(glm::vec3 midpoint_in, float radius_in);
		Sphere(glm::vec3 midpoint_in, float radius_in, Color const& color_in, std::string name_in);

		//Getter:
		glm::vec3 	const& get_midpoint() const;
		float				get_radius() const;

		float		area()	const override;
		float		volume() const override;

		std::ostream& print(std::ostream& os) const override;


};

#endif
