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
void compute(node *temp)
{
    if(!temp) return;
    temp->data=temp->next->data;
    temp->next=temp->next->next;
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
    node *nodeToBeDeleted=head->next->next->next;
    compute(nodeToBeDeleted);
    print();
}