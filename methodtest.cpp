#include <iostream> 
#include "calculator.h"
using namespace std; 

int main(){
    int x = 1; 
    Calculator cal;
    int y = cal.getAmount();
    cout << y << endl;

    return 0;
}