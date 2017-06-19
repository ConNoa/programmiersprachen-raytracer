
#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include "shape.cpp"
#include "box.cpp"
#include "sphere.cpp"
#include <cmath>
#include <glm/glm.hpp>
#include <glm/gtx/intersect.hpp>




TEST_CASE("box area volume test default konstruktor")
		
{
		Box b1;
		REQUIRE (600==b1.area());
		Sphere s1;
		REQUIRE (Approx(4*M_PI*25)==s1.area());
		REQUIRE	(1000==b1.volume());
		REQUIRE (Approx(4/3*M_PI*125)==s1.volume());

}



TEST_CASE("box area volume test mit eingabe")
		
{
		Box b1{glm::vec3{1.0,1.0,1.0},glm::vec3{6.0,6.0,6.0},Color{1.0f,0.0f,1.0f}, std::string{"b1"}};
		REQUIRE (150==b1.area());
		REQUIRE	(125==b1.volume());
		REQUIRE(b1.get_minimum().x == 1.0);
		REQUIRE(b1.get_minimum().y == 1.0);
		REQUIRE(b1.get_minimum().z == 1.0);
		REQUIRE(b1.get_maximum().x == 6.0);
		REQUIRE(b1.get_maximum().y == 6.0);
		REQUIRE(b1.get_maximum().z == 6.0);
		REQUIRE(b1.get_color_().r == 1.0);
		REQUIRE(b1.get_color_().g == 0.0);
		REQUIRE(b1.get_color_().b == 1.0);
		REQUIRE(b1.get_name_() == "b1");


		Sphere s1{glm::vec3{1.0,1.0,1.0},float {6.0}, Color{1.0f,0.0f,1.0f}, std::string{"s1"}};
		REQUIRE (Approx(4*M_PI*36)==s1.area());
		REQUIRE (Approx(4/3*M_PI*216)==s1.volume());
		REQUIRE(s1.get_midpoint().x == 1.0);
		REQUIRE(s1.get_midpoint().y == 1.0);
		REQUIRE(s1.get_midpoint().z == 1.0);
		REQUIRE(s1.get_radius() == 6.0);
		REQUIRE(s1.get_color_().r == 1.0);
		REQUIRE(s1.get_color_().g == 0.0);
		REQUIRE(s1.get_color_().b == 1.0);
		REQUIRE(s1.get_name_() == "s1");

}

TEST_CASE("box print", "[print]")
{
		Box b1{glm::vec3{1.0,1.0,1.0},glm::vec3{6.0,6.0,6.0},Color{1.0f,0.0f,1.0f}, std::string{"b1"}};
		b1.print(std::cout);
		std::cout<<"\n";
}

TEST_CASE("sphere print", "[print]")
{
		Sphere s1{glm::vec3{1.0,1.0,1.0},float {6.0}, Color{1.0f,0.0f,1.0f}, std::string{"s1"}};
		s1.print(std::cout);
		std::cout<<"\n";
}

TEST_CASE("intersectRaySphere", "[intersect]")
{
		// Ray
		glm::vec3 ray_origin{0.0,0.0,0.0};
		// ray direction has to be normalized ! // you can use:
		// v = glm::normalize(some_vector) glm::vec3 ray_direction{0.0,0.0,1.0};
		// Sphere
		glm::vec3 sphere_center{0.0,0.0,5.0}; float sphere_radius {1.0};
		float distance {0.0};
		auto result = glm::intersectRaySphere(
		ray_origin, ray_direction,
		sphere_center ,
		sphere_radius * sphere_radius, distance); // squared radius !!! distance );
		REQUIRE(distance == Approx(4.0f)); 
}



int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}
