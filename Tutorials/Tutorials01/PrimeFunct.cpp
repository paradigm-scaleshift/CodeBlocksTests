#include "PrimeFunct.h"
#include <iostream>
#include <string>

#define el << endl

using namespace std;

PrimeFunct::PrimeFunct()
{
    int primeOne;
    int x=0;
    while(x == 0){
        cout << endl << "Enter a number or 0 to Quit"<< endl;
        cin >> primeOne;

        if(primeOne != 0){
            int result = checkPrime(primeOne);
            if(result == 2){
                cout << primeOne << " is Prime!!";

            }else{
                cout << primeOne << " Divides by " << result << " numbers" << endl;
            }

        }else{
        break;
        }
    }

cout << "Quiting PrimeFunct...";
cout el el ;
cout <<"-------------------------------------" el el;

}


int PrimeFunct::checkPrime(int value)

{

    int result = 0;
    int testNo=value;
    int resultArray[100];



   // cout << "starting Prime Test" << endl << endl;


    do{

     //   cout << "testing..." << endl;


        if(value % testNo==0)
        {
    //    cout << value << "/" << testNo << " has no remainder. Adding 1 to result" << endl;


        resultArray[result] = testNo;
   //     cout << "array " << result << " is " << resultArray[result] << endl;
        result ++;

        } else{
   //     cout << value << "/" << testNo << " has a remainder of " << value%testNo << endl;
        }

 //   cout << "...done-> " << testNo << endl << endl;


        testNo--;
    }while(testNo>0);


 //   cout << endl << "!! finished testing !! "<< endl << endl;



    cout << value << " divides by -> ";
    for(int x = 0; x < result; x++)
    {
        cout << resultArray[x] << ",";
    }
    cout << endl;

    return result;

}
