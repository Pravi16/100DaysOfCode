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
void reverse()
{
    node *prev,*curr,*nnext;
    prev=NULL;
    curr=head;
    while(curr)
    {
        nnext=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nnext;
    }
    head=prev;
}
int main()
{
    int n;
    cin>>n;//5
    while(n--)
    {
        int data;
        cin>>data;
        insert(data);
    }
    print();    // 78 45 12 25 65
    reverse();
    print();    //65 25 12 45 78
}