#include <iostream>
using namespace std;

// Node class
class Node {
public:
    int data;
    Node* next;

    Node(int val = 0) {
        data = val;
        next = nullptr;
    }
};

// Circular Header Linked List class
class HeaderCircularList {
    Node* head; // header node
public:
    HeaderCircularList() {
        head = new Node();   // header node
        head->next = head;   // circular: points to itself
    }

    // ==================== INSERTION ====================

    // Insert at first position (after header)
    void insertAtFirst(int val) {
        Node* newNode = new Node(val);
        newNode->next = head->next;
        head->next = newNode;
    }

    // Insert at end
    void insertAtEnd(int val) {
        Node* newNode = new Node(val);
        Node* curr = head;
        while (curr->next != head) {
            curr = curr->next;
        }
        newNode->next = head;
        curr->next = newNode;
    }

    // Insert at specific position (1-based after header)
    void insertAtPos(int val, int pos) {
        Node* newNode = new Node(val);
        Node* curr = head;
        int count = 0;
        while (count < pos - 1 && curr->next != head) {
            curr = curr->next;
            count++;
        }
        newNode->next = curr->next;
        curr->next = newNode;
    }

    // ==================== DELETION ====================

    // Delete first node
    void deleteFirst() {
        if (head->next == head) {
            cout << "List is empty. Nothing to delete." << endl;
            return;
        }
        Node* temp = head->next;
        head->next = temp->next;
        delete temp;
    }

    // Delete last node
    void deleteEnd() {
        if (head->next == head) {
            cout << "List is empty. Nothing to delete." << endl;
            return;
        }
        Node* curr = head;
        while (curr->next->next != head) {
            curr = curr->next;
        }
        Node* last = curr->next;
        curr->next = head;
        delete last;
    }

    // Delete node at specific position (1-based after header)
    void deleteAtPos(int pos) {
        if (head->next == head) {
            cout << "List is empty. Nothing to delete." << endl;
            return;
        }
        Node* curr = head;
        int count = 0;
        while (count < pos - 1 && curr->next != head) {
            curr = curr->next;
            count++;
        }
        if (curr->next == head) {
            cout << "Invalid position. No node deleted." << endl;
            return;
        }
        Node* temp = curr->next;
        curr->next = temp->next;
        delete temp;
    }

    // ==================== DISPLAY ====================
    void display() {
        Node* curr = head->next;
        if (curr == head) {
            cout << "List is empty" << endl;
            return;
        }
        while (curr != head) {
            cout << curr->data << " ";
            curr = curr->next;
        }
        cout << endl;
    }
};

// ==================== MAIN FUNCTION ====================
int main() {
    HeaderCircularList list;

    // ---------- INSERTIONS ----------
    list.insertAtFirst(10);       // List: 10
    list.insertAtFirst(20);       // List: 20 10
    list.insertAtEnd(30);         // List: 20 10 30
    list.insertAtEnd(40);         // List: 20 10 30 40
    list.insertAtPos(25, 2);      // List: 20 25 10 30 40

    cout << "After insertions: ";
    list.display();

    // ---------- DELETIONS ----------
    list.deleteFirst();            // Deletes 20
    cout << "After deleting first: ";
    list.display();

    list.deleteEnd();              // Deletes 40
    cout << "After deleting last: ";
    list.display();

    list.deleteAtPos(2);           // Deletes 10 (position 2)
    cout << "After deleting at position 2: ";
    list.display();

    return 0;
}
