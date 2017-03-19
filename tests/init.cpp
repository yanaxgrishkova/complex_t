#include <complex_t.hpp>
#include <catch.hpp>

SCENARIO("complex_t", "default constructor") {
	complex_t complex;
	REQUIRE(complex.real_() == 0);
	REQUIRE(complex.imaginary_() == 0);
}

SCENARIO("complex_t", "constructor with params") {
	complex_t complex(1, 2);
	REQUIRE(complex.real_() == 1);
	REQUIRE(complex.imaginary_() == 2);
}
