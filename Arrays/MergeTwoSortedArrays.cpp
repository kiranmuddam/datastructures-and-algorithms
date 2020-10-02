#include <iostream>
#include <vector>

using namespace std;

vector <int> MergeTwoSortedArrays(vector<int> Array1, vector<int> Array2){
  vector <int> MergedSortedArray;
  int i=0;
  int j=0;
  //Check Input
  if (Array1.size()==0){
    return Array2;
  }
  if (Array2.size()==0){
    return Array1;
  }

  while (i<Array1.size() && j<Array2.size()){
    if (Array1[i] < Array2[j]){
      MergedSortedArray.push_back(Array1[i]);
      i++;
    }
    else{
      MergedSortedArray.push_back(Array2[j]);
      j++;
    }
  }
  while (i<Array1.size()){
    MergedSortedArray.push_back(Array1[i]);
    i++;
  }
  while (j<Array2.size()){
    MergedSortedArray.push_back(Array2[j]);
    j++;
  }
  return MergedSortedArray;

}

int main() {
  vector<int> Array1 = {1,3,7,9,15,92,100};
  vector<int> Array2 = {2,4,6,8,10,11};
  vector<int> MergedSortedArray = MergeTwoSortedArrays(Array1,Array2);
  for (int i=0;i<MergedSortedArray.size();i++){
    cout<<MergedSortedArray.at(i)<<",";
  }
}
