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

	MergeSort(A,0,n-1);
	
	printf("Soretd sequence is :\n");
	
	for(i=0;i<n;i++)
	{
		printf("%d\t",A[i]);
	}

	return(0);
}
	
MergeSort(int arr[],int p,int r)
{
	int q;
	if(p<r)
	{
		q=(p+r)/2;
		MergeSort(arr,p,q);
		MergeSort(arr,q+1,r);
		Merge(arr,p,q,r);
	}
}

Merge(int arr[],int p,int q,int r)
{
	int a,b,i,j,k,L[60],R[60];
	a=q-p+1;
	b=r-q;

	for(i=0;i<a;i++)
	{
		L[i]=arr[p+i];
	}
	
	for(j=0;j<b;j++)
	{
		R[j]=arr[q+j+1];
	}

	L[a]=1500;
	R[b]=1500;
	
	i=0;
	j=0;	

	for(k=p;k<=r;k++)
	{
		if(L[i]<=R[j])
		{
			arr[k]=L[i];
			i++;
		}
		else
		{
			arr[k]=R[j];
			j++;
		}
	}
}
