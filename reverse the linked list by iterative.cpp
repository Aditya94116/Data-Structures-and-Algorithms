#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node*next;
};

int main()
{
	struct node*head;
struct node*first=new struct node;
cout<<"enter first element"<<" ";
cin>>first->data;
first->next=NULL;
head=first;
for(int i=0;i<4;i++)
{
	struct node*newnode=new struct node;
	cout<<"enter next element"<<" ";
	cin>>newnode->data;
	newnode->next=NULL;
	head->next=newnode;
	head=newnode;
}
head=first;
while(head!=NULL)
{
	cout<<head->data<<" ";
	head=head->next;
}

head=first;
struct node*reverse_linked_list,*prevnode=0,*currentnode,*nextnode;
cout<<"\nreverse the linked list"<<" ";
currentnode=nextnode=head;
while(nextnode!=NULL)
{
	nextnode=nextnode->next;
	currentnode->next=prevnode;
	prevnode=currentnode;
	currentnode=nextnode;
}
head=prevnode;
while(head!=NULL)
{
	cout<<head->data<<" ";
	head=head->next;
}

}














