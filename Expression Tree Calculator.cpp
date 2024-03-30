/******************************************************************************
EE245 Homework 7 Question number 1 Nathnael Minuta 03/30/2024

Expression Tree Calculator
This program builds a binary tree representing an algebraic expression
using multiplication and addition operators. It then computes the result f the expression recursively.
*******************************************************************************/
#include <iostream>
using namespace std;

// Define a Node class to represent individual nodes in the binary tree
class Node {
public:
    char my_op;       // Operator variable
    float my_num;     // Node number
    Node* my_left;    // Pointer to left child
    Node* my_right;   // Pointer to right child

    // Constructor to initialize the node
    Node(char op, float num) : my_op(op), my_num(num), my_left(nullptr), my_right(nullptr) {}
};

// Recursive function to evaluate the solution of the expression using the binary tree
float evaluate(Node* root) {
    if (root == nullptr) {
        return 0.0;
    }

    if (root->my_op == 'n') {
        return root->my_num;  // Numeric node
    } else if (root->my_op == '+') {
        return evaluate(root->my_left) + evaluate(root->my_right);  // Addition operation
    } else if (root->my_op == '*') {
        return evaluate(root->my_left) * evaluate(root->my_right);  // Multiplication operation
    }

    return 0.0; // Default case
}

int main() {
    // Create the binary tree with the adjusted expression
    Node* root = new Node('+', 0.0);
    root->my_left = new Node('+', 0.0);
    root->my_right = new Node('n', 7.2);
    root->my_left->my_left = new Node('n', 2.0);
    root->my_left->my_right = new Node('*', 0.0);
    root->my_left->my_right->my_left = new Node('n', 5.0);
    root->my_left->my_right->my_right = new Node('n', 4.5);

    /* The tree looks like this:
             +
            / \
           +  7.2
          / \
         2  *
           / \
          5  4.5
    */

    // The evaluation should be: (2 + (5 * 4.5)) + 7.2 = 24.5 + 7.2 = 31.7
    cout << "Result of the expression: " << evaluate(root) << endl;

    // Clean up memory (not done in this simplified example)

    return 0;
}