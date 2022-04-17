//Money2.cpp
#include "Money2.h"
Money2::Money2()
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

double summa(Money& a, Money& b) 
{
	return a.sum() + b.sum();
}

double diff(Money& a, Money& b)
{
	return a.sum() - b.sum();
}
