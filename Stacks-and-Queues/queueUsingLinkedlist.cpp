#include<iostream>
using namespace std;
class queueUsingLinkedList{
    public:
    int length=0;
    struct Node{
        int data;
        struct Node* next;
        Node(int data){
        this->data= data;
        this->next= NULL;
    }
    };
    struct Node* first = NULL;
    struct Node* last = NULL;
    void enqueue(int data){
        struct Node* temp = NULL;
        temp = new Node(data);
        if(first==NULL){
            first = temp;
            last = temp;
        }
        else{
            last->next = temp;
            last = temp;
        }
        length++;
    }
    bool isEmpty(){
        if(first==NULL){
            return true;
        }
        else{
            return false;
        }
        
    }
    void dequeue(){
        if(isEmpty()){
            cout<<"Queue is Empty"<<endl;
        }
        else{
            first= first->next;
            length--;
        }
    }
    int peek(){
        return first->data;
    }
    int tail(){
        return last->data;
    }
    int size(){
        return length;
    }
};
int main(){
        queueUsingLinkedList myQueue;
        myQueue.enqueue(1);
        myQueue.enqueue(2);
        myQueue.enqueue(3);
        myQueue.enqueue(4);
        myQueue.enqueue(5);
        cout<<myQueue.peek()<<endl;
        cout<<myQueue.size()<<endl;
        cout<<myQueue.isEmpty()<<endl;
        myQueue.dequeue();
        myQueue.dequeue();
        myQueue.dequeue();
        cout<<myQueue.peek()<<endl;
        cout<<myQueue.size()<<endl;
        cout<<myQueue.isEmpty()<<endl;

        // second Queue Check 
        cout<< "Second Queue Check" <<endl;
        queueUsingLinkedList secondQueue;
        secondQueue.enqueue(10);
        secondQueue.enqueue(22);
        secondQueue.enqueue(32);
        secondQueue.enqueue(44);
        secondQueue.enqueue(5);
        cout<<secondQueue.peek()<<endl;
        cout<<secondQueue.size()<<endl;
        cout<<secondQueue.isEmpty()<<endl;
        secondQueue.dequeue();
        secondQueue.dequeue();
        secondQueue.dequeue();
        cout<<secondQueue.peek()<<endl;
        cout<<secondQueue.size()<<endl;
        cout<<secondQueue.isEmpty()<<endl;
}