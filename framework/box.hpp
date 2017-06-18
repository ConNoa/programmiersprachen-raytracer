#ifndef BOX_HPP
#define BOX_HPP
#include "shape.hpp"
#include <glm/vec3.hpp>




class Box : public Shape
{
		public:

		Box();
		Box(glm::vec3 minimum_in, glm::vec3 maximum_in);

		//Getter:
		glm::vec3 	get_minimum() const;
		glm::vec3 	get_maximum() const;


		float		area()	const override;
		float		volume() const override;



		private:

			glm::vec3 minimum;
			glm::vec3 maximum;


};

#endif