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
    cout << "2) PrimeTest" << endl;

    cin >> choice;

    cout << endl;
    cout << endl;

    switch(choice){
        case 0:
            cout << "Quiting..." << endl;
            break;
        case 1:
            {
                PointerFuncts start;
            }
            break;
        case 2:
            {
                PrimeFunct start;
            }
            break;
        default:
            cout << "null selection!" << endl;
            }
        }while(choice != 0);

}






