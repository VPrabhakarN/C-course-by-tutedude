// Q.2) -> Write  a program to implement linked list using list containers 
#include <iostream>
#include <list>

// Define a node structure for the linked list
struct Node {
    int data;
    Node* next;
};

int main() {
    // Create an empty list
    std::list<Node> linkedList;

    // Insert elements into the linked list
    linkedList.push_back({10, nullptr});
    linkedList.push_back({20, nullptr});
    linkedList.push_back({30, nullptr});

    // Link the nodes together
    auto it = linkedList.begin();
    auto prev = it++;
    while (it != linkedList.end()) {
        prev->next = &(*it);
        prev = it++;
    }

    // Print the linked list
    std::cout << "Linked List:\n";
    for (const auto& node : linkedList) {
        std::cout << "Data: " << node.data << ", Next: ";
        if (node.next != nullptr)
            std::cout << node.next->data << std::endl;
        else
            std::cout << "nullptr" << std::endl;
    }

    return 0;
}
