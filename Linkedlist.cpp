#include <bits/stdc++.h>
using namespace std;

/*LinkedList syntax structure*/
// struct Node
// {   
//     int data;
//     Node* next;
//     Node(int data1,Node* next1)
//     {
//         data=data1;
//         next=next1;
//     }
// };
// int main()
// {
//     Node* y=new Node(2,nullptr);
//     cout<<y<<endl;
//     cout<<y->data;
//     return 0;
// }

/* Accessing the array elements through LinkedList,Length */

class Node{

    public:
    int data;
    Node* next;

    public:
    Node(int data1,Node* next1)
    {
        data=data1;
        next=next1;
    } 

    public: 
    Node(int data2)
    {
        data=data2;
        next=nullptr;
    }
};
    Node* ConvertArr(vector<int> &arr)
    {
        Node* head=new Node(arr[0]);
        Node* mover=head;
        for(int i=1;i<arr.size();i++)
        {
            Node* temp=new Node(arr[i]);
            mover->next=temp;
            mover=temp;
        }
        return head;
    }
Node* Printele(Node* head)
{
    Node* ele=head;
    while(ele)
    {
        cout<<ele->data<<" ";
        ele=ele->next;
    }
} 
// int main()
// {
//     vector<int>arr={23,8,18,7};
//     Node* head=ConvertArr(arr);
//     Node* ele=head;
//     int count=0;
//     cout<<"Data present in the head node: "<<head->data<<endl;
//     while(ele)
//     {
//         cout<<ele->data<<" ";
//         ele=ele->next;
//         count++;
//     }
//     cout<<"\n";
//     cout<<count;
//     return 0;
// }

/*Deletion of node based on index*/
// Node* RemoveEle(Node* head,int indx)
// {
//    if(head==NULL) return head;
//    if(indx==1)
//    {
//      Node* temp=head;
//      head=head->next;
//      free(temp);
//      return head;
//    }

//    Node* temp=head;int count=0;Node* prev=NULL;
//    while(temp!=NULL)
//    {
//       count++;
//       if(count==indx)
//       {
//         prev->next=prev->next->next;
//         free(temp);
//         break;
//       }
//       prev=temp;
//       temp=temp->next;
//    }
//    return head;
// }

/*Insertion of node based on index*/
Node* insertele(Node*head,int val,int k)
{
    if(head==NULL)
    {
        if(k==1){
            return new Node(val);
        }
        else{
            return head;
        }
    }
    if(k==1)
    {
      return new Node(val,head);
    } 
    int count=0;Node* temp=head;
    while(temp!=NULL)
    {
        count++;
        if(count==(k-1))
        {
           Node* newnode=new Node(val,temp->next);
           temp->next=newnode;
           break;
        }
        temp=temp->next;
    }
    return head;
}
int main()
{
    vector<int>arr={23,8,18,7};
    Node* head=ConvertArr(arr);
    // head=RemoveEle(head,5);
    head=insertele(head,45,5);
    Printele(head);
    return 0;
}

/*Leetcode 206. Reverse Linked List*/
/*Brute Force Approach*/
/*  ListNode* reverseList(ListNode* head) {
        ListNode* temp=head;
        stack<int>st;
        while(temp!=NULL)
        {
            st.push(temp->val);
            temp=temp->next;
        }
        temp=head;
        while(temp!=NULL)
        {
            temp->val=st.top();
            st.pop();
            temp=temp->next;
        }
        return head;
    }*/

/*Better solution*/
/* ListNode* reverseList(ListNode* head) {
        ListNode* temp=head;
        ListNode* prev=NULL;
        while(temp!=NULL)
        {
           ListNode* front=temp->next;
            temp->next=prev;
            prev=temp;
            temp=front;
        }
        return prev;
    }*/

/*Leetcode 876 Middle of LL*/
/*BruteForce Approach*/
// ListNode* middleNode(ListNode* head) {
//         ListNode* temp=head;
//         int count=0;
//         while(temp!=NULL)
//         {
//           count++;
//           temp=temp->next;
//         }
//         temp=head;
//         int mid=(count)/2+1;
//         while(temp!=NULL)
//         {
//             mid=mid-1;
//             if(mid==0)
//             {
//                 break;
//             }
//             temp=temp->next;
//         }
//         return temp;
//     }

/*Optimal Approach*/
/*ListNode* middleNode(ListNode* head) {
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }*/

/*141. Linked List Cycle*/
//BruteFroce Approach
/* bool hasCycle(ListNode *head) {
       unordered_map<ListNode*,int>mpp;
       ListNode* temp=head;
       while(temp!=NULL)
       {
         if(mpp.find(temp)!=mpp.end())
         {
            return true;
         }
         mpp[temp]=1;
         temp=temp->next;
       } 
       return false;
    }*/

//Optimal Approach
/*bool hasCycle(ListNode *head) {
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(fast==slow) return true;
        }
        return false;
    }*/

/*142. Linked List Cycle II*/
//Brute Force Approach
/*ListNode *detectCycle(ListNode *head) {
      map<ListNode* , int>mpp;
      ListNode* temp=head;
      while(temp!=NULL && temp->next!=NULL)
      {
         if(mpp.find(temp)!=mpp.end())
         {
           return temp;
         }
         mpp[temp]=1;
         temp=temp->next;
      }   
      return NULL;
    }*/

/*Optimal Approach*/
/*    ListNode *detectCycle(ListNode *head) {
      map<ListNode* , int>mpp;
      ListNode* fast=head;
      ListNode* slow=head;
      while(fast!=NULL && fast->next!=NULL)
      {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
            slow=head;
            while(slow!=fast)
            {
                slow=slow->next;
                fast=fast->next;
            }
            return slow;
        }
      }   
      return NULL;
}*/

/*234. Palindrome Linked List Brute Force Approach*/
/*bool isPalindrome(ListNode* head) {
        stack<int>st;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            st.push(temp->val);
            temp=temp->next;
        }
        temp=head;
        while(temp!=NULL)
        {
            if(temp->val!=st.top())
            {
                return false;
            }
            temp=temp->next;
            st.pop();
        }
        return true;
}*/

/*Optimal Approach*/
/*bool isPalindrome(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        if(head==NULL || head->next==NULL) return true;
        while(fast->next!=NULL && fast->next->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* newhead=ReverseLL(slow->next);
        ListNode* first=head;
        ListNode* second=newhead;
        while(second!=NULL)
        {
            if(first->val!=second->val)
            {
                ReverseLL(newhead);
                return false;
            }
            first=first->next;
            second=second->next;
        }
        ReverseLL(newhead);
        return true;
}*/

/*Remove Nth node from End of List*/
//  ListNode* removeNthFromEnd(ListNode* head, int n) {
//         ListNode*temp=head;
//         ListNode*delenod;
//         int count=0;
//         while(temp!=NULL)
//         {
//             count++;
//             temp=temp->next;
//         }
//         if(count==n)
//         {
//            delenod=head->next;
//            delete head;
//            return delenod;
//         }
//         int newcount=count-n;
//         temp=head;
//         while(temp!=NULL && temp->next!=NULL)
//         {
//             newcount--;
//             if(newcount==0)
//             {
//                 break;
//             }
//             temp=temp->next;
//         }
//         delenod=temp->next;
//         temp->next = temp->next->next;
//         delete delenod;
//         return head;
//     }

