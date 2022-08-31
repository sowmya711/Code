#include<bits/stdc++.h>
using namespace std;
class node{
	public:
	int data;
	node *next;
};

int main()
{
	node *head=NULL;
	node *second=NULL;
	node *third=NULL;
	head=new node();
	second=new node();
	third=new node();
	head->data=1;
	head->next=second;
	second->data=2;
	second->next=third;
	third->data=3;
	third->next=NULL;

	
    node *newnode=new node();
	newnode->data=6;
	newnode->next=head;
	head=newnode;
	

	
	node *endnode=new node();
    node *last=head;
    endnode->data=7;
    endnode->next=NULL;
    if(head==NULL)
    {
    	head=endnode;
	}
	   while (last->next != NULL)
    {
        last = last->next; 
    }
    last->next = endnode;
    
	int pos=2;
	node *midnode=new node();
	midnode->data=8;
	midnode->next=NULL;
	
	node *ptr=head;
	pos--;
	while(pos!=1)
	{
		ptr=ptr->next;
		pos--;
	}
    midnode->next=ptr->next;
    ptr->next=midnode;
		while(head!=NULL)
	{
		cout<<head->data<<endl;
		head=head->next;
	}
    
}
