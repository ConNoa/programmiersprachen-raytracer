#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>

#include "vectorcar.cpp"

int gcd(int a, int b)
{
	return 1;
}
/*

TEST_CASE("Box default test", "[get]")
{

  Box box;
  REQUIRE(box.get_min().x == 0);
  REQUIRE(box.get_min().y == 0);
  REQUIRE(box.get_min().z == 0);
  REQUIRE(box.get_max().x == 1);
  REQUIRE(box.get_max().y == 1);
  REQUIRE(box.get_max().z == 1);
  REQUIRE(box.get_material().name_ == "new_Material");
  Color testcolor1(0.0f,0.0f,0.0f);
  Color ka_test(0.0f,0.1f,0.2f);  
  Color kd_test(0.6f,0.7f,0.8f);
  
}
*/
TEST_CASE("Vectorcar_build", "[get/set]")
{

  Vectorcar car_default;
  REQUIRE(car_default.get_position().x_ == 0.0f);
  REQUIRE(car_default.get_position().y_ == 0.0f);
  REQUIRE(car_default.get_dirvec().x_ == 1.0f);
  REQUIRE(car_default.get_dirvec().y_ == 0.0f);

  Vectorcar car_konstrukt{{1.0f,0.0f},{1.0f,3.0f}};
  REQUIRE(car_konstrukt.get_position().x_ == 1.0f);
  REQUIRE(car_konstrukt.get_position().y_ == 0.0f);
  REQUIRE(car_konstrukt.get_dirvec().x_ == 1.0f);
  REQUIRE(car_konstrukt.get_dirvec().y_ == 3.0f);



}

TEST_CASE("Vectorcar_driving", "[get]")
{
  Vectorcar car_default;
  car_default.make_step();

  REQUIRE(car_default.get_position().x_ == 1.0f);
  REQUIRE(car_default.get_position().y_ == 0.0f);

  car_default.change_dirvec({2.0f,2.0f});

  REQUIRE(car_default.get_dirvec().x_ == 3.0f);
  REQUIRE(car_default.get_dirvec().y_ == 2.0f);

  car_default.make_step();
  REQUIRE(car_default.get_position().x_ == 4.0f);
  REQUIRE(car_default.get_position().y_ == 2.0f);



}




/*
TEST_CASE("describe_gcd", "[gcd]")
{
	REQUIRE(gcd(2,4) == 2);
	REQUIRE(gcd(9,6) == 3);
	REQUIRE(gcd(3,7) == 1);
}
*/

int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}
