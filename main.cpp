#include <iostream> 
#include "calculator.h"
using namespace std; 

Calculator obj;
static int calcNum;
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
            cout << "What kind of operation would you liked performed? a. addition b. subtraction c. multiplication d. division" << endl;
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
            calcNum++;
            cout << "Total calculations this session: " << calcNum << "\nWould you like to calculate anything else (Y/N)?" << endl;
            cin >> exit;

            if (exit.compare("n") == 0){
                run = 0;
            }
        }
    }
return 0;
}
