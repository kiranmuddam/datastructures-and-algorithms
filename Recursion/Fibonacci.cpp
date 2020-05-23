#include<iostream>
//#include<vector>
using namespace std;
class Fibonacci{
    public:
    static int findFibonacciByIndexIterative(int inputIndex){
        int firstElement=0;
        int secondElement=1;
        int currentFibonacciNumber=0;
        //vector<int> fibonacciVector;
        //fibonacciVector.push_back(0);
        //fibonacciVector.push_back(1);
        for(int i=0;i<=inputIndex-2;i++){
            currentFibonacciNumber=firstElement+secondElement;
            //fibonacciVector.push_back(currentFibonacciNumber);
            firstElement = secondElement;
            secondElement = currentFibonacciNumber;
        }
        //return fibonacciVector[inputIndex];
        return currentFibonacciNumber;
    }
    static int findFibonacciByIndexRecursive(int InputIndex){
        if(InputIndex<2){
            return InputIndex;
        }
        else{
            return findFibonacciByIndexRecursive(InputIndex-1)+findFibonacciByIndexRecursive(InputIndex-2);
        }
    }
};
int main(){
    cout<<Fibonacci::findFibonacciByIndexIterative(10)<<endl;
    cout<<Fibonacci::findFibonacciByIndexRecursive(8)<<endl;
}