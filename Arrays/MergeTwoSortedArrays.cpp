#include<iostream>
#include<vector>
using namespace std;
vector<int> mergeTwoSortedArrays(vector<int> Array1 , vector<int> Array2){
  vector<int> mergedSortedArray;
  int Array1Position=0;
  int Array2Position=0;
  int i=0;
  //check inputs
  if(Array1.size()==0){
    return Array2;
  }
  if(Array2.size()==0){
    return Array1;
  }
  while(Array1[Array1Position] || Array2[Array2Position]){
    i++;
    cout<<Array1[Array1Position]<<" "<<Array2[Array2Position] <<endl;
    if()
    if(Array1[Array1Position] < Array2[Array2Position])){
      mergedSortedArray.push_back(Array1[Array1Position]);
      Array1Position++;
    }
    else{
      mergedSortedArray.push_back(Array2[Array2Position]);
      Array2Position++;
    }
  }
  return mergedSortedArray;
}
int main(){
  vector<int> Array1 = {1,3,100,15,7,9,92};
  vector<int> Array2 = {2,4,6,8,10,11};
  vector<int> mergedSortedArray = mergeTwoSortedArrays(Array1,Array2);
  for(int i=0;i<mergedSortedArray.size();i++){
    cout<<mergedSortedArray[i]<<" ";
  }
}
