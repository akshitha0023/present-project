Write a program to perform the following operations on BST:
i) Insertion ii) Deletion iii) Search
// C++ program to demonstrate insertion
// in a BST recursively. #include <iostream> using namespace std;

class BST
{
int data;
BST *left, *right;


 
public:

















};
 


// Default constructor. BST();

// Parameterized constructor. BST(int);

// Insert function.
BST* Insert(BST*, int);


// Inorder traversal. void Inorder(BST*);
 


// Default Constructor definition. BST ::BST()
: data(0)
, left(NULL)
 
, right(NULL)
{
}


// Parameterized Constructor definition. BST ::BST(int value)
{
data = value;
left = right = NULL;
}


// Insert function definition.
BST* BST ::Insert(BST* root, int value)
{
if (!root)
{
// Insert the first node, if root is NULL. return new BST(value);
}


// Insert data.
if (value > root->data)
{
 






}
else
{
 
// Insert right node data, if the 'value'
// to be inserted is greater than 'root' node data.
// Process right nodes.
root->right = Insert(root->right, value);
 
// Insert left node data, if the 'value'
// to be inserted is greater than 'root' node data.
// Process left nodes.
root->left = Insert(root->left, value);
}
// Return 'root' node, after insertion. return root;
}


// Search a key in BST
BST* BST ::Search(BST* root, int value)
{

if (root==NULL|| root->data == value)
{
return root;
}
// Insert data.
if (root->data<value)
return search(root->right, value); return search(root->left, value);
}


// Inorder traversal function.
// This gives data in sorted order.
BST* BST ::Delete(BST* root, value){ if (root == NULL)
return root;
// If the key to be deleted is
// smaller than the root's
// key, then it lies in left subtree
 
if (value< root->data)
root->left = Delete(root->left, value);


// If the key to be deleted is
// greater than the root's
// key, then it lies in right subtree else if (value> root->data)
root->right = Delete(root->right, value);


// if key is same as root's key, then This is the node
// to be deleted else {
// node has no child
if (root->left==NULL && root->right==NULL) return NULL;

// node with only one child or no child else if (root->left == NULL) {
BST* temp = root->right; free(root);
return temp;
}
else if (root->right == NULL) { BST* temp = root->left;
free(root); return temp;
}


// node with two children: Get the inorder successor
// (smallest in the right subtree)
 
// Copy the inorder successor's content to this node root->data = temp->data;

// Delete the inorder successor
root->right = deleteNode(root->right, temp->data);
}
return root;
}




void BST ::Inorder(BST* root)
{
if (!root) {
return;
}
Inorder(root->left); cout<< root->data <<endl; Inorder(root->right);
}


// Driver code int main()
{
BST b, *root = NULL; root = b.Insert(root, 50); b.Insert(root, 30);
b.Insert(root, 20);
b.Insert(root, 40);
b.Insert(root, 70);
b.Insert(root, 60);
 
b.Insert(root, 80); b.Inorder(root);
BST ans*=b.Search(10); Cout<<”Search key is found : ”; if(ans->value == 10)
cout<<”true”;
else
cout<<”false”;
return 0;
}
