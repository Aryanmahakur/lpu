#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val=0){
        data=val;
        next=nullptr;
    }
};
class headerlinkedlist{
    node* head;
    public:
    headerlinkedlist(){
        head= new node();
    }
    
    void insertatend(int data){
        node* curr= head;
        node* newnode= new node(data);
        while(curr->next!=nullptr){
            curr=curr->next;
        }
       // newnode->next=curr-next;
        curr->next=newnode;
    }
    
     void display() {
        node* curr = head->next;
        while (curr != nullptr) {
            cout << curr->data << " ";
            curr = curr->next;
        }
        cout << endl;
    }
};
int main(){
    headerlinkedlist li;
    li.insertatend(10);
    li.insertatend(20);
    li.insertatend(30);
    li.display();
}