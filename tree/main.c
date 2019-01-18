#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
typedef struct {
struct node *left;
int data;
struct node* right;
}node;
 node *tree;
 node *create(node*);
 node *insert(node*,int);
 node *delete(node*,int);
 void preorder(node *);
 void inorder(node*);
 void postorder(node*);

int main()
{
    int opt,i,data;
    printf("to create a tree");
    create();
do{
    printf("enter opt");
    scanf("%d",&opt);
    switch(opt)
    {
        case 1:printf("enter data");
               scanf("%d",&data);
            insert(node *tree,int data);
            break;
        case 2:printf("enter data to dlt");
             scanf("%d",&data);
            delete(node*tree,int data);
            break;
        case 3:preorder(node *tree);
            break;
        case 4: inorder(node *tree);
            break;
        case 5:postorder(node*tree);
            break;

    }
   }while(opt!=10);
    return 0;
}

struct node *insert(node *tree,int data)
{
    int data;
    node *ptr,*nptr,*pptr;   // parentptr=pptr,  nodeptr= nptr
    ptr=(node*)malloc(sizeof(node));
    ptr->data=data;
    ptr->left=NULL;
    ptr->right=NULL;
    if(tree=NULL)
    {
        tree=ptr;
        tree->left=NULL;
        tree->right=NULL;
    }
    else
    {
        pptr=NULL;
        nptr=tree;
        while(nptr!=NULL)
        {
            pptr=nptr;
            if(val<nptr->data)
                nptr=nptr->left;
            else
                nptr=nptr->right;
        }
        if(val<pptr->data)
            pptr->left=ptr;
        else
            pptr->right=ptr;
    }
    return tree;
}

void preorder(node *tree)
{
    if(tree!=NULL)
    {
        printf("%d->",tree->data);
        preorder(tree->left);
        preorder(tree->right);
    }
}
void inorder(node *tree)
{
    inorder(tree->left);
    printf("%d->",tree->data);
    inorder(tree->right);
}

void postorder(node *tree)
{
    postorder(tree->left);
    postorder(tree->right);
    printf("%d->",tree->data);
}

node *smallest(node *tree)
{
    if((tree==NULL)||(tree->left==NULL))
        return tree;
    else
        return smallest(tree->left);
}

node largest(node*tree)
{
    if((tree=NULL)||(tree->right==NULL))
    return tree;
    else
    return largest(tree->right);
}

node* delete(node *tree,int val)
{
    node *cur,*suc,*psuc,*parent,*ptr;
    if(tree->left==NULL)
    {
        printf("tree is empty");
        return tree;

    }
    parent= tree;
    cur=tree->left;
    while(cur!=NULL && val!=cur->data)
    {
        parent=cur;
        cur=(val<cur->data)?(cur->left):(cur->right);
    }
    if (cur==NULL)
    {
        printf("the val to b deleted is not present in the node");
        return tree;
    }
    if(cur->left==NULL)
        ptr=cur->right;
    else if(cur->right==NULL)
        ptr=cur->left;


}


