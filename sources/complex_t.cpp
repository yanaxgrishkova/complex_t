#include "complex_t.hpp"

complex_t::complex_t() : real(0.0), imaginary(0.0)
{}

complex_t::complex_t(float rl, float img) : real(rl), imaginary(img)
{}

complex_t::complex_t(const complex_t&copy)
{
	real = copy.real;
	imaginary = copy.imaginary;
} 

float complex_t::real_() const
{
	return real;
}

float complex_t::imaginary_() const
{
	return imaginary;
}

bool complex_t::operator == (const complex_t& c2) const
{
	if ((real == c2.real) && (imaginary == c2.imaginary))
		return true;
}

complex_t& complex_t::operator = (const complex_t& result)
{
	if (this == &result) {
		return *this;
	}
	real = result.real;
	imaginary = result.imaginary;
	return *this;
}

istream& operator >> (istream&cin, complex_t& result) const
{
	cout << "Please enter the real part of a complex number:" << endl;
	cin >> result.real;
	cout << "Please enter the imaginary part of a complex number:" << endl;
	cin >> result.imaginary;
	cout << endl;
	return cin;
}

ostream& operator << (ostream&cout, complex_t& result) const
{
	if (result.imaginary < 0)
	{
		cout << result.real << result.imaginary << "i" << endl;
	}
	else
		cout << result.real << "+" << result.imaginary << "i" << endl;
	return cout;
}

complex_t& complex_t::operator * (const complex_t& c2) const
{
	return complex_t (real*c2.real - imaginary*c2.imaginary, real*c2.imaginary + c2.real*imaginary); 
}

complex_t& complex_t::operator / (const complex_t& c2) const
{
	return complex_t ((real*c2.real + imaginary*c2.imaginary) / (c2.real*c2.real + c2.imaginary*c2.imaginary), (c2.real*imaginary - real*c2.imaginary) / (c2.real*c2.real + c2.imaginary*c2.imaginary));
}

complex_t& complex_t::operator += (const complex_t& c2)
{
	real += c2.real;
	imaginary += c2.imaginary;
	return *this;
}

complex_t& complex_t::operator -= (const complex_t& c2)
{
	real -= c2.real;
	imaginary -= c2.imaginary;
	return *this;
}
complex_t& complex_t::operator /= (const complex_t& c2)
{
	float real_ = (real*c2.real + imaginary*c2.imaginary) / (c2.real*c2.real + c2.imaginary*c2.imaginary);
	imaginary = (c2.real*imaginary - real*c2.imaginary) / (c2.real*c2.real + c2.imaginary*c2.imaginary);
	real = real_;
	return *this;
}

complex_t& complex_t::operator *= (const complex_t& c2)
{
	float real_ = real*c2.real - imaginary*c2.imaginary;
	imaginary = real*c2.imaginary + c2.real*imaginary;   
	real = real_;
	return *this;
}
