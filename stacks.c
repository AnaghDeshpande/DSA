#include<stdio.h>
#include<stdlib.h>
#define max 100

int arr[max],top=-1;

void push(int val)
{
    if(arr[top]==max-1)
    {
        printf("Stack Overflow");
    }
    else
    {
        top++;
        arr[top]=val;
        printf("Element %d inserted at %d\n",val,top);
    }
}

void pop()
{
    if(arr[top]==-1)
    {
        printf("Stack Underflow");
    }
    else
    {
        top--;
        printf("Element poped at position %d\n",top-1);
    }
}

void display()
{
    int i=0;
    for (i=0; i<=top; i++)
    {
        printf("%d ", arr[i]);
    }

}
void main()
{
    int ch;
    int x;
    while(1)
    {
        printf("\nEnter Choice : \n1 Push\n2 Pop\n3 Display\n4 Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("Enter the element to be Inserted\n");
            scanf("%d",&x);
            push(x);
            break;
        case 2:
            pop();
            break;
        case 3:
            printf("elements in stack are: ");
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("\nInvalid Option Selected\n");
        }
    }

}
