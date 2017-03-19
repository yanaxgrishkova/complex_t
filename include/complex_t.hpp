#include <iostream>

using namespace std;

class complex_t
{
private:
	float real;
	float imaginary;
public:
	complex_t();

	complex_t(float rl, float img);

	complex_t(const complex_t&copy);

	complex_t operator * (const complex_t& c2) const;

	complex_t operator / (const complex_t& c2);

	complex_t operator += (const complex_t& c2);

	complex_t operator -= (const complex_t& c2);

	complex_t operator *= (const complex_t& c2);

	complex_t operator /= (const complex_t& c2);

	complex_t operator = (const complex_t& result); 

	const bool operator == (const complex_t& c2);

	friend istream& operator >> (istream&cin, complex_t& result);

	friend ostream& operator << (ostream&cout, const complex_t& result);
};
