#include "BaseClassExt.h"
#include <iostream>

using namespace std;

BaseClassExt::BaseClassExt()
{
    cout << "test BaseClassExt"<<endl;
}

void BaseClassExt::test2(int a)
{
    a+=b;
    cout << a << endl;
}

void BaseClassExt::setB()
{
    cin >> b;
}
