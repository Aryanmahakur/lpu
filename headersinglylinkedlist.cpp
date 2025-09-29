#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) : data(val), next(nullptr), prev(nullptr) {}
};

class DoublyLinkedList {
private:
    Node* head;

public:
    DoublyLinkedList() : head(nullptr) {}

    // Insert at the beginning
    void insertAtBeginning(int value) {
        Node* newNode = new Node(value);
        if (head) {
            newNode->next = head;
            head->prev = newNode;
        }
        head = newNode;
    }

    // Insert at the end
    void insertAtEnd(int value) {
        Node* newNode = new Node(value);
        if (!head) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next)
            temp = temp->next;
        temp->next = newNode;
        newNode->prev = temp;
    }

    // Insert at a given position
    void insertAtPosition(int value, int position) {
        if (position < 0) {
            cout << "Invalid position!" << endl;
            return;
        }
        if (position == 0) {
            insertAtBeginning(value);
            return;
        }
        Node* newNode = new Node(value);
        Node* temp = head;
        for (int i = 0; temp && i < position - 1; ++i)
            temp = temp->next;
        if (!temp) {
            cout << "Position out of bounds!" << endl;
            delete newNode;
            return;
        }
        newNode->next = temp->next;
        if (temp->next)
            temp->next->prev = newNode;
        temp->next = newNode;
        newNode->prev = temp;
    }

    // Delete from the beginning
    void deleteFromBeginning() {
        if (!head) {
            cout << "List is empty!" << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        if (head)
            head->prev = nullptr;
        delete temp;
    }

    // Delete from the end
    void deleteFromEnd() {
        if (!head) {
            cout << "List is empty!" << endl;
            return;
        }
        Node* temp = head;
        while (temp->next)
            temp = temp->next;
        if (temp->prev)
            temp->prev->next = nullptr;
        else
            head = nullptr;
        delete temp;
    }

    // Delete at a given position
    void deleteAtPosition(int position) {
        if (position < 0) {
            cout << "Invalid position!" << endl;
            return;
        }
        if (position == 0) {
            deleteFromBeginning();
            return;
        }
        Node* temp = head;
        for (int i = 0; temp && i < position; ++i)
            temp = temp->next;
        if (!temp) {
            cout << "Position out of bounds!" << endl;
            return;
        }
        if (temp->prev)
            temp->prev->next = temp->next;
        if (temp->next)
            temp->next->prev = temp->prev;
        delete temp;
    }

    // Display the list
    void display() const {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "nullptr" << endl;
    }
};
int main() {
    DoublyLinkedList list;

    list.insertAtBeginning(10);
    list.insertAtEnd(20);
    list.insertAtPosition(15, 1);
    list.insertAtBeginning(5);
    list.insertAtEnd(25);

    cout << "Doubly Linked List: ";
    list.display();

    list.deleteFromBeginning();
    list.deleteFromEnd();
    list.deleteAtPosition(1);

    cout << "After Deletions: ";
    list.display();

    return 0;
}
