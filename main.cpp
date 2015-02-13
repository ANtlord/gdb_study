#include <math.h>
#include <iostream>
#include <vector>
#include <map>
#include "myclass.h"
#include <typeinfo>

//#define m_var 1
using namespace std;

struct Foo {
    int (*qwe)(Foo a, int b);
};

int func1(Foo a, int b) {
    return b;
}

int main(){
    cout<<(typeid(int)==typeid(int))<<endl;
#ifndef m_var
    int a=1;
    std::cout << "a = " << a << std::endl;
#else
    std::cout << "ERROR" << std::endl;
#endif
    return 0;
    myclass * obj = new myclass();
    obj->set_a(123);
}
//321
