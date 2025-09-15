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
int count=0;
    LinkedList()
    {
        head = nullptr;
    }
    ~LinkedList()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            Node *next = temp->next;
            delete temp;
            temp = next;
        }
    }

    void insertAtPos(int val, int pos)
    {
        cout<<"we have inserted at "<<pos<<"  "<<"position ";
        Node* newnode= new Node(val);
        Node* curr=head;
        if(pos>count){
            cout<<"invalid"<<endl;
        }
      if(pos<1){
        cout<<"can insert here"<<endl;
        return;
      }
      if(pos==1){
         newnode->next=head;
         head=newnode;
         return;
      }
    for (int i = 1; i < pos-1; i++)
    {
        curr=curr->next;
        
    }
    newnode->next=curr->next;
     curr->next=newnode;
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
     void insertatAtBeginning(int val){
        count++;
        Node* newnode= new Node(val);
        if(head==nullptr){
            head=newnode;
        }
        Node* temp= head;
        newnode->next=temp;
        head=newnode;
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

    list.display();
    list.insertAtPos(400, 3);
   // list.insertatAtBeginning(50);
    list.display();
  //  list.display();

    return 0;
}