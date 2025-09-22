#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};
class LinkedList
{
private:
    Node *head;

public:
    int count = 0;
    LinkedList()
    {
        head = nullptr;
    }
  
    void insertAtPos(int val, int pos)
    {
        cout << "we have inserted at " << pos << "  " << "position ";
        Node *newnode = new Node(val);
        Node *curr = head;
        if (pos > count)
        {
            cout << "invalid" << endl;
        }
        if (pos < 1)
        {
            cout << "can insert here" << endl;
            return;
        }
        if (pos == 1)
        {
            newnode->next = head;
            head = newnode;
            return;
        }
        for (int i = 1; i < pos - 1; i++)
        {
            curr = curr->next;
        }
        newnode->next = curr->next;
        curr->next = newnode;
    }

    void insertAtEnd(int val)
    {
        count++;
        Node *newnode = new Node(val);
        if (head == nullptr)
        {
            head = newnode;
            return;
        }
        Node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
    void insertatAtBeginning(int val)
    {
        count++;
        Node *newnode = new Node(val);
        if (head == nullptr)
        {
            head = newnode;
        }
        Node *temp = head;
        newnode->next = temp;
        head = newnode;
    }
    void delete_void(int val)
    {
        Node *temp = head;
        while (temp->next!= nullptr)
        {

            if (head->data == val)
            { 
                Node* del=head;
                head = head->next;
                delete del;
                return;
            }

            if (temp->next->data == val)
            {
                Node* del = temp->next;
                temp->next = temp->next->next;
                delete del;
                return;
            }

            temp = temp->next;
        }
    }
    //delete any given pos from end
    void findmiddle(){
      Node* slow=head;
      Node* fast=head;
        
    }
    void deleteKthFromEnd(int k) {
    if (!head) return;

    Node* dummy = new Node(0); 
    dummy->next = head;
    Node* fast = dummy;
    Node* slow = dummy;

 
    for (int i = 0; i <= k; i++) {
        if (fast == nullptr) {
            cout << "k is larger ";
            return;
        }
        fast = fast->next;
    }

   
    while (fast != nullptr) {
        fast = fast->next;
        slow = slow->next;
    }

  
    Node* temp = slow->next;
    slow->next = slow->next->next;
    delete temp;

    head = dummy->next;
    delete dummy;
}

    int findlength(){
        Node* temp=head;
        int length=0;
        while(temp!=nullptr){
          temp=temp->next;
          length++;
        }
       return length;
    }
    void delpos(int pos){
     Node* temp=head;
     int count=1;
     if(pos==1){
        Node* del=head;
        head=head->next;
        delete del;
        return;
     }
     while (count<pos-1&&temp->next!=nullptr)
     {
        temp=temp->next;
        count++;
     }
     Node* del=temp->next;
      temp->next=temp->next->next;
      delete del;
     
    }
    void display()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main()
{
    LinkedList list;
    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);
     list.insertAtEnd(40);
     list.insertAtEnd(50);

   // list.insertAtPos(400, 3);
    // list.insertatAtBeginning(50);
   // cout << "" << endl;
    //cout << "before delete" << endl;
   // list.display();
   // list.delete_void(30);
   // cout << "after delete" << endl;
    // list.delpos(1);
 //    list.insertatAtBeginning(50);
     int high=  list.findlength();
    //  list.findmiddle(0,high);
    list.display();
    cout<<"middle"<<endl;
    list.findmiddle();
    // list.findlength();
    list.deleteKthFromEnd(2);
     list.display();

    return 0;
}