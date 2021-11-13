#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

printElements(struct node *head)
{
    if(head == NULL)
        printf("NULL ");
    else
    {
        printf("%d ", head -> data);
        printElements(head->link);
    }
}

void concatenate(struct node *head1,struct node *head2)
{
    if( head1 != NULL && head2!= NULL )
    {
        if (head1->link == NULL)
            head1->link = head2;
        else
            concatenate(head1->link,head2);
    }
    else
        printf("Either head1 or head2 is NULL\n");
}

int main()
{
    struct node *prev, *head1, *head2, *p;
    int n,i;
    printf ("Enter the number of elements in head1: ");
    scanf("%d",&n);
    head1=NULL;
    for(i=0;i<n;i++)
    {
        p=malloc(sizeof(struct node));
        scanf("%d",&p->data);
        p->link=NULL;
        if(head1==NULL)
            head1=p;
        else
            prev->link=p;
        prev=p;
    }
    printf ("\n");
    printf ("Enter the number of elements in head2: ");
    scanf("%d",&n);
    head2=NULL;
    for(i=0;i<n;i++)
    {
        p=malloc(sizeof(struct node));
        scanf("%d",&p->data);
        p->link=NULL;
        if(head2==NULL)
            head2=p;
        else
            prev->link=p;
        prev=p;
    }
    concatenate(head1,head2);
    printf ("\n");
    printElements(head1);
    return 0;
}
