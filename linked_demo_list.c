#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
}
node;

int main(void)
{
    
    node *list = NULL;
    
    node *n = malloc(sizeof(node));
    
    if(n != NULL)
    {
        //(*n).number = 1;
        n->number = 1;
    }
    
    list = n;  //should this be list = NULL; as a way to reinitialize it?
    
    node *n = malloc(sizeof(node));
    if (n != NULL)
    {
        
        n->number = 2;
        n->next = NULL;
    }
    
    list->next = n;
    
    node *n = malloc(sizeof(node));
    if (n != NULL)
    {
        
        n->number = 3;
        n->next = NULL;
    }
    
    list->next->next = n;
}
