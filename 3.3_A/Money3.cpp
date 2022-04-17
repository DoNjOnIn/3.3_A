#include "Money3.h"
double Money3::Mult(double x)
{
	return sum() * x;
}

Money3::Money3()
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
