#include <complex_t.hpp>
#include <catch.hpp>

SCENARIO("complex_t init", "[init]") {
	complex_t complex;
	REQUIRE(complex.real_() == 0);
	REQUIRE(complex.imaginary_() == 0);
}
