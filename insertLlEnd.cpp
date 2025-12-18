#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int val){
        data= val;
        next= NULL;
    }
};
// {1,2,3,4} we need to insert these values in array at the enfd so ll will be [1,2,3,4]

int main(){
    int arr[4] = {1,2,3,4};
    Node *head;
    head = nullptr;
    for(int i=0; i<4; i++){
        
        if(head == NULL){
            head = new Node(arr[i]);
        }else{
            Node *tail;
            tail = head;
            while(tail->next != nullptr){
                tail = tail->next;
            }
            // verbose way --------------
            // Node *temp;
            // temp = new Node(arr[i]);
            // tail->next = temp;
            // temp->next = nullptr;

            //----------sharter way
            tail->next = new Node(arr[i]); 
        }
    }
    
    Node *temp;
    temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    return 0;
}