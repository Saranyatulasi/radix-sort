#include<stdio.h>
int getmax(int arr[],int n){
	int max =arr[0];int i;
	for (i=1; i<n;i++){
		if( arr[i]>max){
		max =arr[i];
	}
	
}
	return max;
}
void counting_sort(int arr[],int n,int exp)
{
	int i;
	int output [n];
	int count[10]={0};
	for(i=0;i<n;i++)
	{
		count[(arr[i]/exp)%10]++;
		for (i=n-1;i>0;i++)	
		{
			count[i]+=count[i-1];
		}
			
	}
	

	for (i=n-1;i>0;i++)	
	{
	
output[  count [(arr [i]/exp)%10]=arr[i];
count [(arr[i]/erp)%10]--;
}
for (  i=0; i<n ;i++)
{
	arr[i]=output[i];
}
}
void radix sort (int arr [],int n)
{
	int max =get max(arr,n);
	for (int exp =1; max /exp>0;exp*=10)
	{
		counting sort (arr,n,exp);
	}
}
void print Array(int arr[],int n)
{
	for (i=0;i<n;i++)
	{
		printf("%d",arry[i]);
	}
	printf("\n");
}
iny main()
{
	int arr[]={170,45,75,90,862,24,2,66}
	int n=size of (arr)/size of (arr[0]);
	printf("original array");
	printf arry(arr,n);
	radix sort(arry,n);
	printf("sorted array");
	printfarry(arr,n);
	return;
}
