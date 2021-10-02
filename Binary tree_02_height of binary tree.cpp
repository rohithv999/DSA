#include <iostream>
#include <list>
using namespace std;
 

struct Node
{
    int key;
    Node *left, *right;
 
    Node(int key)
    {
        this->key = key;
        this->left = this->right = nullptr;
    }
};
 
int height(Node* root)
{
    
    if (root == nullptr) {
        return 0;
    }
 
    
    list<Node*> queue;
    queue.push_back(root);
 
    Node* front = nullptr;
    int height = 0;
 
    
    while (!queue.empty())
    {
        int size = queue.size();
 
    
        while (size--)
        {
            front = queue.front();
            queue.pop_front();
 
            if (front->left) {
                queue.push_back(front->left);
            }
 
            if (front->right) {
                queue.push_back(front->right);
            }
        }
 
        
        height++;
    }
 
    return height;
}
 
int main()
{
    Node* root = new Node(15);
    root->left = new Node(10);
    root->right = new Node(20);
    root->left->left = new Node(8);
    root->left->right = new Node(12);
    root->right->left = new Node(16);
    root->right->right = new Node(25);
 
    cout << "The height of the binary tree is " << height(root);
 
    return 0;
}


