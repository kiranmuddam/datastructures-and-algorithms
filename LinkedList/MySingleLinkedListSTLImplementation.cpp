#include<iostream>
#include<list>
#include<iterator>
#include<math.h>
using namespace std;
void traverse(list<int> myList){
  list<int>::iterator it;
  for(it=myList.begin();it!=myList.end();++it){
    cout<<"\t"<<*it;
  }
  cout<<"\n";
}
void sizeCheck(list<int> myList){
  cout<<myList.size()<<endl;
}
void frontElement(list<int> myList){
  cout<<"Front Element: "<<myList.front()<<endl;
}
void lastElement(list<int> myList){
  cout<<"Last Element: "<<myList.back()<<endl;
}
void emptyCheck(list<int> myList){
  if(myList.empty()==0){
    cout<<"Empty: False"<<endl;
  }else{
    cout<<"Empty: ture"<<endl;
  }
}
void popFront(list<int> myList){
  cout<<"LinkedList before pop"<<endl;
  traverse(myList);
  cout<<"Deleted element: "<<myList.front()<<endl;
  myList.pop_front();
  traverse(myList);
}
void popBack(list<int> myList){
  cout<<"LinkedList before pop"<<endl;
  traverse(myList);
  cout<<"Deleted element: "<<myList.back()<<endl;
  myList.pop_back();
  traverse(myList);
}
void reverseLinkedList(list<int> myList){
  cout<<"LinkedList before reversal:"<<endl;
  traverse(myList);
  cout<<"LinkedList after reversal:"<<endl;
  myList.reverse();
  traverse(myList);
}
void mergeLinkedLists(list<int> myList,list<int> secondList){
  myList.merge(secondList);
  cout<<"LinkedList after merging"<<endl;
  traverse(myList);
}
int main(){
  list<int> myList,secondList;
  for(int i=1;i<11;i++){
    myList.push_back(i);
  }
  for(int i=2;i<12;i++){
    secondList.push_back(pow(i,2));
  }
  cout<<"*************************************************"<<endl;
  cout<<"Traverse the linkedlists:"<<endl;
  traverse(myList);
  traverse(secondList);
  cout<<"*************************************************"<<endl;
  cout<<"The size of the LinkedList:"<<endl;
  sizeCheck(myList);
  sizeCheck(secondList);
  cout<<"*************************************************"<<endl;
  cout<<"The front elemnt in the LinkedList:"<<endl;
  frontElement(myList);
  frontElement(secondList);
  cout<<"*************************************************"<<endl;
  cout<<"The last elemnt in the LinkedList:"<<endl;
  lastElement(myList);
  lastElement(secondList);
  cout<<"*************************************************"<<endl;
  cout<<"Empty check of LinkedList:"<<endl;
  emptyCheck(myList);
  emptyCheck(secondList);
  cout<<"*************************************************"<<endl;
  cout<<"Pop elements in the LinkedList"<<endl;
  cout<<"###########################################"<<endl;
  cout<<"POP FRONT:"<<endl;
  popFront(myList);
  popFront(secondList);
  cout<<"###########################################"<<endl;
  cout<<"POP BACK:"<<endl;
  popBack(myList);
  popBack(secondList);
  cout<<"*************************************************"<<endl;
  cout<<"Reverse of LinkedList:"<<endl;
  reverseLinkedList(myList);
  reverseLinkedList(secondList);
  cout<<"*************************************************"<<endl;
  cout<<"Merge two linkedlists:"<<endl;
  mergeLinkedLists(myList,secondList);
}
