#include <stdio.h>
#include<stdlib.h>

#define MAX 100
#define MAXSIZE 100

struct stack
{
    int stk[MAXSIZE];
    int top;
};

typedef struct stack STACK;
STACK s;
 
void push(int);
int  pop(void);
void display(int);

int main()
{
	int i,j,m,n,p=0,key[50],ind[50],count=0,copy;
	s.top = -1;
	scanf("%d",&m);
	while(m>0)
	{
		scanf("%d",&n);
		
		for(i=0;i<n;i++)
		{
			scanf("%d",&key[i]);	
		}

		for(i=0;i<n;i++)
		{
			scanf("%d",&ind[i]);	
		}
		p=n-1;
		for(j=0;j<n;j++)
		{	
			count=0;
	
			for(i=0;i<n;i++)
			{
				if(ind[i]!=p)
				count++;
				else
				break;				
			}

			copy=count;
			push(key[copy]);
			p--;		
		}
		display(n);
		while(s.top==!0)
		{
			pop();
			s.top--;
		}
		m--;		
	}	

}

void push (int num)
{
    if (s.top == (MAXSIZE - 1))
    {
        printf ("Stack is Full\n");
        return;
    }
    else
    {
        s.top = s.top + 1;
        s.stk[s.top] = num;
    }
    return;
}
/*  Function to delete an element from the stack */
int pop ()
{
    int num;
    if (s.top == - 1)
    {
        printf ("Stack is Empty\n");
        return (s.top);
    }
    else
    {
        num = s.stk[s.top];
        s.top = s.top - 1;
    }
    return(num);
}
/*  Function to display the status of the stack */
void display(int count)
{
    int i;
    if (s.top == -1)
    {
        return;
    }
    else
    {
        for (i = s.top; i >= 0; i--)
        {
	    count--;
            printf ("%d ", s.stk[i]);
	    if(count==0)
	    break;
        }
    }
    printf ("\n");
}



