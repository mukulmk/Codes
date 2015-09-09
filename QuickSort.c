#include<stdio.h>
#include<time.h>

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

	QuickSort(A,0,n-1);
	
	printf("Soretd sequence is :\n");
	
	for(i=0;i<n;i++)
	{
		printf("%d\t",A[i]);
	}

	return(0);
}

QuickSort(int arr[],int p,int r)
{
	int q;
	if(p<r)
	{
		q=RandomPartition(arr,p,r);
		QuickSort(arr,p,q-1);
		QuickSort(arr,q+1,r);
	}
}

RandomPartition(int arr[],int p,int r)
{	
	int i,k;
	k=r-p+1;
	i=(rand() % k)+p;
	swap(&arr[i],&arr[r]);
	return Partition(arr,p,r);
}

int Partition(int arr[],int p,int r)
{
	int i,j,x;
	x=arr[r];
	i=p-1;
	for(j=p;j<r;j++)
	{	
		if(arr[j]<=x)
		{
			i++;
			swap(&arr[i],&arr[j]);
		}
	}
	swap(&arr[i+1],&arr[r]);
	return(i+1);
}

swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
