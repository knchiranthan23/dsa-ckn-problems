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

