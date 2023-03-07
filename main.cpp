#include <iostream> 
#include "calculator.h"
using namespace std; 

Calculator obj;
int calcNum;
int num1;
int num2;
char operation;
string options;
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

            switch(operation){
                case 'a':
                    cout << obj.add(num1, num2) << endl;
                    break;

                case 'b':
                    cout << obj.sub(num1, num2) << endl;
                    break;
                case 'c':
                    cout << obj.mult(num1, num2) << endl;
                    break;
                case 'd':
                    cout << obj.div(num1, num2) << endl;
                    break;
                case 'e':
                    cout << "root 1: " << obj.root(num1) << endl << "root 2: " << obj.root(num2) << endl;
                    break;
                default:
                    cout << "Invalid option" << endl;
                    break;
            }
            calcNum++;
            cout << "Total calculations this session: " << calcNum << "\nUser Options [O]\n" << "\nWould you like to calculate anything else (Y/N)?" << endl;
            cin >> options;
  
            if (options.compare("n") == 0||options.compare("N") == 0){
                run = 0;
            }

            else if (options.compare("O") == 0){
                cout << "   s\t Set the calculation count\n";
                cout << "   l\t Exit the calculator\n";
                cin >> operation;
                if (options.compare("s") == 0){
                    cout << "What would you like the new count to be? ";
                    int newCount; 
                    cin >> newCount;
                    obj.setCalcAmount(newCount);
                    calcNum = newCount;
                    cout << "New count: " << obj.getCalcAmount() << endl;
                }
                if (options.compare("l") == 0){
                    break;
                }
                cout << "Would you like to calculate anything else (Y/N)?" << endl;
                cin >> operation;
            }
        }
    }
return 0;
}
