#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node* next;
    Node(int data){
        this->data=data;
        next = NULL;
    }
};
struct Node* head = NULL;
void push(int data){
    struct Node* temp;
    temp = new Node(data);
    if(head==NULL){
        head=temp;
    }
    else{
        temp->next = head;
        head = temp;
    }
}
void pop(){
    if(head==NULL){
        cout<<"Stack is empty"<<endl;
    }
    else{
        head = head->next;
    }
    }
void traverse(Node* head){
    if(head==NULL){
        cout<<"Stack is empty"<<endl;
    }
    else{
        struct Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<endl;
            temp = temp->next;
            }
    }
}
void peek(){
    cout<<head->data<<endl;
}
int main(){
    push(1);
    push(2);
    push(3);
    push(4);
    traverse(head);
    pop();
    pop();
    traverse(head);
    push(5);
    traverse(head);
    peek();
}