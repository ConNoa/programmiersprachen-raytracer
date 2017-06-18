#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include "sphere.hpp"
#include "box.hpp"



TEST_CASE("box area size test")
		
{
		Box b1{};
		Sphere s1{};
		s1.area();
		b1.area();
	//	REQUIRE (tl.empty());
		REQUIRE (0==0);
}


int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}
