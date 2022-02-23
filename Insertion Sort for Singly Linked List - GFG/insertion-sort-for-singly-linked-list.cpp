// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};

/* Function to print linked list */
void printList(struct Node *head)
{
	struct Node *temp = head;
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
}




 // } Driver Code Ends
//User function Template for C++

/*Link list node
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};*/

class Solution
{
    public:
    
    Node* insertNode(Node* head, Node* node) {
        Node* dummy = new Node(0);
        dummy->next = head;
        Node* p = dummy->next;
        Node* prev = dummy;
        while(p) {
            if(p->data >= node->data) {
                Node* newNode = new Node(node->data);
                prev->next = newNode;
                newNode->next = p;
                
                return dummy->next;
            }
            
            prev = p;
            p = p->next;
        }
        
        prev->next = new Node(node->data);
        return dummy->next;
    }
    
    Node* insertionSort(struct Node* head_ref)
    {
        Node* newHead = new Node(head_ref->data);
        
        Node* p = head_ref->next;
        while(p) {
            newHead = insertNode(newHead, p);
            p = p->next;
        }
        
        return newHead;
    }
    
};


// { Driver Code Starts.
int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		int n;
		cin >> n;

		Node *head = NULL;
		Node *temp = head;

		for (int i = 0; i < n; i++) {
			int data;
			cin >> data;
			if (head == NULL)
				head = temp = new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}

        Solution ob;

		head = ob.insertionSort(head);
		printList(head);

		cout << "\n";



	}
	return 0;
}  // } Driver Code Ends