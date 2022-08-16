// Author: Fransiskus Agapa
// 8/16/22
// Practices make improvement - Have Fun !
// :)

#include <iostream>
#include "add.h"
#include "subtract.h"
#include "multiply.h"
#include "divide.h"

// ================
// user input a number and based on what kind of math operation they want,
// the program would return two numbers if calculate to each other result in user input
// ================

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main()
{
    int number  [] = {1,2,3,4,5,6,7,8,9,10,
                      11,12,13,14,15,16,17,18,19,20,
                      21,22, 23, 24,25,26, 27, 28, 29, 30,
                      31, 32,33,34,35,36, 37, 38,39, 40,
                      41,42,43,44,45,46,47,48,49,50};

    string choice;

    cout << "\n== Basic Math Operation ==" << endl;
    cout << "1. Display number in array " << endl;
    cout << "2. Addition" << endl;
    cout << "3. Subtraction" << endl;
    cout << "4. Multiplication" << endl;
    cout << "5. Division" << endl;
    cout << "choice: ";
    cin >> choice;

    while(choice != "e" and choice != "E")
    {
        int sizeArr = sizeof (number)/sizeof (number[0]);
        if(choice == "1")
        {
            cout << "\n= Display Number in Array =" << endl;
            cout << " [ ";
            for(size_t i = 0; i < sizeArr; ++i)
            {
                if(number[i] % 10 == 0)          // new line every tenth number
                {
                    if(i == sizeArr - 1)         // if it's the last item then put close brace at the end
                    {
                        cout << number[i] << " ]" << endl;
                    }
                    else                         // new line every tenth number
                    {
                        cout << number[i] << ' ' << endl;
                    }
                }
                else                             // else just print out normally
                {
                    cout << number[i] << ' ';
                }
            }
        }

        else if(choice == "2")
        {
            cout << "\n= Addition =" << endl;
            int sizeArr = sizeof (number)/sizeof (number[0]);
            int userInput;
            cout << "Input a number: ";
            cin >> userInput;
            addNumber(number,sizeArr,userInput);
        }

        else if(choice == "3")
        {
            cout << "\n= Subtraction =" << endl;
            int sizeArr = sizeof (number)/sizeof (number[0]);
            int userInput;
            cout << "Input a number: ";
            cin >> userInput;
            subtractNumber(number,sizeArr,userInput);
        }

        else if(choice == "4")
        {
            cout << "\n= Multiplication =" << endl;
            int sizeArr = sizeof (number)/sizeof (number[0]);
            int userInput;
            cout << "Input a number: ";
            cin >> userInput;
            multiplyNumber(number, sizeArr, userInput);
        }

        else if(choice == "5")
        {
            cout << "\n= Division =" << endl;
            int sizeArr = sizeof (number)/sizeof (number[0]);
            int userInput;
            cout << "Input a number: ";
            cin >> userInput;
            divideNumber(number, sizeArr, userInput);
        }

        else
        {
            cout << "\n[ Invalid choice ]" << endl;
        }

        cout << "\n== Basic Math Operation ==" << endl;
        cout << "1. Display number in array " << endl;
        cout << "2. Addition" << endl;
        cout << "3. Subtraction" << endl;
        cout << "4. Multiplication" << endl;
        cout << "5. Division" << endl;
        cout << "choice: ";
        cin >> choice;

    }

    if(choice == "e" or choice == "E")
    {
        cout << "\n== Exit Program ==" << endl;
    }

    return 0;
}
