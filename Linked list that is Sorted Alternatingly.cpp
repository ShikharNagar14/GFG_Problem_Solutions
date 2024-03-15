
/*
struct Node
{
	int data;
	struct Node *next;
	
	Node(int x){
	    data =x;
	    next = NULL;
	}
};
*/

class Solution
{
    public:
    // your task is to complete this function
    void sort(Node **head)
    {
         // Code here
           multiset<int>val;
         Node *temp = *head;
         while(temp){
             val.insert(temp->data);
             temp = temp -> next;
         }
         Node *nn = new Node(-1);
         Node *tempo = nn;
         for(auto iter : val){
             tempo -> next = new Node(iter);
             tempo = tempo -> next;
         }
         *head = (nn -> next);
    }
};
