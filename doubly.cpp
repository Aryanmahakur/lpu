#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;
    Node(int val) {
        data = val;
        next = prev = nullptr;
    }
};

class LinkedList {
private:
    Node* head;
public:
    LinkedList() {
        head = nullptr;
    }

   
    void insertion(int data) {
        Node* newnode = new Node(data);
        if (head == nullptr) {
            head = newnode;
            return;
        }
        Node* curr = head;
        while (curr->next != nullptr) {
            curr = curr->next;
        }
        curr->next = newnode;
        newnode->prev = curr;
    }

   
    void deletion(int value) {
        if (head == nullptr) {
          
            return;
        }

        Node* curr = head;
       
        while (curr != nullptr && curr->data != value) {
            curr = curr->next;
        }

        if (curr == nullptr) {
           
            return;
        }

      
        if (curr == head) {
            head = curr->next;
            if (head != nullptr) {
                head->prev = nullptr;
            }
            delete curr;
            return;
        }

        if (curr->next != nullptr) {
            curr->next->prev = curr->prev;
        }
        if (curr->prev != nullptr) {
            curr->prev->next = curr->next;
        }

        delete curr;
    }


    void display_forward() {
        Node* curr = head;
        cout << "Forward: ";
        while (curr != nullptr) {
            cout << curr->data << " ";
            curr = curr->next;
        }
        cout << "\n";
    }

    // Print backward (for test)
    void display_backward() {
        if (head == nullptr) {
            cout << "Backward: (empty)\n";
            return;
        }
        Node* curr = head;
        // go to tail
        while (curr->next != nullptr) {
            curr = curr->next;
        }
        cout << "Backward: ";
        while (curr != nullptr) {
            cout << curr->data << " ";
            curr = curr->prev;
        }
        cout << "\n";
    }
};

int main() {
    LinkedList li;
    li.insertion(10);
    li.insertion(20);
    li.insertion(30);
    li.display_forward();
    li.display_backward();

    li.deletion(20);
    
    li.display_forward();
    li.display_backward();

    li.deletion(10);
   
    li.display_forward();
    li.display_backward();

    li.deletion(30);
   
}