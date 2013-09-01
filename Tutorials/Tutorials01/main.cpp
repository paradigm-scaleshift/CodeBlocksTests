#include <iostream>
#include <string>

#include "PointerFuncts.h"
#include "PrimeFunct.h"

using namespace std;

int main()
{


    int choice;

    do {

    cout << "Choose a program:" << endl;
    cout << "0) Quit" << endl;
    cout << "1) PointersTest01" << endl;

    cin >> choice;

    cout << endl;
    cout << endl;

    switch(choice){
        case 0:
            cout << "Quiting..." << endl;
            break;
        case 1:
            {
                PointerFuncts pf;
            }
            break;
        default:
            cout << "null selection!" << endl;
            }
        }while(choice != 0);

}






