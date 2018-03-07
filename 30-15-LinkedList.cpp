#include <iostream>
#include <cstddef>
using namespace std;
class Node
{
	public:
		int data;
		Node *next;
		Node(int d){
			data=d;
			next=NULL;
		}
};
class Solution{
	public:
	Node* insert(Node *head,int data)
	{
		// Complete this method
        Node* current = head;
        Node* newNode = new Node(data);

        // if empty list
        if (head == NULL)
        {
            head = newNode;
            // cout << "first Node = " << head->data << endl;
        }
        
        else
        {
            // find the last node
            while (current->next != NULL)
            {
                // there is another node
                    current = current->next;
                    // cout << "middle node data = " << current->data << endl;
            }
            
            // put new node at the end
            if (current->next == NULL)
            {
                    current->next = newNode;
                    // cout << "new node appended - data  = " << current->data << endl;
            }
        }
        return head;
	}
	void display(Node *head)
	{
		Node *start=head;
		while(start)
		{
			cout << start->data << " ";
			start = start->next;
		}
	}
};
int main()
{	
		Node* head=NULL;
		Solution mylist;
		int T, data;
		cin >> T;
		while(T-->0) {
			cin >> data;
			head = mylist.insert(head, data);
		}
		mylist.display(head);
		
	}