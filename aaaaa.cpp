#include <iostream>
using namespace std;
class node
{
public:
	int data;
	node* left;
	node *right;
	node(int d)
	{
		data=d;
		left=NULL;
		right=NULL;
	}
};
void levelorder(node *root)
{
	
}
int  main()
{
	node *root=new node(1);
	root->left =new node(2);
	root->right=new node(3);
	root->left->right=new node(4);
	root->left->left=new node(5);
	root->right->left=new node(6);
	root->right->right=new node(7);
	levelorder(root);

}