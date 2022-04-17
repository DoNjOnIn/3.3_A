// 3.3_A.cpp
#include "Money2.h"
#include "Money3.h"
#include <iostream>
#include <sstream>
int main()
{
    Money k(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Money2 p;
    cout <<"Sum=" << summa(k, p) << endl;
    Money3 i;
    cout <<"Mult by 3.2= " << i.Mult(3.2);
}