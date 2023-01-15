#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;

};

struct Node *nodeListCreate(struct Node *head,int length){
    struct Node *ptr=head;
    
    for(int i=0;i<length;i++){

        struct Node *parts =(struct Node *)malloc(sizeof(struct Node));//new node
        parts->next=NULL;

        int element;
        cin>>element; // taking input of data
        parts->data=element;   // adding data to the node

        if(head==NULL){
            head=parts;
        }
       ptr->next=parts;
        ptr=ptr->next;


    }

    
    return head;
    

}
void displayLinkedList(struct Node *ptr){
    int i=0;
    
    while(ptr!=NULL){
        cout<<"i : "<<i<<endl;
        cout<<(ptr->data)<<endl;
        ptr=ptr->next;
    }
}



int main(){
    struct Node *newNode =NULL;

    struct Node *head= nodeListCreate(newNode, 5);


    displayLinkedList(head);



}

