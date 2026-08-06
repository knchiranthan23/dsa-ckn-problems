/*Convert array into 2DLinkedList*/
// #include<bits/stdc++.h>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;
//     Node* prev;
    
//     public:
//     Node(int data1,Node* next1,Node* prev1)
//     {
//         data = data1;
//         next = next1;
//         prev = prev1;
//     }
//     Node(int data1)
//     {
//         data = data1;
//         next = nullptr;
//         prev = nullptr;
//     }
// };
// Node* convert2D(vector<int> &arr)
// {
//     Node* head = new Node(arr[0]);
//     Node* tempprev = head;
//     for(int i=1;i<arr.size();i++)
//     {
//         Node* temp = new Node(arr[i],nullptr,tempprev);
//         tempprev->next = temp;
//         tempprev = temp;
//     }
//     return head;
// }
// void print(Node* head)
// {
//     while(head!=NULL)
//     {
//         cout<<head->data<<" ";
//         head = head->next;
//     }
// }
// int main()
// {
//     vector<int>arr={1,3,5,100};
//     Node* head = convert2D(arr);
//     print(head);
// }

/*GFG Delete all occurrences in a doubly linked lis*/
//? Optimal Approach
/*Node* deleteAllOccurOfX(Node* head, int x) {

        // code here
        Node* temp = head;
        while(temp!=NULL)
        {
            if(temp->data==x)
            {
               if(temp==head)
               {
                   head = head->next;
               }
               Node* prevTemp = temp->prev;
               Node* nextTemp = temp->next;
               if(prevTemp){prevTemp->next = nextTemp;}
               if(nextTemp){nextTemp->prev = prevTemp;}
            }
            else
            {
               temp = temp->next; 
            }
        }
        return head;
    }*/

/*GFG-Pair Sum in Doubly Linked List*/
//!Brute Force Approach
/*vector<vector<int>> givenSumPairs(Node* head, int target) {
        // code here
        vector<vector<int>>ans;
        vector<int>ansPair;
        Node* temp = head;
        while(temp!=NULL)
        {
            Node* tempnext = temp->next;
            while(tempnext!=NULL)
            {
                if((temp->data+tempnext->data)==target)
                {
                    ansPair = {temp->data,tempnext->data};
                    ans.push_back(ansPair);
                    break;
                }
                tempnext = tempnext->next;
            }
            temp = temp->next;
        }
        return ans;
}*/

//? Optimal Approach
/*vector<vector<int>> givenSumPairs(Node* head, int target) {
        // code here
        vector<vector<int>>ans;
        vector<int>ansPair;
        Node* front = head;
        while(head->next!=NULL)
        {
            head = head->next;
        }
        Node* last = head;
        while(front!=last && front->prev!=last)
        {
            if((front->data+last->data)==target)
            {
                ansPair = {front->data,last->data};
                ans.push_back(ansPair);
                front = front->next;
                last = last->prev;
            }
            else if((front->data+last->data)<target)
            {
                front = front->next;
            }
            else
            {
                last = last->prev;
            }
        }
        return ans;
}*/

/*Remove duplicates from a sorted DLL*/
//!Brute Force approach
/*Node* removeDuplicates(Node* headRef) {
        // code here
        Node* curr = headRef;
        unordered_set<int>st;
        while(curr!=NULL)
        {
            Node* dup = curr;
            if(st.find(curr->data)!=st.end())
            {
                Node* nextcurr = curr->next;
                Node* prevcurr = curr->prev;
                if(prevcurr) prevcurr->next = nextcurr;
                if(nextcurr) nextcurr->prev = prevcurr;
                delete dup;
                curr = nextcurr;
            }
            else
            {
                st.insert(curr->data);
                curr = curr->next;
            }
        }
        return headRef;
}*/