#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=NULL;
    }
};
class CircularList{
    public:
    Node* head;
    Node* tail;

    CircularList(){
        head=tail=NULL;
    }

    void insertAtHead(int val){
        Node* newNode= new Node(val);

        if(head==NULL){
            head=tail=newNode;
            tail->next=head;
        }
        else{
            newNode->next=head;
            head=newNode;
            tail->next=head;
        }
    }
    void insertAtTail(int val){
        Node* newNode = new Node(val);

        if(tail==NULL){
            head=tail=newNode;
            tail->next=head;
        }
        else{
            newNode->next=head;
            tail->next=newNode;
            tail=newNode;
        }
    }
    void deleteAtHead(){
        if(head==NULL){
            return;
        }
        else if(head==tail){
            delete head;
            head=tail=NULL;
        }
        else{
            Node* temp=head;
            head=head->next;
            tail->next=head;
            delete temp;
        }
    }
    void deleteAtTail(){
        Node* temp=tail;
        Node* prev=head;
        while(prev->next!=tail){
            prev=prev->next;
        }
        tail=prev;
        tail->next=head;
        temp->next=NULL;
        delete temp;
    }
    void print(){
        if(head==NULL){
            return;
        }
        else if(head==tail){
            delete head;
            head=tail=NULL;
        }
        Node* temp=head->next;
        cout<<head->data<<"->";
        while(temp!=head){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<temp->data;
    }
};
int main(){
    CircularList ll;
    ll.insertAtTail(5);
    ll.insertAtTail(6);
    ll.insertAtTail(7);
    ll.print();
    ll.deleteAtTail();
    ll.print();
    return 0;
}