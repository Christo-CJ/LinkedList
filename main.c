#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

//Basic
Node* newNode(int data,Node* next)
{
    Node* n = (Node*)malloc(sizeof(Node));
    if(!n){printf("out of memory");}
    n->data=data;
    n->next=next;
    return n;
}

//Insertion
Node* insertHead(Node* head, int val)                                          //Insert at the beggining
{
    return newNode(val,head);
}

Node* insertTail(Node * head , int val)                                        //Insert at the end
{
    if(!head) return newNode(val,NULL);
    Node * temp = head;
    while(temp->next)
        {
            temp=temp->next;
        }
    temp->next = newNode(val,NULL);
    return head; 
}

Node* insertK(Node * head,int val, int k)
{
    if(!head) return k==1? newNode(val,NULL):NULL;
    if(k==1)  return newNode(val,head);

    int cnt = 0;
    for(Node* temp=head;temp;temp=temp->next)
    {
        cnt++;
        if(cnt == k-1)
        {
            temp->next = newNode(val,temp->next);
            break;
        }
    }
    return head;
}


int main()
{
printf("Single Linked List");
}