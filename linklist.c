#include<stdio.h>
#include<stdlib.h>


    struct node
    {
      int data;
       struct node *prev;
       struct node *next;
     };
        void link(struct node *point)
     {
       while(point!=NULL)
      {
       printf("enter the element\n");
       scanf("%d\n",&point->data);
       printf("%d\n",point->data);
       point = point->next;
       }
    }
      void main()
     {
    struct node *head, *newnode, *temp;
      head=(struct node*)malloc(sizeof(struct node));
      newnode=(struct node*)malloc(sizeof(struct node));
      temp=(struct node*)malloc(sizeof(struct node));
      head->next = newnode;
      newnode->prev = head;
      newnode->next = temp;
      temp->prev = newnode;
      temp->next = NULL;
      link(head);
}