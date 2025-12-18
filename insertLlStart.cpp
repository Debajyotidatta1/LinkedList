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
// {1,2,3,4} we need to insert these values in array from starting so ll will be [4,3,2,1]

int main(){
    int arr[4] = {1,2,3,4};
    Node *head;
    head = nullptr;
    for(int i=0; i<4; i++){
        Node *temp;
        temp = new Node(arr[i]);
        if(head == NULL){
            head = temp;
        }else{
            temp->next = head;
            head = temp;
        }
    }
    
    while()

    return 0;
}