#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data=data;
        left = NULL;
        right = NULL;
    }
};
class BinarySearchTree{
    public:
    struct Node *root;
    void insert(int);
    bool lookup(int);
    void inorderTraversal(Node *);
    BinarySearchTree(){
        root = NULL;
    }
};
void BinarySearchTree::insert(int data){
    struct Node *newNode;
    newNode = new Node(data);
    if(!root){
        root = newNode;
    }
    else{
        struct Node *currentNode = root;
        while(true){
            if(data<currentNode->data){
                if(!currentNode->left){
                    currentNode->left = newNode;
                    return;
                }
                currentNode = currentNode->left;
            }
            else{
                if(!currentNode->right){
                    currentNode->right = newNode;
                    return;
                }
                currentNode = currentNode->right;
            }
        }
    }
}
void BinarySearchTree::inorderTraversal(Node *ptr)
{
   if (root == NULL)
   {
      cout<<"Tree is empty"<<endl;
      return;
   }
   if (ptr != NULL)
   {
      inorderTraversal(ptr->left);
      cout<<ptr->data<<" ";
      inorderTraversal(ptr->right);
   }
}
bool BinarySearchTree::lookup(int data){
    if (root == NULL)
    {
        cout<<"Tree is empty"<<endl;
        return false;
        }
    struct Node* currentNode = root;
   while(currentNode){
       if(data<currentNode->data){
           currentNode = currentNode->left;
       }
       else if(data>currentNode->data){
           currentNode = currentNode->right;
       }
       else if(data == currentNode->data){
           return true;
       }   
   }
   return false;
}
int main(){
    BinarySearchTree myTree;
    myTree.insert(8);
    myTree.insert(6);
    myTree.insert(10);
    myTree.insert(11);
    cout<<myTree.lookup(6)<<endl;
    cout<<myTree.lookup(100)<<endl;
    myTree.inorderTraversal(myTree.root);
    cout<<endl;
    BinarySearchTree myTree2;
    myTree2.insert(1);
    myTree2.insert(2);
    myTree2.insert(4);
    myTree2.insert(6);
    myTree2.insert(7);
    myTree2.insert(8);
    myTree2.insert(11);
    myTree2.insert(10);
    cout<<myTree2.lookup(7)<<endl;
    cout<<myTree2.lookup(100)<<endl;
    
    myTree2.inorderTraversal(myTree2.root);
}