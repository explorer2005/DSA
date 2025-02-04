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
class List{
    Node *head;
    Node *tail;
    public:
    List(){
        head=tail=NULL;
    }
    void printLL(){
        Node * temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<endl;
    }
    void push_front(int data){
        Node *newNode=new Node(data);
        if(head==NULL){
            head=tail=newNode;
        }
        else{
            newNode->next=head;
            head=newNode;
        }
    }
    void push_back(int data){
        Node *newNode = new Node(data);
        if(head==NULL){
            head=tail=newNode;
        }
        else{
            tail->next=newNode;
            newNode->next=NULL;
        }
    }
    void push_middle(int pos, int data){
        if(pos==0){
            push_front(data);
        }
        if(pos<0){
            return;
        }
        else{
            Node *newNode=new Node(data);
            Node *temp=head;
            for(int i=0;i<pos-1;i++){
                if(temp==NULL){
                    return;
                }
                temp=temp->next;
            }
            newNode->next=temp->next;
            temp->next=newNode;
        }
    }
    void pop_front(){
        if(head==NULL){
            return;
        }
        else{
            Node *temp=head;
            head=head->next;
            temp->next=NULL;
            delete temp;
        }
    }
    void pop_back(){
        if(head==NULL){
            return;
        }
        else{
            Node *temp=head;
            while(temp->next==tail){
                temp=temp->next;
            }
            temp->next=NULL;
            delete tail;
            tail=temp;
        }
    }
    int search(int data){
        if(head==NULL){
            return -1;
        }
        else{
            Node *temp=head;
            while(temp!=NULL){
                if(temp->data==data){
                    return 1;
                }
                temp=temp->next;
            }
        }
        return -1;
    }
};
int main(){
    List ll;
    ll.push_front(15);
    ll.push_front(20);
    ll.push_front(25);
    ll.printLL();
    ll.push_back(69);
    ll.push_middle(2,52);
    ll.printLL();
    ll.pop_front();
    ll.printLL();
    ll.pop_back();
    ll.printLL();
    cout<<ll.search(20)<<endl;
    cout<<ll.search(963)<<endl;
    return 0;
}