#include<iostream>
#include<vector>
using namespace std;
class bubbleSortClass{
    public:
    static vector<int> bubbleSort(vector<int> inputVector){
        for(int i=0;i<(inputVector.size())-1;i++){
            for(int j=i+1;j<(inputVector.size())-i-1;j++){
                if(inputVector[j]>inputVector[j+1]){
                    int temp = inputVector[j];
                    inputVector[j]=inputVector[j+1];
                    inputVector[j+1] = temp;
                }
            }
        }
        return inputVector;
    }
    static void printVector(vector<int> inputVector){
        for(int i=0;i<inputVector.size();i++){
            cout<<inputVector[i]<<" ";
        }
    }
};
int main(){
    vector<int> firstArray = {1,3,2,10,8,9,4,6,5,7};
    firstArray = bubbleSortClass::bubbleSort(firstArray);
    bubbleSortClass::printVector(firstArray);
}
