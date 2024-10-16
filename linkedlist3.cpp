  #include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Constructor to initialize the node
    Node(int num) {
        data = num;
        next = NULL;
    }
};

// Function to insert a node at the end of the linked list
void insert_end(Node*& head, int data) {
    Node* new_node = new Node(data); // Create a new node
    if (head == NULL) {
        // If the list is empty, make the new node the head
        head = new_node;
    } else {
        // Traverse to the last node
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        // Link the new node at the end
        temp->next = new_node;
    }
}

// Function to display the linked list
void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << "->"; // Print current node's data
        temp = temp->next;          // Move to the next node
    }
    cout << "NULL" << endl; // Indicate the end of the list
}

int main() {
    Node* head = NULL; // Initialize head to NULL

    // Inserting nodes at the end
    insert_end(head, 10);
    display(head); // Display the list

    insert_end(head, 20);
    display(head); // Display the list

    insert_end(head, 30);
    display(head); // Display the list 

    return 0;
}
