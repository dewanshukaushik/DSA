#include"stdio.h"
#include"conio.h"
#include"alloca.h"
#include"process.h"
typedef struct smilpelink
{
   int data;
   struct simplelink *next;
    }node;
   node *create(node *p)
   {
    p=(node)malloc(sizeof(node));
    {
        int a=0;
        while(p!=NULL)
        {
            arr[a]=p->data;
            p=p->next;
            a++;
        }
        for ( i = 0; i < (a-1); i++)
        {
            printf("[%d,%u]<--",arr[i],brr[i]);
            printf("Head");
            printf("\n\n\npress any ket to continue............");
            getch();
        }
        node *insert_begin(node){
            node *temp;
            temp=(node *)malloc(sizeof(node));
            printf("\nEnter the inserted data:");
            scanf("%d",&temp->data);
            temp->next=p;
            p=temp;
            return(p);
        }
        //FUN OD INSERT AFTER ELEMENT
        node *insert_end(node *P){
             node *temp,*q;
             q=p;
            temp=(node *)malloc(sizeof(node));
            printf("\nEnter the inserted data:");
            scanf("%d",&temp->data);
            while(p->next!=NULL)
            {
                p=p->temp;
            }

            p->next=temp;
            temp->next=(node *)NULL;
            return(q);
        }
        //FUN OF INSERT AFTER ELEMENT
        node *insert_after(node *P){
             node *temp,*q;
             int x;
             q=p;
            printf("\nEnter the data(after which you entered data):");
            scanf("%d",&x);
            while(p->data!=x)
            {
                p=p->next;
            }
            temp=(node *)malloc(sizeof(node));
            printf("\nEnter the inserted data:");
            scanf("%d",&temp->data);
            temp->next=p->next;
            p->next=temp;
            return(q);
        }
        //FUN OF COUNT THE NO. OF NODES
        int count(node *p)
        {
            int i=0;
            while (p!=NULL)
            {
               p=p->next;
               i++;
            }
            return(i);
        }
        //FUN OF INSERT AT SPECIFIC POSITION
         node *insert_at_spe_pos(node *P){
             node *temp,*q,*r;
             int x,a,i=1;
             a=count(p);
             q=p;
            printf("\nEnter the position(at which you want to enter data):");
            scanf("%d",&x);
           if(x>(a+1))
           {
            printf("Not able to insert node at such position:");
            getch();
           }
           else
           {
            if (x=1)
            {
            temp=(node *)malloc(sizeof(node));
            printf("\nEnter the inserted data:");
            scanf("%d",&temp->data);
            temp->next=p;
            q=temp;
            }
            else
            {
            temp=(node *)malloc(sizeof(node));
            printf("\nEnter the inserted data:");
            scanf("%d",&temp->data);
            temp->next=p;
            r->next=temp;
            }
           }
           return(q);
        }
            
            //FUN OD DELETE LAST NODE
            node *delend(node *p)
            {
                node *q,*r;
                r=p;
                q=p;
                if(p->next==NULL)
                {
                    r=(node *)NULL;
                }
                else
                {
                    while(p->next!=NULL)
                    {
                        q=p;
                        p=p->next;
                    }
                    q->next=(node *)NULL;
                }
                free(p);
                return(r);            }
        }
        //FUN OF DELETE SPECIFIC ELEMENT

        node *del_speci_ele(node *p)
        {
            node *q,*r;
            int x;
            q=p;
            r=q;
            printf("\nEnter the data to remove:");
            scanf("%d",&x);
            while (q->data!=x)
            {
               r=q;
               q=q->next;
            }
            if (q==r)
            p=p->next;
            else
            r->next=q->next;
            free(q);
            return(p);
            
            
        }
        //FUN DELETE FIRST NODE
        node *delbegin(node *p)
        {
            node *q;
            q=p;
            p=p->next;
            free(q);
            return(p);
        }
        // FUN OF DELETE NODE AFTER ELEMENT
        node *delete_after(node *p)
        {
            node *temp,*q;
             int x;
             a=count(p);
             q=p;
            printf("\nEnter the data(at which you want to delete):");
            scanf("%d",&x);
            while (q->data!=x)
            {
               p=p->next;
            }
            temp=p->next;
            p->next=temp->next;
            free(temp);
            return(q);

        }
        //FUN OF DELETE NODE AT SPECIFIC POSITION
        node *delete_at_spe_pos(node *P){
             node *temp,*q,*r;
             int x,a,i=1;
             a=count(p);
             q=p;
            printf("\nEnter the position(at which you want to remove data):");
            scanf("%d",&x);
           if(x>(a))
           {
            printf("Not able to remove node at such position:");
            getch();
           }
           else
           {
            if (x==1)
            {
            q=q->next;
            free(p);
            }
            else
            {
            while (i!=x)
            {
               r=p;
               p=p->next;
               i++;
            }
            r->next=p->next;
            free(p);
            }
           }
           return(q);
        }
        //FUN OF REVERSE THE LIST
        node *reverse(node *p)
        {
        node *q,*r;
        q=(node *)NULL
        while(p!=NULL)
        {
            r=q;
            q=p;
            p=p->next;
            q->next=r;
           }
            return(q);
        }

        //FUN OF MAIN SCREEN
        void screen(node *head)
        {
            clrscr();
            int ch,a;
            printf("\t\t\t\t SINGLE LINEAR LINKED LIST");
        }
    }
   }
