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
    private:
    node* head;
    public:
    linkedlist(){
    head=nullptr;
    }

    node* insert(int data){
        node* newnode = new node(data);
        if(head==nullptr){
         newnode->next=head;
         head=newnode;
          return head;
         }
  
      newnode->next=head;
      head=newnode;
     return head;
    };
    node* insertatend(int data){
        node* newnode= new node(data);
        if(head==nullptr){
            head=newnode;
            return head;
        }
        node* curr= head;
        while (curr->next!=nullptr)
        {
          curr=curr->next;
        }
       
        curr->next=newnode;
        return head;
        
    }
    node* insertatpos(int data,int pos){
        node* newnode = new node(data);
         if(head==nullptr){
            head=newnode;
            return head;
        }
        if(pos==0){
            newnode->next=head;
            head=newnode;
            return head;
        }
        int count=0;
         node* curr= head;
        while (curr->next!=nullptr && count<pos-1)
        {
          curr=curr->next;
          count++;
        }
      
        newnode->next=curr->next;
      curr->next=newnode;
      return head;
    }
    void delfirst(){
        if(head==nullptr){
            return;
        }
        if(head->next==nullptr){
            node* temp=head;
            head=nullptr;
            delete temp;
            return;
        }
        node* temp =head;
        head=head->next;
        delete temp;
    }
    void delend(){
          if(head==nullptr){
            return;
        }
        if(head->next==nullptr){
            node* temp=head;
            head=nullptr;
            delete temp;
            return;
        }
        node* curr = head;
        while (curr->next->next!=nullptr)
        {
        curr=curr->next;
        }
        node* temp=curr->next;
        curr->next=curr->next->next;
        delete temp;

    }
    void delatpos(int pos){
          if(head==nullptr){
            return;
        }
        if(pos==0){
            node* temp=head;
            head=head->next;
            delete temp;
            return;
        }
        node* curr=head;
        int count=0;
        while (curr->next!=nullptr && count<pos-1)
        {
            curr=curr->next;
            count++;
        }
        
        node* del=curr->next;
        curr->next=curr->next->next;
        delete del;
        
    }
    void display(){
      node* temp =head;
      if(head==nullptr){
        return;
      }
      while (temp!=nullptr)
      {
        cout<<temp->data<<" ";
        temp=temp->next;
      }
      
    }
};
int main(){
 
    linkedlist li;
  
    li.insert(10);
    li.insert(20);
    li.insert(30);
    li.insert(40);
    li.insert(60);
    li.insertatpos(50,0);
    li.delfirst();
    li.display();
   // li.delend();
   li.delatpos(2);
    cout<<endl;
    li.display();
    return 0;
}