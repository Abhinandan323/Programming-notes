#include <bits/stdc++.h>
using namespace std;

class node
{
	public:
	int data;
	node *left;
	node *right;
};

node* newNode (int data)
{
	node* temp = new node();

	temp->data = data;
	temp->left = temp->right = NULL;

	return temp;
}
node* constructTreeUtil (int pre[], int post[], int* preIndex,
								int l, int h, int size)
{
	// Base case
	if (*preIndex >= size || l > h)
		return NULL;
	node* root = newNode ( pre[*preIndex] );
	++*preIndex;
	if (l == h)
		return root;

	int i;
	for (i = l; i <= h; ++i)
		if (pre[*preIndex] == post[i])
			break;

	if (i <= h)
	{
		root->left = constructTreeUtil (pre, post, preIndex,
												l, i, size);
		root->right = constructTreeUtil (pre, post, preIndex,
												i + 1, h-1, size);
	}

	return root;
}

node *constructTree (int pre[], int post[], int size)
{
	int preIndex = 0;
	return constructTreeUtil (pre, post, &preIndex, 0, size - 1, size);
}
void printInorder (node* node)
{
	if (node == NULL)
		return;
	printInorder(node->left);
	cout<<node->data<<" ";
	printInorder(node->right);
}
int main ()
{
	int pre[] = {1, 2, 4, 8, 9, 5, 3, 6, 7};
	int post[] = {8, 9, 4, 5, 2, 6, 7, 3, 1};
	int size = sizeof( pre ) / sizeof( pre[0] );

	node *root = constructTree(pre, post, size);

	cout<<"Inorder traversal of the constructed tree: \n";
	printInorder(root);

	return 0;
}
