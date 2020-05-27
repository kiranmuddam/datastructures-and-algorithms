#include <iostream>
#include <vector> 
using namespace std;

class insertionSortClass { 
    public:
    vector<int> insertionSort(vector<int> arr) { 
        int i, key, j; 
        for (int i = 1; i < arr.size(); i++) { 
            key = arr[i]; 
            j = i - 1; 
            while (j >= 0 && arr[j] > key) { 
                arr[j + 1] = arr[j]; 
                j = j - 1; 
            } 
            arr[j + 1] = key; 
        } 
        return arr;
    } 

    void printArray(vector<int> arr) { 
        for (int i = 0; i < arr.size(); i++) 
            cout << arr[i] << " "; 
        cout << endl; 
    }
};
int main() { 
    vector<int> inputArray = { 12, 11, 13, 5, 6 }; 
    insertionSortClass mySort;
    inputArray = mySort.insertionSort(inputArray);
    mySort.printArray(inputArray);
} 

