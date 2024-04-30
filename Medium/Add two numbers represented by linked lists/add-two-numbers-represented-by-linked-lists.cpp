//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    struct Node *reverse(struct Node *node){
        struct Node *prev=NULL;
        struct Node *curr=node;
        while(curr){
            struct Node *next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    struct Node* addTwoLists(struct Node* num1, struct Node* num2)
    {
        // code here
        while(num1 && num1->data==0 ){
            num1=num1->next;
        }
         while(num2 && num2->data==0 ){
            num2=num2->next;
        }
        
        if(!num1 && !num2) {
            struct Node *n=new Node(0);
            return n;
        }
       struct Node *n1= reverse(num1);
       struct Node *n2= reverse(num2);
       int curr=0;
       struct Node *dummy=new struct Node(-1);
       struct Node *ans=dummy;
        while(n1 || n2 || curr){
            int sum=curr;
            if(n1){
                sum+=n1->data;
                n1=n1->next;
            }
            if(n2){
                sum+=n2->data;
                n2=n2->next;
            }
           dummy->next=new struct Node(sum%10);
           dummy=dummy->next;
           curr=sum/10;
        }
       struct Node *final= reverse(ans->next);
        return final;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* num1 = buildList(n);
        
        cin>>m;
        Node* num2 = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(num1,num2);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends