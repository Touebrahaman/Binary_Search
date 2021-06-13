#include<stdio.h>
int main()
{
	//int arr[]={10,20,30,40,50,60};
	int n,i,element,found=0;
	printf("enter size of an array\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the array's elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("array's elements are\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
	int low=0,high=n-1;
	printf("enter which element you will find\n");
	scanf("%d",&element);
	while(low<=high)
	{
		int mid;
		mid=(low+high)/2;
		if(element<arr[mid])
		{
			high=mid-1;
		}
		else if(element>arr[mid])
		{
			low=mid+1;
		}
		else if(element==arr[mid])
		{
			printf("element found at location %d\n",mid);
			found=1;
			break;
		}
	}
	if(!found)
	{
		printf("element not found\n");
	}
	return 0;
}
