
#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include "shape.cpp"
#include "box.cpp"
#include "sphere.cpp"
#include <cmath>




TEST_CASE("box area volume test")
		
{
		Box b1;
		REQUIRE (600==b1.area());
		Sphere s1;
		REQUIRE (Approx(4*M_PI*25)==s1.area());
		REQUIRE	(1000==b1.volume());
		REQUIRE (Approx(4/3*M_PI*125)==s1.volume());


}


int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}
