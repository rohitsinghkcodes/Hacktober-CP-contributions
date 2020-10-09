#include<stdio.h>
#include<stdlib.h>
 
struct node
{
    int key;
    struct node *left;
    struct node *right;
};
struct node* search(struct node* root, int key)
{
    if (root == NULL || root->key == key)
       return root;
    if (root->key < key)
       return search(root->right, key);
    return search(root->left, key);
}
struct node *new(int item)
{
    struct node *temp =  (struct node *)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}
void preorder(struct node *p)
{
    if(p!=NULL)
    {
        printf("%d\n",p->key );
        preorder(p->left);
        preorder(p->right);

    }
}
struct node *LCA(struct node* root, int n1, int n2)
{
    if (root == NULL) 
        return NULL;
    if (root->key > n1 && root->key > n2)
        return LCA(root->left, n1, n2);
    if (root->key < n1 && root->key < n2)
        return LCA(root->right, n1, n2);
 
    return root;
}
void postorder(struct node *root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d\n",root->key );
    }
}
void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->key);
        inorder(root->right);
    }
}
struct node* insert(struct node* node, int key)
{
    if (node == NULL) 
    	return new(key);
    if (key < node->key)
        node->left  = insert(node->left, key);
    else
        node->right = insert(node->right, key);
    return node;
}
struct node * minval(struct node* node)
{
    struct node* current = node;
    while (current->left != NULL)
        current = current->left;
    return current;
}

struct node * maxval(struct node* node)
{
	struct node* current = node;
	while (current->right != NULL)
		current = current->right;
	return current;
}
struct node* delete(struct node* root, int key)
{
    if (root == NULL) 
    	return root;
    if (key < root->key)
        root->left = delete(root->left, key);
    else if (key > root->key)
        root->right = delete(root->right, key);
    else
    {
        if (root->left == NULL)
        {
            struct node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            struct node *temp = root->left;
            free(root);
            return temp;
        }
        struct node* temp = minval(root->right);
        root->key = temp->key;
        root->right = delete(root->right, temp->key);
    }
    return root;
}
 int mindepth(struct node *head)
{
    if(head==NULL)
        return 0;
    else
    {
        if(head->left==NULL && head->right==NULL)
            return 1;
        if(!head->left)
            return mindepth(head->right)+1;
        if(!head->right)
            return mindepth(head->left)+1;
    }
    if(mindepth(head->left)<mindepth(head->right))
        return mindepth(head->left)+1;
    else
        return mindepth(head->right)+1;
}
int main()
{
    int n,t,val,a,b;
    scanf("%d",&t);
    while(t--)
    {
        struct node *root = NULL;
        struct node *temp = NULL;
        scanf("%d",&n);
        while(n--)
        {
            scanf("%d",&val);
            root=insert(root,val);
        }
        printf("%d\n",mindepth(root) );
        scanf("%d",&val);
        while(val--)
        {
            scanf("%d %d",&a,&b);
            temp=LCA(root,a,b);
            printf("%d\n",temp->key );
        }
    }
    return 0;
}
