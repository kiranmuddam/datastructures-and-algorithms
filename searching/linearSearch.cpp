#include<iostream>
#include<vector>

using namespace std;

class linearSearchClass {
    public:
    static bool linearSearch(vector<int> inputArray, int searchItem) {
        for(int i = 0; i < inputArray.size(); ++i){
            if(inputArray[i] == searchItem){
                return true;
            }
        }
        return false;
    }
};

int main(){
    cout<<linearSearchClass::linearSearch({1,24,54,22,455,34,53,234,564},22)<<endl;
    cout<<linearSearchClass::linearSearch({1,24,54,22,455,34,53,234,564},220)<<endl;
}