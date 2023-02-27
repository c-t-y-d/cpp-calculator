#include <iostream> 
#include "calculator.h"
using namespace std; 

int main(){  
    Calculator obj;
    int num1;
    int num2;
    string operation;
    string exit;
    bool run = 1;
    if (run != 0){
        while (run != 0){
            std::cout << "Enter your first value: ";
            std::cin >> num1;
            std::cout << "Enter your second value: ";
            std::cin >> num2;
            std::cout << "What kind of operation would you liked performed? a. addition b. subtraction c. multiplication d. division" << std::endl;
            std::cin >> operation;

            if (operation.compare("a") == 0){
                obj.add(num1, num2);
            }

            else if (operation.compare("b") == 0){
                obj.sub(num1, num2);
            }

            else if (operation.compare("c") == 0){
                obj.mult(num1, num2);
            }

            else if (operation.compare("d") == 0){
                obj.div(num1, num2);
            }

            std::cout << "Would you like to calculate anything else (Y/N)?" << std::endl;
            std::cin >> exit;
            if (exit.compare("n") == 0){
                run = 0;
            }
        }
    }
return 0;
}
