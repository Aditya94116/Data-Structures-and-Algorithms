#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void nbyktimes(int arr[],int n,int k)
{
	sort(arr,arr+n);
	for(int i=0;i<n;i++)
	{
		int count=1;
		while(arr[i]==arr[i+1])
		{
			count++;
			i++;
		}
		if(count>n/k)
		{
			cout<<arr[i]<<" ";
		}
	}
}
int main()
{
	int arr[]={1,2,3,2,2,1,3,3,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	int k=4;
	nbyktimes(arr,n,k);
}
