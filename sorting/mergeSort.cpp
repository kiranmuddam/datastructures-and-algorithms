//TO-DO Refactor the code using vector instead of arrays.
#include<iostream>
#include<vector>
using namespace std;
class mergeSortClass{
    public:
    void mergeSort(int *arr, int low, int high){
        int mid;
        if(low < high){
            mid = (low+high)/2;
            mergeSort(arr,low,mid);
            mergeSort(arr,mid+1,high);
            merge(arr,low,high,mid);
        }
    }
    void merge(int *arr, int low, int high, int mid){
        int sortedArray[50];
        int i = low;
        int k = low;
        int j = mid+1;
        while(i<=mid && j<=high){
            if(arr[i]<arr[j]){
                sortedArray[k] = arr[i];
                i++;
                k++;
            }
            else{
                sortedArray[k] = arr[j];
                j++;
                k++;
            }
        }
        while(i<=mid){
            sortedArray[k] = arr[i];
            i++;
            k++;
        }
        while(j<=high){
            sortedArray[k] = arr[j];
            j++;
            k++;
        }
        for(i=low;i<k;i++){
            arr[i] = sortedArray[i];
        }
    }
    static void printVector(int *inputVector,int size){
        for(int i=0;i<size;i++){
            cout<<inputVector[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    int myarray[10] = {1,3,2,10,8,9,4,6,5,7};
    int size = sizeof(myarray)/sizeof(myarray[0]);
    mergeSortClass firstSort;
    firstSort.mergeSort(myarray, 0, size-1);
    firstSort.printVector(myarray,size);
}