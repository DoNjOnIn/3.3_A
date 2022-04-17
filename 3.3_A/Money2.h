//Money2.h
#pragma once
#include "Money.h"
class Money2 :
    public Money
{
public:
    Money2();
    friend double summa(Money& a,Money& b);
    friend double diff(Money& a, Money& b);
};

