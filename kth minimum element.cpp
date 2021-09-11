#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void kthminimum(int arr[],int n,int k)
{
	sort(arr,arr+n);
	cout<<arr[k-1];
}
int main()
{
	int arr[]={5,2,3,8,6};
	int n=sizeof(arr)/sizeof(arr[0]);
	int k=2;
	cout<<"kth smallest element is ";
	kthminimum(arr,n,k);
}
