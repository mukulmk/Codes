#include<stdio.h>
#include<time.h>

InsertionSort(int arr[],int n)
{
	int i,j,key;	
	for(j=1;j<n;j++)
	{	
		i=j-1;
		key=arr[j];
		while(i>=0 && arr[i]>key)
		{
			arr[i+1]=arr[i];
			i--;
		}
		arr[i+1]=key;
	}
}
	
int main()
{
	int A[55],i,n;
	time_t t;
	srand((unsigned) time(&t));

	n=((rand() % 50) + 5) ;
	
	for(i=0;i<n;i++)
	{
		A[i]=((rand() % 1000) + 1);
	}
	
	InsertionSort(A,n);
	
	printf("Soretd sequence is :\n");
	
	for(i=0;i<n;i++)
	{
		printf("%d\t",A[i]);
	}

	return(0);
}	


