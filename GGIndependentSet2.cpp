////
//// Created by jeevan on 3/18/17.
////
///* Dynamic programming based program for Largest Independent Set problem */
//#include <stdio.h>
//#include <stdlib.h>
//
//// A utility function to find max of two integers
//int max(int x, int y) { return (x > y)? x: y; }
//
///* A binary tree node has data, pointer to left child and a pointer to
//right child */
//struct node
//{
//	int data;
//	struct node *left, *right;
//};
//
//struct result {
//    int include;
//    int exclude;
//};
//
//struct result* newResultNode()
//{
//	struct result* temp = (struct result *) malloc( sizeof(struct result) );
//	temp->include = 0;
//	temp->exclude = 0;
//	return temp;
//}
//
//// A memoization function returns size of the largest independent set in
//// a given binary tree
//struct result* LISS(struct node *root)
//{
//
//    struct result *r = newResultNode();
//    if (root == NULL) {
//        r->include = 0;
//        r->exclude = 0;
//        return r;
//    }
//	if (root->left == NULL && root->right == NULL) {
//	    r->include = 1;
//	    r->exclude = 0;
//	    return r;
//	}
//	//Postorder
//	struct result *left = LISS(root->left);
//	struct result *right = LISS(root->right);
//
//	r->include = 1 + left->exclude + right->exclude;
//	//exclude current node, that means maximum of left node(either included/excluded) +
//	//right node(either included/excluded)
//	r->exclude = max(left->include, left->exclude) +
//	               max(right->include, right->exclude);
//	return r;
//}
//
//// A utility function to create a node
//struct node* newNode(int data)
//{
//	struct node* temp = (struct node *) malloc( sizeof(struct node) );
//	temp->data = data;
//	temp->left = temp->right = NULL;
//	return temp;
//}
//
//// Driver program to test above functions
//int main()
//{
//	// Let us construct the tree given in the above diagram
//	struct node *root		 = newNode(20);
//	root->left			 = newNode(8);
//	root->left->left		 = newNode(4);
//	root->left->right		 = newNode(12);
//	root->left->right->left = newNode(10);
//	root->left->right->right = newNode(14);
//	root->right			 = newNode(22);
//	root->right->right	 = newNode(25);
//    struct result *r = LISS(root);
//	printf ("Size of the Largest Independent Set is %d", max(r->include, r->exclude));
//
//	return 0;
//}
//
