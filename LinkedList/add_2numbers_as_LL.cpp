#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *head=NULL;
void insert(node **ref,int data)
{
    node *temp=new node;
    temp->data=data;
    if(!(*ref))
    {
        *ref=temp;
        return;
    }
    node *curr=*ref;
    while(curr->next)
    {
        curr=curr->next;
    }
    curr->next=temp;
    curr=temp;
}
void print(node *ans)
{
    node *temp=ans;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
node *temp=NULL;

void compute(node *a,node *b)
{

    int carry=0;
    while(a or b or carry)
    {
        int sum=0;
        if(a)
        {
            sum=sum+a->data;
            a=a->next;
        }
        if(b)
        {
            sum=sum+b->data;
            b=b->next;
        }
        sum+=carry;
        insert(&temp,sum%10);
        carry=sum/10;
    }
}
int main()
{
    int n;
    cin>>n;     //assume that both list are of same size
    node *a=NULL,*b=NULL;
    while(n--)
    {
        int data1,data2;
        cin>>data1>>data2;
        insert(&a,data1);
        insert(&b,data2);

    }
    print(a);
    print(b);
    compute(a,b);
    print(temp);

}