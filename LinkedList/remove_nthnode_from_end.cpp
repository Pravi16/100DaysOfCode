#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *head=NULL;
void insert(int data)
{
    node *temp=new node;
    temp->data=data;
    if(!head)
    {
        head=temp;
        return;
    }
    node *curr=head;
    while(curr->next)
    {
        curr=curr->next;
    }
    curr->next=temp;
    curr=temp;
}
void print()
{
    node *temp=head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void compute(int n)
{
    node *fast=head,*slow=head;
    while(n-- and fast)
    {
        fast=fast->next;
        slow=slow->next;
    }
    if(!fast) head=head->next;
    slow=head;
    while(fast->next)
    {
        fast=fast->next;
        slow=slow->next;
    }
    slow->next=slow->next->next;
}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int data;
        cin>>data;
        insert(data);
    }
    print();
    int node;
    cin>>node;  
    compute(node);
    print();   
}