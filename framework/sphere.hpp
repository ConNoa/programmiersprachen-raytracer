#ifndef SPHERE_HPP
#define SPHERE_HPP
#include "shape.hpp"
#include <glm/vec3.hpp>


class Sphere : public Shape
{
		public:

		Sphere();
		Sphere(glm::vec3 midpoint_in);

		//Getter:
		glm::vec3 	get_midpoint() const;

		float		area()	const override;
		float		volume() const override;


		private:
			glm::vec3 midpoint;

};

#endif
