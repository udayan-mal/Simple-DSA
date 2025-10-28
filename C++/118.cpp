/*Doubly linked list implementation in C++
primitive opeartions
*/
#include<iostream>
#include<cstdlib>
using namespace std;

//Defining the struccture of a node

struct Node{
    int data;
    Node* next;
    Node* prev;
};

Node* head=NULL;

// Function to create a new node

Node* getNewNode(){
    Node* newnode=(Node*)malloc(sizeof(Node));
    newnode->next=NULL;
    newnode->prev=NULL;
    return newnode;
}

// Insert Operations
// Insert at the beginning

Node* insertBeg(Node* start,int val){
    Node* newnode=getNewNode();
    newnode->data=val;
    newnode->next=start;
    newnode->prev=NULL;
    if(start!=NULL){
        start->prev=newnode;
    }
    start=newnode;
    return start;
}

// Insert at the end

Node* insertEnd(Node* start,int val){
    Node* newnode=getNewNode();
    newnode->data=val;
    
    if(start==NULL){
        newnode->next=NULL;
        newnode->prev=NULL;
        return newnode;
    }
    
    Node* ptr=start;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=newnode;
    newnode->prev=ptr;
    newnode->next=NULL;
    return start;
}

// Insert after a given node

Node* insertAfter(Node* start,int key,int val){
    Node* temp=start;
    while(temp!=NULL && temp->data!=key){
        temp=temp->next;
    }
    if(temp==NULL){
        cout<<"Node not found\n";
        return start;
    }
    
    if(temp->next==NULL){
        return insertEnd(start,val);
    }
    
    Node* newnode=getNewNode();
    newnode->data=val;
    newnode->next=temp->next;
    newnode->prev=temp;
    temp->next->prev=newnode;
    temp->next=newnode;
    
    return start;
}

// Traverse the L-list

void traverse(Node* start){
    if(start==NULL){
        cout<<"List is empty\n";
        return;
    }
    Node* ptr=start;
    cout<<"List: ";
    while(ptr!=NULL){
        cout<<ptr->data;
        if(ptr->next!=NULL)
            cout<<" <-> ";
        ptr=ptr->next;
    }
    cout<<" -> NULL\n";
}

// Delete operations
// Delete from beginning

Node* deleteBeg(Node* start){
    if(start==NULL){
        cout<<"List empty, nothing to delete\n";
        return start;
    }
    Node* temp=start;
    start=start->next;
    if(start!=NULL)
        start->prev=NULL;
    
    cout<<"Deleted: "<<temp->data<<endl;
    free(temp);
    return start;
}

// Delete from end

Node* deleteEnd(Node* start){
    if(start==NULL){
        cout<<"List empty, nothing to delete\n";
        return start;
    }
    
    Node* temp=start;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    
    if(temp->prev!=NULL){
        temp->prev->next=NULL;
    }
    else{
        start=NULL;
    }
    cout<<"Deleted: "<<temp->data<<endl;
    free(temp);
    return start;
}

// Delete after a given node

Node* deleteAfter(Node* start,int key){
    Node* temp=start;
    while(temp!=NULL && temp->data!=key){
        temp=temp->next;
    }
    
    if(temp==NULL || temp->next==NULL){
        cout<<"Cannot delete - node not found or its last node\n";
        return start;
    }
    
    Node* todelete=temp->next;
    temp->next=todelete->next;
    if(todelete->next!=NULL){
        todelete->next->prev=temp;
    }
    cout<<"Deleted: "<<todelete->data<<endl;
    free(todelete);
    
    return start;
}

int main(){
    int ch,val,key;
    Node* start=NULL;
    
    cout<<"Enter first node data: ";
    cin>>val;
    start=getNewNode();
    start->data=val;
    
    cout<<"\noperations:\n";
    cout<<"1 - Display list\n";
    cout<<"2 - Insert at beginning\n";
    cout<<"3 - Insert at end\n";
    cout<<"4 - Insert after node\n";
    cout<<"5 - Delete from beginning\n";
    cout<<"6 - Delete from end\n";
    cout<<"7 - Delete after node\n";
    cout<<"0 - Exit\n";
    
    do{
        cout<<"\nEnter choice: ";
        cin>>ch;
        
        switch(ch){
            case 1:
                traverse(start);
                break;
            
            case 2:
                cout<<"Enter vallue: ";
                cin>>val;
                start=insertBeg(start,val);
                break;
            
            case 3:
                cout<<"Enter value: ";
                cin>>val;
                start=insertEnd(start,val);
                break;
            
            case 4:
                cout<<"Enterr value: ";
                cin>>val;
                cout<<"Insert after: ";
                cin>>key;
                start=insertAfter(start,key,val);
                break;
            
            case 5:
                start=deleteBeg(start);
                break;
            
            case 6:
                start=deleteEnd(start);
                break;
            
            case 7:
                cout<<"Delete after: ";
                cin>>key;
                start=deleteAfter(start,key);
                break;
            
            case 0:
                cout<<"Exiting...\n";
                break;
            
            default:
                cout<<"Invalid choice!\n";
        }
    }while(ch!=0);
    
    return 0;
}