#include "box.hpp"

		Box::Shape():
		Shape::Shape(),
		minimum{}
		maximum{}{}


		Box::Shape():Shape::Shape()(glm::vec3 minimum_in, glm::vec3 maximum_in):
		minimum{minimum_in}
		maximum{maximum_in}{}



		//Getter:
		glm::vec3 	get_minimum() const
		{
			return minimum;
		}

		glm::vec3 	get_maximum() const
		{
			return maximum;
		}


		float		area()	const override
		{
			return 0.1f;
		}

		float		volume() const override
		{
			return 0.1f;
		}

