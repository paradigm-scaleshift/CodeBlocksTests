#include <iostream>
#include <string>

#include "PointerFuncts.h"


#define el << endl

using namespace std;



PointerFuncts::PointerFuncts()
{
  string a[5] = {"a","b","c","d","e"};

    cout << "a2=" << a[2] << endl;
    pointerTest(&a[2]);
    string b = *(&a[2]);
    cout << "a2=" << b << endl;
    cout << "a3=" << a[3] << endl;

cout << "Quiting Pointer Test...";
cout el el ;
cout <<"-------------------------------------" el el;

};

void PointerFuncts::pointerTest(string *x){
*x=*(x+1);

}
