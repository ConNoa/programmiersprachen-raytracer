#include "box.hpp"
#include <math.h>       /* fabs */
	

		Box::Box():
 		Shape{},		
		minimum{glm::vec3{0.0}},
		maximum{glm::vec3{10.0}}{}


		Box::Box(glm::vec3 minimum_in, glm::vec3 maximum_in):
		Shape{},
		minimum{minimum_in},
		maximum{maximum_in}{};

		Box::Box(glm::vec3 minimum_in, glm::vec3 maximum_in, std::string name_in):
		Shape{name_in},
		minimum{minimum_in},
		maximum{maximum_in}{};

		Box::Box(glm::vec3 minimum_in, glm::vec3 maximum_in, Color const& color_in, std::string name_in):
		Shape{color_in, name_in},
		minimum{minimum_in},
		maximum{maximum_in}{};



		//Getter:
		glm::vec3 	const& Box::get_minimum() const
		{
			return minimum;
		}

		glm::vec3 	const& Box::get_maximum() const
		{
			return maximum;
		}


		float		Box::area()	const
		{
 		   	float x_length = fabs(maximum.x - minimum.x);
    		float y_lenght = fabs(maximum.y - minimum.y);
    		float z_lenght = fabs(maximum.z - minimum.z);

			return (2*(x_length*y_lenght + x_length*z_lenght + y_lenght*z_lenght));		
		}

		float		Box::volume() const 
		{
			float x_length = fabs(maximum.x - minimum.x);
    		float y_lenght = fabs(maximum.y - minimum.y);
    		float z_lenght = fabs(maximum.z - minimum.z);

			return (x_length*y_lenght*z_lenght);
		}

		std::ostream& Box::print(std::ostream& os) const
		{
		  Shape::print(os) ;
		  os << "min:    <" << minimum.x << "," << minimum.y<< "," << minimum.z << "> \n" 
		     << "max:    <" << maximum.x << "," << maximum.y<< "," << maximum.z << "> \n" ;
		  return os; 
		}
