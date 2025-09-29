#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* prev;
    node(int val){
        data=val;
        next=prev=nullptr;
    }
};
class linkedlist{
    private:

    node* head;
    public:
    linkedlist(){
        head=nullptr;
    }
    void insert(int data){
        node* newnode=new node(data);
        if(head==nullptr){
            head=newnode;
            return ;
        }
        node* curr=head;
        while (curr->next!=nullptr)
        {
          curr=curr->next;
        }
     
        newnode->next=curr->next;
        newnode->prev=curr;
        curr->next=newnode;
     
        
    }
    void insertatfront(int data){
        node* newnode = new node(data);
         if(head==nullptr){
            head=newnode;
            return;
        }
        newnode->next=head;
       
        head->prev=newnode;
        head=newnode;
    }
    void insertatpos(int data,int pos){
    
        node* newnode = new node(data);
        int count=0;
        if(head==nullptr){
            return;
        }
        if(pos==0){
          newnode->next=head;
          newnode->prev=nullptr;
          head->prev=newnode;
          head=newnode;
          return;
        }
        node* curr= head;
        while (curr->next!=nullptr && count<pos-1)
        {
            count++;
            curr=curr->next;
        }
        newnode->next=curr->next;
        newnode->prev=curr;
        curr->next->prev=newnode;
        curr->next=newnode;
    }
    void deletestart(){
        node* curr=head;
        if(head==nullptr){
           return;
        }
        if(head->next==nullptr){
            node* del =head;
            head=nullptr;
            delete del;
            return;
        }
       
        node* del =curr;
        curr=curr->next;
        curr->prev=nullptr;
        delete del;
    }
  void deletionatend() {
    if (head == nullptr) {
        return;
    }
    if (head->next == nullptr) {
        // Only one node in the list
        delete head;
        head = nullptr;
        return;
    }
    node* curr = head;
    while (curr->next != nullptr) {
        curr = curr->next;
    }
    // Now, curr points to the last node
    node* del = curr;
    curr = curr->prev;
    curr->next = nullptr;
    delete del;
}

      
  void deletepos(int pos) {
    if (head == nullptr || pos < 0) {
        return; // List is empty or invalid position
    }

    node* curr = head;
    int count = 0;

    // Traverse to the node at the given position
    while (curr != nullptr && count < pos) {
        curr = curr->next;
        count++;
    }

    if (curr == nullptr) {
        return; // Position is out of range
    }

    // If deleting the head node
    if (curr->prev == nullptr) {
        head = curr->next;
        if (head != nullptr) {
            head->prev = nullptr;
        }
    } else {
        // Update the previous node's next pointer
        curr->prev->next = curr->next;
        if (curr->next != nullptr) {
            // Update the next node's previous pointer
            curr->next->prev = curr->prev;
        }
    }

    delete curr;
}

    void display(){
        node* curr=head;
        while (curr!=nullptr)
        {
           cout<<curr->data<<" ";
           curr=curr->next;

        }
        
    }
};
int main(){
    linkedlist li;
    li.insert(10);
    li.insert(20);
    li.insert(30);
    li.insert(40);
    li.insert(50);
    li.display();
    li.deletionatend();
  // li.deletepos(2);
  // li.insertatpos(200,2);
   li.display();
}