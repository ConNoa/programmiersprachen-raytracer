#ifndef BOX_HPP
#define BOX_HPP
#include "shape.hpp"
#include <glm/vec3.hpp>
#include "color.hpp"



class Box : public Shape
{

		glm::vec3 minimum;
		glm::vec3 maximum;
	/*	Color color_;
		std::string name_;

*/
		public:

		Box();
		Box(glm::vec3 minimum_in, glm::vec3 maximum_in);

		//Getter:
		glm::vec3 	const& get_minimum() const;
		glm::vec3 	const& get_maximum() const;


		float		area()	const override;
		float		volume() const override;



};

#endif