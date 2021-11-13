#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

display(struct node *head)
{
    if(head == NULL)
    {
        printf("NULL\n");
    }
    else
    {
        printf("%d\n", head -> data);
        display(head->next);
    }
}

void concatenate(struct node *head1,struct node *head2)
{
    if( head1 != NULL && head2!= NULL )
    {
        if (head1->next == NULL)
            head1->next = head2;
        else
            concatenate(head1->next,head2);
    }
    else
    {
        printf("Either head1 or head2 is NULL\n");
    }
}

int main()
{
    struct node *prev,*head1, *head2, *p;
    int n,i;
    printf ("number of elements in head1:");
    scanf("%d",&n);
    head1=NULL;
    for(i=0;i<n;i++)
    {
        p=malloc(sizeof(struct node));
        scanf("%d",&p->data);
        p->next=NULL;
        if(head1==NULL)
            head1=p;
        else
            prev->next=p;
        prev=p;
    }
    printf ("number of elements in head2:");
    scanf("%d",&n);
    head2=NULL;
    for(i=0;i<n;i++)
    {
        p=malloc(sizeof(struct node));
        scanf("%d",&p->data);
        p->next=NULL;
        if(head2==NULL)
            head2=p;
        else
            prev->next=p;
        prev=p;
    }
    concatenate(head1,head2);
    display(head1);
    return 0;
}
