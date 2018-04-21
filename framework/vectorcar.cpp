#include "vectorcar.hpp"


Vectorcar::Vectorcar(): //default constructor 
	position_{0.0f, 0.0f},
	dirvec_{1.0f,0.0f}{}

Vectorcar::Vectorcar(Vec2 const& position):
	position_{position},
	dirvec_{1.0f,0.0f}{}

Vectorcar::Vectorcar(Vec2 const& position, Vec2 const& dirvec):
	position_{position},
	dirvec_{dirvec}{}


//Vectorcar::~Vectorcar(){}




void Vectorcar::set_position(Vec2 position){
	position_ = position;
}

Vec2 Vectorcar::get_position() const{
	return position_;
}

void Vectorcar::set_dirvec(Vec2 dirvec){
	dirvec_ = dirvec;
}

Vec2 Vectorcar::get_dirvec() const{
	return dirvec_;
}

void Vectorcar::make_step(){
	position_ = position_+dirvec_;
}

void Vectorcar::change_dirvec(Vec2 dir_change){
	dirvec_ = dirvec_+dir_change;
}
