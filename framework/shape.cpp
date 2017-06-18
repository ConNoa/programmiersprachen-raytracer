#include "shape.hpp"




	Shape::Shape():
    color_{Color{0.0f,0.0f,0.0f}},
    name_{"newShape"}{}

    Shape::Shape(Color const& color_in, std::string name_in):
    color_{color_in},
    name_{name_in}{}




