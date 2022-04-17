//Money.h
#pragma once
#include <sstream>
#include <iostream>
using namespace std;
class Money
{
private:
	int m500, m200, m100, m50, m20, m10, m5, m2, m1, c1, c2, c5, c10, c25, c50;
public:
	int get_m500() { return m500; };
	int get_m200() { return m200; };
	int get_m100() { return m100; };
	int get_m50() { return m50; };
	int get_m20() { return m20; };
	int get_m10() { return m10; };
	int get_m5() { return m5; };
	int get_m2() { return m2; };
	int get_m1() { return m1; };
	int get_c1() { return c1; };
	int get_c2() { return c2; };
	int get_c5() { return c5; };
	int get_c10() { return c10; };
	int get_c25() { return c25; };
	int get_c50() { return c50; };

	void set_m500(int x) { m500 = x; };
	void set_m200(int x) { m200 = x; };
	void set_m100(int x) { m100 = x; };
	void set_m50(int x) { m50 = x; };
	void set_m20(int x) { m20 = x; };
	void set_m10(int x) { m10 = x; };
	void set_m5(int x) { m5 = x; };
	void set_m2(int x) { m2 = x; };
	void set_m1(int x) { m1 = x; };
	void set_c1(int x) { c1 = x; };
	void set_c2(int x) { c2 = x; };
	void set_c5(int x) { c5 = x; };
	void set_c10(int x) { c10 = x; };
	void set_c25(int x) { c25 = x; };
	void set_c50(int x) { c50 = x; };


	Money();
	Money(int x1, int x2, int x3, int x4, int x5, int x6, int x7, int x8, int x9, int x10, int x11, int x12, int x13, int x14, int x15);
	Money(Money& a);
	~Money();

	operator string() const;

	friend ostream& operator <<(ostream&, const Money&);
	friend istream& operator >>(istream&, Money&);

	double sum();
};

