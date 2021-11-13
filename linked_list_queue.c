#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node{
    char name[30];
    struct node *next;
};

typedef struct node _QNODE;

typedef struct {
    _QNODE *queue_front, *queue_rear;
} _QUEUE;

_QNODE *enqueue (_QUEUE *q, char x[])
{
    _QNODE *temp;

    temp= (_QNODE *) malloc (sizeof(_QNODE));

    if (temp==NULL){
        printf("Bad allocation \n");
        return NULL;
    }

    strcpy(temp->name,x);

    temp->next=NULL;

    if(q->queue_rear==NULL)
    {
        q->queue_rear=temp;
        q->queue_front=
        q->queue_rear;
    }
    else
    {
        q->queue_rear->next=temp;
        q->queue_rear=temp;
    }

    return(q->queue_rear);
}

char *dequeue(_QUEUE *q,char x[])
{
    _QNODE *temp_pnt;

    if(q->queue_front==NULL){
        q->queue_rear=NULL;
        printf("Queue is empty \n");

        return(NULL);
    }
    else{
        strcpy(x,q->queue_front->name);

        temp_pnt=q->queue_front;

        q->queue_front= q->queue_front->next;

        free(temp_pnt);

        if(q->queue_front==NULL)
            q->queue_rear=NULL;

        return(x);
    }
}

void init_queue(_QUEUE *q)
{
    q->queue_front= q->queue_rear=NULL;
}

int isEmpty(_QUEUE *q)
{
    if(q==NULL) return 1;
    else return 0;
}

main()
{
    int i,j;
    char command[5],val[30];
    _QUEUE q;

    init_queue(&q);

    command[0]='\0';

    printf("For entering a name use 'enter <name>'\n");
    printf("For deleting use 'delete' \n");
    printf("To end the session use 'bye' \n");

    while(strcmp(command,"bye")){

        scanf("%s",command);
        if(!strcmp(command,"enter")) {

            scanf("%s",val);

            if((enqueue(&q,val)==NULL))
                printf("No more pushing please \n");
            else
                printf("Name entered %s \n",val);

        }

        if(!strcmp(command,"delete")) {

            if(!isEmpty(&q))
                printf("%s \n",dequeue(&q,val));
            else
                printf("Name deleted %s \n",val);
        }
    } /* while */

    printf("End session \n");
}
