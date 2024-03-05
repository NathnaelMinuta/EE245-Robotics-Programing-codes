/******************************************************************************
EE245 Home work 5 number 1 Nathnael Minuta 03/04/2024

Player List Manager
The program creates and manages a circular linked list of player data, including names and ages. 
Users can input player information, and the program organizes the list in ascending order based on age. 
The resulting list is printed once the user completes the input loop by entering 'x'.
*******************************************************************************/
#include <iostream>
#include <string>

using namespace std;

// Node class to represent each player entry
class CNode {
public:
    string playerName;
    unsigned int age;
    CNode* next;

    // Constructor to initialize node with player name, age, and next pointer
    CNode(string name, unsigned int playerAge) : playerName(name), age(playerAge), next(nullptr) {}
};

// Circular linked list class to manage player entries
class CList {
private:
    CNode* start;  // Start node of the circular linked list

public:
    // Constructor to initialize an empty list
    CList() : start(nullptr) {}

    // Destructor to free memory allocated for list nodes
    ~CList() {
        if (start != nullptr) {
            CNode* current = start->next;
            while (current != start) {
                CNode* temp = current;
                current = current->next;
                delete temp;
            }
            delete start;
        }
    }

    // Function to insert a new player node into the list, maintaining age order
    void insertNode(string name, unsigned int playerAge) {
        CNode* newNode = new CNode(name, playerAge);

        if (start == nullptr) {
            // If the list is empty, make the new node the start and link it to itself
            start = newNode;
            start->next = start;
        } else {
            // Traverse the list to find the correct position based on age
            CNode* current = start;
            while (current->next != start && current->next->age < playerAge) {
                current = current->next;
            }

            // Insert the new node into the list
            newNode->next = current->next;
            current->next = newNode;
        }
    }

    // Function to print the list contents, sorted by age
    void printList() {
        if (start == nullptr) {
            cout << "List is empty.\n";
            return;
        }

        cout << "List contents (sorted by age):\n";
        CNode* current = start;
        do {
            cout << "Name: " << current->playerName << ", Age: " << current->age << endl;
            current = current->next;
        } while (current != start);
    }
};

int main() {
    CList playerList;

    cout << "Enter player information (name and age), 'x' to exit:\n";

    while (true) {
        string name;
        unsigned int age;

        cout << "Enter player name: ";
        cin >> name;

        if (name == "x") {
            break;
        }

        cout << "Enter player age: ";
        cin >> age;

        playerList.insertNode(name, age);
    }

    playerList.printList();

    return 0;
}
