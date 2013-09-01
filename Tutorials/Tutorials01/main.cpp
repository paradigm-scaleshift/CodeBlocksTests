#include <iostream>
#include <string>

#include "PointerFuncts.h"

using namespace std;

//Options
void pointersTest01();


void pointerTest(string *x);

int main()
{



    int choice;
    do {

    cout << "Choose a program:" << endl;
    cout << "1) Quit" << endl;
    cout << "2) PointersTest01" << endl;

    cin >> choice;

    cout << endl;
    cout << endl;

    switch(choice){
        case 1:
            cout << "Quiting...gfjfgj" << endl;
            break;
        case 2:
            pointersTest01();
            break;
        default:
            cout << "null selection!" << endl;
            }
        }while(choice != 1);

}

void pointersTest01(){

  string a[5] = {"a","b","c","d","e"};




    cout << "a2=" << a[2] << endl;
    pointerTest(&a[2]);
    string b = *(&a[2]);
    cout << "a2=" << b << endl;
    cout << "a3=" << a[3] << endl;

cout << endl << endl;
}



void pointerTest(string *x){
*x=*(x+1);
PointerFuncts objTest;
PointerFuncts *pFunctsPointer = &objTest;

objTest.pFunct01();
pFunctsPointer ->pFunct01();

}
