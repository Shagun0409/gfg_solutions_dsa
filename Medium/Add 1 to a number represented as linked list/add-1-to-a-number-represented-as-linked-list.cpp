//{ Driver Code Starts
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
        cout << node->data%10; 
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
    
    
  

Node *reverse(Node*head)
{
    Node* prev=NULL;
    Node* curr=head;
    Node* nxt=NULL;
    
    while(curr!=NULL)
    {
        nxt=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nxt;
    }
    return prev;
}
    Node* addOne(Node *head) 
    {
        
       
        head=reverse(head);
        Node* temp=head;
        int carry=1;
        while(temp!=NULL)
        {
            int sum=temp->data+carry;
            carry=sum/10;
            temp->data=sum%10;
            if(temp->next==NULL&& carry!=0)
            {
                temp->next=new Node(carry);
                carry=0;
            }
            temp=temp->next;
        }
        head=reverse (head);
        return head;
    }
};

//{ Driver Code Starts.

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