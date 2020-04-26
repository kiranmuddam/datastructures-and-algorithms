#include <iostream>
#include<string>
using namespace std;
string reverseTheInputString(string myString){
  string reversedString="";
  for(int i=myString.size();i>=0;i--){
    reversedString=reversedString+myString[i];
  }
  return reversedString;
}
int main() {
  string myString = "This is a string";
  myString=reverseTheInputString(myString);
  cout<<myString<<endl;
}