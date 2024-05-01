//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	char data;
	struct Node *next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};

void printlist(Node *head)
{
	if (head==NULL)return;
	while (head != NULL)
	{
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}

void append(struct Node** headRef, char data)
{
	struct Node* new_node = new Node(data);
	struct Node *last = *headRef;

	if (*headRef == NULL)
	{
	    *headRef = new_node;
	    return;
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	return;
}


// } Driver Code Ends
/*
Structure of the node of the linked list is as
struct Node
{
	char data;
	struct Node *next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};
*/

#include <stack>;

class Solution
{
    private:
    stack<char> vowel;
    stack<char> consonant;
    stack<char> finalStack;
    public:
    // task is to complete this function
    // function should return head to the list after making 
    // necessary arrangements
    struct Node* arrangeCV(Node *head)
    {
        struct Node* temp = head;
        
        while(temp != NULL){
            if(temp->data == 'a' || temp->data == 'e' || temp->data == 'i' || temp->data == 'o' || temp->data == 'u'){
                vowel.push(temp->data);
            } else{
                consonant.push(temp->data);
            }
            
            temp = temp->next;
        }
        
        
        while(!consonant.empty()){
            finalStack.push(consonant.top());
            consonant.pop();
        }
        
        while(!vowel.empty()){
            finalStack.push(vowel.top());
            vowel.pop();
        }
        
        temp = head;
        
        while(!finalStack.empty()){
            temp->data = finalStack.top();
            finalStack.pop();
            temp = temp->next;
        }
        
        
        return head;
       //Code here
    }
};



//{ Driver Code Starts.

// task is to complete this function
int main()
{
    int T;
    cin>>T;
    while(T--){
        int n;
        char tmp;
        struct Node *head = NULL;
        cin>>n;
        while(n--){
            cin>>tmp;
            append(&head, tmp);
        }
        Solution obj;
        head = obj.arrangeCV(head);
        printlist(head);
    }
	return 0;
}


// } Driver Code Ends