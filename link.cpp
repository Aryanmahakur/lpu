#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=nullptr;
    }
};
class linkedlist{
    public:
    node* head;
    linkedlist(){
        head=nullptr;
    }
    void insertatend(node* head,int val){
        node* newnode= new node(val);
        if(head==nullptr){
            head=newnode;
            return;
        }
        node* curr=head;
        while (curr->next!=nullptr)
        {
            curr=curr->next;
        }
        curr->next=newnode;
        
    }
    void deletenode(int count){
        int co=1;
        node* temp=head;
        if(count==1){
            node* del=head;
            head=head->next;
            delete head;
            return;
        }
        while (temp!=nullptr&&co<count-1)
        {
            temp=temp->next;
            co++;
        }
        node* d=temp->next;
        temp->next=temp->next->next;
        delete d;
    }
    void display(){
        node* temp=head;
        while (temp!=nullptr)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        
    }
};
int main(){
  linkedlist li;
  li.head=new node(10);
   li.head->next=new node(20);
   li.insertatend(li.head,30);
   li.display();
   li.deletenode(1);
   cout<<""<<endl;
   li.display();
}