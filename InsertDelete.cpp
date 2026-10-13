#include <iostream>
using namespace std;

struct Node{
    int data;
    Node*next;
};

void printlist(Node*head){
    Node*ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
}
// for a pointer we take *& to get the real value not the refrence alias

void insAtBeginning(int value,Node*&head){
    Node*newNode= new Node();
    newNode->data=value;
    if(head==NULL){
        head=newNode;
    }
    else{
        newNode->next=head;
        head=newNode;
    }
    
}

void insAtLast(int value,Node*&head){
    Node*newNode= new Node();
    newNode->data=value;
    newNode->next=NULL;
    
    if(head==NULL){
        head=newNode;
    }
    else{
        Node*ptr=head;
         while(ptr->next!=NULL){
             ptr=ptr->next;}
        
    ptr->next=newNode;
        
    } 
}
void insAtPos(int value,int pos,Node*&head){
    Node*newNode= new Node();
    newNode->data=value;
    newNode->next=NULL;

    if(head==NULL){
        cout<<"list doesn't exist"<<endl;
        return;
    }
    else{
        if(pos<=1){
            newNode->next=head;
            head=newNode;
            return;
        }
        else{
            Node*ptr=head;
            for(int i=1;i<pos-1&&ptr->next!=NULL;i++){
                ptr=ptr->next;
            }
            newNode->next=ptr->next;
            ptr->next=newNode;
        }
    }
}

void delAtStart(Node*&head){
    if(head==NULL){
        return;
    }
    else{
        Node*temp=head;
        head=head->next;
        delete(temp);
    }
}

void delAtEnd(Node*&head){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        delete(head);
        head=NULL;
        return;
    }
    else{
        Node*temp=head;
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        delete(temp->next);
        temp->next=NULL;
    }
}
void delAtPos(int pos,Node*&head){
    if(head==NULL){
        return;
    }
    if(pos==1){
        Node*temp=head;
        head=head->next;
        delete(temp);
        return;
    }
    else{
        Node*temp=head;
        for(int i =1;i<pos-1;i++){
            temp=temp->next;
            if(temp==NULL){
                return;
            }
        }
        Node*del=temp->next;
        temp->next=temp->next->next;
        delete(del);
        
    }
}

int main() {


    Node*head=NULL;
    
    insAtBeginning(30,head);
    insAtBeginning(20,head);
    insAtBeginning(10,head);

    printlist(head);

    insAtLast(20,head);
    insAtLast(10,head);

    printlist(head);

    insAtPos(15,2,head);
    insAtPos(25,4,head);
    insAtPos(25,6,head);
    insAtPos(15,8,head);

    printlist(head);

    delAtStart(head);

    printlist(head);

    delAtEnd(head);

    printlist(head);

    delAtPos(4,head);
    delAtPos(14,head);//if pos > linked list
    
    printlist(head);
    
    delAtPos(1,head);
    printlist(head);

    cout<<"press enter to exit"<<endl;
    cin.get();
    
    


    return 0;
    
}