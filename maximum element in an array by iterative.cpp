#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[]={2,4,5,6,3}, largest=INT_MIN;
	int n=sizeof(arr)/sizeof(arr[0]);
	int maximum=INT_MIN;
	for(int i=0;i<n-1;i++)
	{
		if(arr[i]>arr[i+1])
		{
			maximum=arr[i];
		}
		else
		{
			maximum=arr[i+1];
		}
		largest=max(largest,maximum);
	}
	cout<<largest;
}
