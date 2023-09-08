// create a complate binary tree.
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node* createNode(int data);
struct Node* createCompleteTree(int arr[], struct Node* root, int i, int n);
void inorderprint(struct Node* root);
void freeTree(struct Node* root);
bool checkComplete(struct Node *root, int index, int numberNodes);

struct Node {
    int data;
    struct Node *left, *right;
};

int main() {
    int n;
    printf("How many data you want to Enter in the tree :");
    scanf("%d",&n);
    int arr[n];
    printf("Enter data : ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    struct Node* root = NULL;

    // Insert elements into a complete binary tree using level-order traversal
    root = createCompleteTree(arr, root, 0, n);

    // Print the inorder traversal of the complete binary tree
    printf("Printing inOrder : ");
    inorderprint(root);
    printf("\n");

    if (checkComplete(root, 0, n))
        printf("The tree is a complete binary tree\n");
    else
        printf("The tree is not a complete binary tree\n");

    // Free memory (ensure proper memory management in a real application)
    freeTree(root);

    return 0;
}

// Function to create a new binary tree node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to insert nodes into a complete binary tree using level-order traversal
struct Node* createCompleteTree(int arr[], struct Node* root, int i, int n) {
    // Base case: Stop when the index exceeds the array size or the current element is a placeholder (e.g., -1).
    if (i < n ) {
        struct Node* temp = createNode(arr[i]);
        root = temp;

        // Insert left child
        root->left = createCompleteTree(arr, root->left, 2 * i + 1, n);

        // Insert right child
        root->right = createCompleteTree(arr, root->right, 2 * i + 2, n);
    }
    return root;
}

// Function to print the inorder traversal of a binary tree
void inorderprint(struct Node* root) {
    if (root != NULL) {
        inorderprint(root->left);
        printf("%d\t", root->data);
        inorderprint(root->right);
    }
}

void freeTree(struct Node* root) {
    if (root != NULL) {
        freeTree(root->left);
        freeTree(root->right);
        free(root);
    }
}

// Check if the tree is a complete binary tree
bool checkComplete(struct Node *root, int index, int numberNodes) {
    // Check if the tree is complete
    if (root == NULL)
        return true;

    if (index >= numberNodes)
        return false;

    return (checkComplete(root->left, 2 * index + 1, numberNodes) && checkComplete(root->right, 2 * index + 2, numberNodes));
}