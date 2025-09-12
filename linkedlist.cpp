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

    Node *insertAtPos(int val, int pos)
    {
        Node *newnode = new Node(val);
        if (pos < 1)
        {

            return head;
        }
        if (pos == 1)
        {
            newnode->next = head;
            head = newnode;
            return head;
        }
        Node *temp = head;
        int counter = 1;
        while (temp != nullptr && counter < pos - 1)
        {
            temp = temp->next;
            counter++;
        }

        newnode->next = temp->next;
        temp->next = newnode;
        return head;
    }

    void insertAtEnd(int val)
    {
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
    list.insertAtPos(40, 3);
    list.insertatAtBeginning(50);
    list.display();
  //  list.display();

    return 0;
}