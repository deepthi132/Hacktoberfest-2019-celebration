#include<stdio.h>
#include<stdlib.h>
 struct node
 {
     int data ;
     struct node *next ;
 };
 struct node *head=NULL,*last=NULL, *new_node ,*ptr,*preptr ;

 int main()
 { int k,p,n;
     printf("enter k=0 to terminate");
     scanf("%d",&k);
     while(k!=0)
     {
         printf("p=1:add in the front\np=2:add in the last\np=3at a specific location");
         scanf("%d",&p);
         new_node = (struct node*)malloc(sizeof(struct node));
         printf("enter the val to be stored");
         scanf("%d",&new_node->data);


         if(p==1)
         {
             if(head==NULL)
             {
                 new_node->next=NULL;
                 head=new_node;
                 last=new_node ;
             }
             else
             {
                 new_node->next=head ;
                 head=new_node;
             }
         }
         else if(p==2)
         {if(head==NULL)
             {
                 new_node->next=NULL;
                 head=new_node;
                 last=new_node;
             }
             else
            {

             last->next = new_node;
             new_node->next=NULL;
             last = new_node;
            }
         }
         else if(p==3)
         { int i=0;
             printf("enter th position to be entered");
             scanf("%d",&n);
            ptr =head ;
             while(i!=n-1)
             {
                 ptr=ptr->next;
                 i++;
             }
             preptr=ptr->next;
             new_node->next=preptr;
             ptr->next=new_node;
         }



     }

     ptr=head ;
     while(ptr->next!=NULL)
     {
         printf("%d ,",ptr->data);
         ptr=ptr->next ;
     }

     return 0 ;

 }
