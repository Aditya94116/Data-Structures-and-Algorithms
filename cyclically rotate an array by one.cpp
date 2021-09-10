#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void rotate(int arr[],int n)
{
	int x=arr[n-1],i;
	for(int i=n-1;i>0;i--)
	arr[i]=arr[i-1];
	arr[0]=x;
	
}
int main()
{
	int arr[]={5,4,3,2,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	rotate(arr,n);
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
}
