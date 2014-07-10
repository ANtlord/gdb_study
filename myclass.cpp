#include "myclass.h"
#include <iostream>
int myclass::a;

myclass::myclass()
{
    b=2;
    a=1;
    _a = 777;
}

myclass::~myclass()
{
    std::cout<<"deleting"<<std::endl;
}

int myclass::getB() const
{
    this->_mute = 1;
    return this->b;
}
void myclass::set_a(int value)
{
    _a = value;
}
