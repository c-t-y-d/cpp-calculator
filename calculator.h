#include <iostream> 
using namespace std; 

class Calculator {

    private: 
    int var1; 
    int var2;

    public: 
    Calculator(){
    }

    public: 
    void add(int var1, int var2){
        std::cout << (float)var1 + var2 << std::endl;
    }

    public:
    void sub(int var1, int var2){
        std::cout << var1 - var2 << std::endl;
    }

    public: 
    void mult(int var1, int var2){
        std::cout << var1 * var2 << std::endl;;
    }

    public: 
    void div(int var1, int var2){
        std::cout << var1 / var2 << std::endl;
    }
};