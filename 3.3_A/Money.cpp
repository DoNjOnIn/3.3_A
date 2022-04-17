//Money.cpp
#include "Money.h"
#include <iostream>
#include <sstream>

Money::Money()
{
	set_m500(1);
	set_m200(1);
	set_m100(1);
	set_m50(1);
	set_m20(1);
	set_m10(1);
	set_m5(1);
	set_m2(1);
	set_m1(1);
	set_c1(1);
	set_c2(1);
	set_c5(1);
	set_c10(1);
	set_c25(1);
	set_c50(1);
}

Money::Money(int x1, int x2, int x3, int x4, int x5, int x6, int x7, int x8, int x9, int x10, int x11, int x12, int x13, int x14, int x15)
{
	set_m500(x1);
	set_m200(x2);
	set_m100(x3);
	set_m50(x4);
	set_m20(x5);
	set_m10(x6);
	set_m5(x7);
	set_m2(x8);
	set_m1(x9);
	set_c50(x10);
	set_c25(x11);
	set_c10(x12);
	set_c5(x13);
	set_c2(x14);
	set_c1(x15);
}

Money::Money(Money& a)
{
	a.m500 = m500;
	a.m200 = m200;
	a.m100 = m100;
	a.m50 = m50;
	a.m20 = m20;
	a.m10 = m10;
	a.m5 = m5;
	a.m2 = m2;
	a.m1 = m1;
	a.c50 = c50;
	a.c25 = c25;
	a.c10 = c10;
	a.c5 = c5;
	a.c2 = c2;
	a.c1 = c1;
}

Money::~Money() { }

double Money::sum()
{
	double sum;
	sum = m500 * 500 + m200 * 200 + m100 * 100 + m50 * 50 + m20 * 20 + m10 * 10 + m5 * 5 + m2 * 2 + m1 + c1 * 0.01 + c2 * 0.02 + c5 * 0.05 + c10 * 0.1 + c25 * 0.25 + c50 * 0.5;
	return sum;
}

ostream& operator << (ostream& out, const Money& r)
{
	out << string(r);
	return out;
}
istream& operator >> (istream& in, Money& r)
{
	cout << " 500? = "; in >> r.m500;
	cout << " 200? = "; in >> r.m200;
	cout << " 100? = "; in >> r.m100;
	cout << " 50? = "; in >> r.m50;
	cout << " 20? = "; in >> r.m20;
	cout << " 10? = "; in >> r.m10;
	cout << " 5? = "; in >> r.m5;
	cout << " 2? = "; in >> r.m2;
	cout << " 1? = "; in >> r.m1;
	cout << " K50? = "; in >> r.c50;
	cout << " K25? = "; in >> r.c25;
	cout << " K10? = "; in >> r.c10;
	cout << " K5? = "; in >> r.c5;
	cout << " K2? = "; in >> r.c2;
	cout << " K1? = "; in >> r.c1;
	cout << endl;
	return in;
}

Money::operator string() const
{
	stringstream ss;
	ss << "Sum=" << m500 * 500 + m200 * 200 + m100 * 100 + m50 * 50 + m20 * 20 + m10 * 10 + m5 * 5 + m2 * 2 + m1 + c1 * 0.01 + c2 * 0.02 + c5 * 0.05 + c10 * 0.1 + c25 * 0.25 + c50 * 0.5 << endl;
	return ss.str();
}