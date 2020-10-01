#include <iostream>
#include<string>
using namespace std;
void reverse(string str)  
{  
    if(str.size() == 0) 
    { 
        return; 
    } 
    reverse(str.substr(1)); 
    cout << str[0]; 
}  
 
int main()  
{  
    string a = "This is a string";  
    reverse(a);  
    return 0;  
}  
