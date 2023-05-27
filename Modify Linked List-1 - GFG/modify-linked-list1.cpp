//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
struct Node* modifyTheList(struct Node *head);
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

void print(Node *head)
{
    Node *temp=head;
	while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
}


// } Driver Code Ends
/*Complete the function below
Node is as follows:
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
class Solution{
    public:
    
    Node *reverse(Node *head){
        Node *curr=head , *next=NULL, *prev=NULL;
        
        while(curr!=NULL){
            next=curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    
    struct Node* modifyTheList(struct Node *head)
    {
        //add code here.
        Node *slow=head, *fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        
        Node *temp=slow->next;
        slow->next=NULL;
        
        Node *nhead=reverse(temp);
        
        Node *curr1=head,  *curr2=nhead;
        while(curr1!=NULL && curr2!=NULL){
            curr2->data = curr2->data - curr1->data;
            curr2=curr2->next;
            curr1=curr1->next;
        }
        
        nhead = reverse(nhead);
        slow->next = nhead;
        
        return reverse(head);
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		struct Node *head = NULL,*temp=NULL;
		while(n--){
		    int a;
            cin>>a;
			Node *newNode = new Node(a);
			if(head==NULL)
                head=newNode;
            else
                temp->next=newNode;
            temp=newNode;
		}
		Solution obj;
		head = obj.modifyTheList(head);
		print(head);
		
	}
    return 0;
}
// } Driver Code Ends