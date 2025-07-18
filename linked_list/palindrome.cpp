#include <iostream>
using namespace std;

/*
  Definition for singly-linked list node.
*/
struct Node {
    int data;
    Node* next;
    Node(int x) : data(x), next(nullptr) {}
};

/*
  Inserts a new node with value val at the end of the list.
  If head is nullptr, it creates a new head.
*/
void insertAtTail(Node*& head, int val) {
    Node* newNode = new Node(val);
    if (!head) {
        head = newNode;
        return;
    }
    Node* ptr = head;
    while (ptr->next) {
        ptr = ptr->next;
    }
    ptr->next = newNode;
}

/*
  Prints the entire list in the form 1->2->3->NULL
*/
void printList(Node* head) {
    Node* ptr = head;
    while (ptr) {
        cout << ptr->data;
        if (ptr->next) cout << "->";
        ptr = ptr->next;
    }
    cout << "->NULL\n";
}

/*
  Helper function that fills in 'temp' list with the reverse of 'head'.
  'temp' must point to a pre-allocated list of the same length as 'head'.
  Because we pass 'temp' by reference (Node*&), advancing temp here
  updates the caller's pointer as well.
*/
void reversedLL(Node *head, Node *&temp) {
    if (head == nullptr) {
        return;
    }
    reversedLL(head->next, temp);
    temp->data = head->data;
    temp = temp->next;
}

/*
  Checks whether a linked list is a palindrome by creating a reversed copy
  and comparing node-by-node.
*/
bool isPalindrome(Node* head) {
    if (!head) return true;

    // 1) Count the size of the original list
    int size = 0;
    Node* ptr = head;
    while (ptr) {
        size++;
        ptr = ptr->next;
    }

    // 2) Build a new zero-filled list of the same length
    Node* newHead = new Node(0);
    ptr = newHead;
    int count = size;
    while (count > 1) {
        ptr->next = new Node(0);
        ptr = ptr->next;
        --count;
    }

    // 3) Use reversedLL to copy data in reverse order into newHead
    Node* temp = newHead;
    reversedLL(head, temp);

    // 4) Compare original list with reversed copy
    Node* ptr2 = newHead;
    ptr = head;
    int matchCount = 0;
    while (ptr && ptr2) {
        if (ptr->data == ptr2->data) {
            ++matchCount;
        }
        ptr = ptr->next;
        ptr2 = ptr2->next;
    }

    // 5) Clean up the reversed copy to avoid memory leak
    ptr2 = newHead;
    while (ptr2) {
        Node* toDel = ptr2;
        ptr2 = ptr2->next;
        delete toDel;
    }

    return (matchCount == size);
}

int main() {
    Node* head = nullptr;
    int n, x;

    cout << "Enter the number of elements to append: ";
    cin >> n;

    // Build the original list
    for (int i = 0; i < n; ++i) {
        cout << "Enter value #" << (i + 1) << ": ";
        cin >> x;
        insertAtTail(head, x);
    }

    // Print the original list
    cout << "\nOriginal list: ";
    printList(head);

    // Build a zero-filled list of the same length to hold the reversed copy
    int size = 0;
    Node* ptr = head;
    while (ptr) {
        ++size;
        ptr = ptr->next;
    }

    Node* reversedHead = new Node(0);
    ptr = reversedHead;
    int count = size;
    while (count > 1) {
        ptr->next = new Node(0);
        ptr = ptr->next;
        --count;
    }

    // Fill reversedHead with values in reverse order
    Node* temp = reversedHead;
    reversedLL(head, temp);

    // Print the reversed copy
    cout << "Reversed copy: ";
    printList(reversedHead);

    // Check palindrome using isPalindrome (which also internally builds and discards a reversed list)
    bool result = isPalindrome(head);
    cout << "Is the original list a palindrome? "
         << (result ? "Yes" : "No") << endl;

    // Cleanup: delete original list nodes
    ptr = head;
    while (ptr) {
        Node* toDel = ptr;
        ptr = ptr->next;
        delete toDel;
    }

    // Cleanup: delete reversed copy nodes (already printed above)
    ptr = reversedHead;
    while (ptr) {
        Node* toDel = ptr;
        ptr = ptr->next;
        delete toDel;
    }

    return 0;
}
