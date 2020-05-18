#include<iostream>
using namespace std;
class Factorial{
    public:
    static int findFactorialIterative(int number){
        int factorial=1;
        for(int i=number;i>0;i--){
            factorial = factorial * i;
        }
        return factorial;
    }
    static int findFactorialRecursive(int number){
        if(number==0 || number==1){
            return number;
        }
        else{
            return number*findFactorialRecursive(number-1);
        }
    }
};
int main(){
    cout<<Factorial::findFactorialIterative(5)<<endl;
    cout<<Factorial::findFactorialRecursive(10)<<endl;
}