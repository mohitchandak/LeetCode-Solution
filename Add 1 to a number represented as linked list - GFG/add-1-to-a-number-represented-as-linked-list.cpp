// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data; 
        node = node->next; 
    }  
    cout<<"\n";
} 


 // } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    Node* rev(Node* head)
    {
        Node* t=new Node(head->data);
        while(head->next)
        {
            head=head->next;
            Node* ptr=new Node(head->data);
            ptr->next=t;
            t=ptr;
        }
        return t;
    }
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        head=rev(head);
        Node* temp=head;
        int carry=0;
        int a=head->data + 1;
        carry=a>9?1:0;
        head->data=a%10;
        while(head && head->next)
        {
            head=head->next;
            a=head->data + carry;
            carry=a>9?1:0;
            head->data=a%10;
        }
        if(carry==1)
        {
            Node* ptr=new Node(1);
            head->next=ptr;
        }
        return rev(temp);
    }
};


// { Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 
  // } Driver Code Ends