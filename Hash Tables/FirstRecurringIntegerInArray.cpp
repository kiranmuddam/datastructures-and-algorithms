#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
using namespace std;
int findFirstRecurringInteger(vector<int> inputArray){
  unordered_map<int,int> umap;
  for(int i=0;i<inputArray.size();i++){
    if(umap.find(inputArray[i])!=umap.end()){
      return inputArray[i];
    }
    else{
      umap.insert(make_pair(inputArray[i],1));
    }
  }
  return -1;
}
int main(){
  vector<int> myVector = {1,2,4,9,3,9};
  int answer=findFirstRecurringInteger(myVector);
  cout<<answer<<endl;
}