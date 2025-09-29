#include <iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;
    node* prev;
    node(int val)
    {
        data=val;
        next=nullptr;
        prev=nullptr;
    }
};
class linkedlist{
    public:
    node* head;
    linkedlist(){
        head=nullptr;
    }
    void insert(int a){
        node* newnode=new node(a);
        if(head==nullptr){
            head=new node(a);
            return;
        }
        node* curr=head;
        while (curr->next!=nullptr)
        {
            curr=curr->next;
        }
        
        
        
        newnode->prev=curr;
        newnode->next=nullptr;
      
      
        curr->next=newnode;


        
    }
    void insertatfirst(int a) {
    node* newnode = new node(a);
    if (head == nullptr) {
        head = newnode;
        return;
    }
    newnode->next = head;
    newnode->prev = nullptr;
  
    head = newnode;
}


    void deletefirst(){
        if(head==nullptr){
            return;
        }
        if(head->next==nullptr){
            node* del=head;
            head=nullptr;
            delete del;
            return;
        }
        node* del=head;
        head=head->next;
        head->prev=nullptr;
        delete del;
    }
  
    void deletionatend(){
        if(head==nullptr){
            return;
        }
        if(head->next==nullptr){
            node* del=head;
            head=nullptr;
            delete del;
            return;
        }
        node* curr=head;
        while (curr->next->next!=nullptr)
        {
            curr=curr->next;
        }
        node* del=curr->next;
        curr->next=curr->next->next;
        delete del;

        
    }
   
    void display(){
        node* curr= head;
        while (curr!=nullptr)
        {
           cout<<curr->data<<" ";
           curr=curr->next;
        }
        
    }
};
int main()
{
    linkedlist li;
    li.insert(10);
    li.insert(20);
    li.insert(30);
    li.display();
 //   li.deletedata(20);
 li.deletionatend();
 cout<<endl;
    li.display();
}