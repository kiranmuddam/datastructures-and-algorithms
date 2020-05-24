#include<iostream>
#include<string>
using namespace std;
class reverseString{
    public:
    static string reverseStringRecursive(string inputString,int inputLength){
        if(inputLength-1==0){
            string s(1, inputString[inputLength-1]);
            return s;
        }
        else{
            return inputString[inputLength-1]+reverseStringRecursive(inputString,inputLength-1);
        }
    }
};
int main(){
    cout<<reverseString::reverseStringRecursive("kiran",5)<<endl;
    cout<<reverseString::reverseStringRecursive("Kiran Babu Muddam",17)<<endl;
    cout<<reverseString::reverseStringRecursive("It's my kingdom",15)<<endl;
    cout<<reverseString::reverseStringRecursive("code is life for me for you for all",35)<<endl;
}