#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printintersection(int arr1[],int arr2[],int m,int n)
{
	int i=0,j=0;
	while(i<m&&j<n)
	{
		if(arr1[i]<arr2[j])
		{
			i++;
		}
		else if(arr1[i]>arr2[j])
		{
			j++;
		}
		else
		{
		
		if(arr1[i]==arr2[j])
		cout<<arr2[j++];
		i++;}
	}
}
int main()
{
	int arr1[]={1,2,3,4,5};
	int arr2[]={2,3,4,6};
	int m=sizeof(arr1)/sizeof(arr1[0]);
	int n=sizeof(arr2)/sizeof(arr2[0]);
	printintersection(arr1,arr2,m,n);
}
