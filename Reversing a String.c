#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 100

int top=-1;
char str[max],arr[max];

void pushchar(char c)
{
    if(top==max-1)
    {
        printf("Stack Overflow");
    }
    else
    {
        top++;
        arr[top]=c;
    }
}
void popchar()
{
    if(top==-1)
    {
        printf("Stack Underflow");
    }
    else
    {
        top--;
        printf("Element poped");
    }
}
void displaychar()
{
    int j=0;
    for(j=top; j>=0; j--)
    {
        printf("%c",arr[j]);
    }

}

void main()
{
    int i=0,ch;
    printf("\nEnter the string\n");
    gets(str);
    for(i=0; i<strlen(str); i++)
    {
        pushchar(str[i]);
    }
    while(1)
    {
        printf("\nEnter the choice:\n1 Popchar\n2 Displaychar\n3 Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            popchar();
            break;
        case 2:
            displaychar();
            break;
        case 3:
            exit(0);
        default:
            printf("Invalid Option");
        }
    }

}
