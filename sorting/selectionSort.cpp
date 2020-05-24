#include<iostream>
#include<vector>
#include<limits>
using namespace std;
class selectionSortClass{
    public:
    static vector<int> selectionSort(vector<int> inputVector){
        int vectorSortedIndex=0;
        for(int i=0;i<inputVector.size();i++){
            int smallestIndex=-1,smallestNumber=INT32_MAX;
            for(int j=vectorSortedIndex;j<inputVector.size();j++){
                if(inputVector[j]<smallestNumber){
                    smallestIndex=j;
                    smallestNumber=inputVector[j];
                }
            }
            inputVector[smallestIndex] = inputVector[vectorSortedIndex];
            inputVector[vectorSortedIndex] = smallestNumber;
            vectorSortedIndex++;
        }
        return inputVector;
    }
    static void printVector(vector<int> inputVector){
        for(int i=0;i<inputVector.size();i++){
            cout<<inputVector[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    vector<int> firstArray = {1,3,2,10,8,9,4,6,5,7};
    firstArray = selectionSortClass::selectionSort(firstArray);
    selectionSortClass::printVector(firstArray);
    vector<int> secondArray = {292949,38388282,222,29,0,12,99999999,12345};
    secondArray = selectionSortClass::selectionSort(secondArray);
    selectionSortClass::printVector(secondArray);
}