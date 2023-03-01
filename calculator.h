#include <iostream> 
using namespace std; 

class Calculator {

    private:
    int var1;

    public: 
    Calculator(){
    }

    public: 
    int add(int var1, int var2){
        return (var1 + var2);
    }

    public:
    int sub(int var1, int var2){
        return (var1 - var2);
    }

    public: 
    int mult(int var1, int var2){
        return (var1 * var2);
    }

    public: 
    int div(int var1, int var2){
        return (var1 / var2);
    }
};
