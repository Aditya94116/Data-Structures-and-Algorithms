#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void kthsmallest(int arr[],int n,int k)
{
	priority_queue<int>maxheap;
	for(int i=0;i<n;i++)
	{
		maxheap.push(arr[i]);
		if(maxheap.size()>k)
		{
			maxheap.pop();
		}
	 	
	}
	cout<<maxheap.top();
}

int main()
{
	int arr[]={7,4,10,3,9,14};
	int n=sizeof(arr)/sizeof(arr[0]);
	int k=3;
	kthsmallest(arr,n,k);
}
