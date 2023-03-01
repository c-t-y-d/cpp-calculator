#include <iostream> 
#include "calculator.h"
using namespace std; 

Calculator obj;
int calcNum;
int num1;
int num2;
string operation;
bool run = 1;

int main(){  
    string exit;
    if (run != 0){
        while (run != 0){
            cout << "Enter your first value: ";
            cin >> num1;
            cout << "Enter your second value: ";
            cin >> num2;
            cout << "What kind of operation would you liked performed? a. addition b. subtraction c. multiplication d. division e. square root" << endl;
            cin >> operation;

            if (operation.compare("a") == 0){
                cout << obj.add(num1, num2) << endl;
            }

            else if (operation.compare("b") == 0){
                cout << obj.sub(num1, num2) << endl;
            }

            else if (operation.compare("c") == 0){
                cout << obj.mult(num1, num2) << endl;
            }

            else if (operation.compare("d") == 0){
                cout << obj.div(num1, num2) << endl;
            }

            else if (operation.compare("e") == 0){
                cout << "root 1: " << obj.root(num1) << endl << "root 2: " << obj.root(num2) << endl;
            }

            calcNum++;
            cout << "Total calculations this session: " << calcNum << "\nUser Options [O]\n" << "\nWould you like to calculate anything else (Y/N)?" << endl;
            cin >> operation;

            if (operation.compare("n") == 0){
                run = 0;
            }

            else if (operation.compare("O") == 0){
                cout << "   s\t Set the calculation count\n";
                cout << "   l\t Exit the calculator\n";
                cin >> operation;
                if (operation.compare("s") == 0){
                    cout << "What would you like the new count to be? ";
                    int newCount; 
                    cin >> newCount;
                    obj.setCalcAmount(newCount);
                    calcNum = newCount;
                    cout << "New count: " << obj.getCalcAmount() << endl;
                }
                if (operation.compare("l") == 0){
                    break;
                }
                cout << "Would you like to calculate anything else (Y/N)?" << endl;
                cin >> operation;
            }
        }
    }
return 0;
}
