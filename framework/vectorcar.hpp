#ifndef VECTORCAR_HPP
#define VECTORCAR_HPP


#include "vec2.hpp"


class Vectorcar{
	public:
		Vectorcar();
		//Vectorcar(Vectorcar const& veccar);
		Vectorcar(Vec2 const& position);
		Vectorcar(Vec2 const& position, Vec2 const& dirvec);
	//	~Vectorcar();
	
		void set_position(Vec2 position);
		Vec2 get_position() const;

		void set_dirvec(Vec2 dirvec);
		Vec2 get_dirvec() const;

		void make_step();
		void change_dirvec(Vec2 dir_change);
	private:
		Vec2 position_;
		Vec2 dirvec_;


		//char initial_;


};




#endif