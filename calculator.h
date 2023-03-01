#include <iostream> 
#include <cmath>
using namespace std; 

class Options {

    private:
    int calcAmount;

    public:
    void setCalcAmount(int calcAmount){
        this->calcAmount = calcAmount;
    }

    public: 
    int getCalcAmount(){
        return calcAmount;
    }
};

class Calculator: public Options {
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

    public:
    int root(int var1){
        return (sqrt(var1));
    }
};
