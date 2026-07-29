/*328. Odd Even Linked List*/
// !Brute Force Approach
//  ListNode* oddEvenList(ListNode* head) {
//         vector<int> arr;
//         ListNode* temp = head;
//         int count=0;
//         while(temp!=NULL)
//         {
//             count++;
//             if(count%2==1)
//             {
//                 arr.push_back(temp->val);
//             }
//             temp = temp->next;
//         }
//         count = 0;
//         temp = head;
//         while(temp!=NULL)
//         {
//             count++;
//             if(count%2==0)
//             {
//                 arr.push_back(temp->val);
//             }
//             temp = temp->next;
//         }
//         temp = head;
//         int i = 0;
//         while(temp!=NULL)
//         {
//             temp->val = arr[i++];
//             temp = temp->next;
//         }
//         return head;
//     }

//? Optimal Solution
// ListNode* oddEvenList(ListNode* head) {
//         if(head==NULL){return NULL;}
//         ListNode* odd = head;
//         ListNode* even = head->next;
//         ListNode* evenHead = even;
//         while(even!=NULL && even->next!=NULL){
//             odd->next=odd->next->next;
//             even->next=even->next->next;
//             odd=odd->next;
//             even=even->next;
//         }
//         odd->next=evenHead;
//         return head;
//     }

/*86. Partition List*/
//! Brute Force Solution
// ListNode* partition(ListNode* head, int x) {
//         ListNode* temp = head;
//         vector<int>arr;
//         while(temp!=NULL)
//         {
//             if(temp->val<x){
//                 arr.push_back(temp->val);
//             }
//             temp = temp->next;
//         }
//         temp = head;
//         while(temp!=NULL)
//         {
//             if(temp->val>=x){
//                 arr.push_back(temp->val);
//             }
//             temp = temp->next;
//         }
//         temp = head;
//         int i=0;
//         while(temp!=NULL)
//         {
//             temp->val = arr[i++];
//             temp = temp->next;
//         }
//         return head;
//     }

//? Optimal Solution
//ListNode* partition(ListNode* head, int x) {
    //     ListNode* temp = head;
    //     ListNode* smallH = new ListNode(-1);
    //     ListNode* largeH = new ListNode(-1);
    //     ListNode* smallT = smallH;
    //     ListNode* largeT = largeH;
    //     while(temp!=NULL)
    //     {
    //         ListNode* nextnode = temp->next;
    //         temp->next = NULL;
    //         if(temp->val<x){
    //             smallT->next = temp;
    //             smallT = temp;
    //         }
    //         else{
    //             largeT->next = temp;
    //             largeT = temp;
    //         }
    //         temp = nextnode;
    //     }
    //     smallT->next = largeH->next;
    //     return smallH->next;
    // }

/*143. Reorder List*/
//! Brute Force Apporach
//  void reorderList(ListNode* head) {
//         vector<int>arr;
//         ListNode* temp = head;
//         while(temp!=NULL){
//             arr.push_back(temp->val);
//             temp = temp->next;
//         }
//         int i=0,j=arr.size()-1;
//         temp = head;
//         while(temp!=NULL && i<=j)
//         {
//             temp->val = arr[i];
//             i++;
//             temp = temp->next;
//             if(temp!=NULL)
//             {
//                 temp->val = arr[j];
//                 j--;
//                 temp = temp->next;
//             }
//             else
//             {
//                 break;
//             }
//         }
//         return;
//     }

//? Optimal Approach
// ListNode* ReverseLL(ListNode* head)
//     {
//        if(head==NULL || head->next==NULL)
//        {
//           return head;
//        }
//        ListNode* newhead = ReverseLL(head->next);
//        ListNode* first = head->next;
//        first->next = head;
//        head->next = NULL;
//        return newhead;
//     }
//     void reorderList(ListNode* head) {
//        ListNode* slow = head;
//        ListNode* fast = head;
//        while(fast->next!=NULL && fast->next->next!=NULL)
//        {
//           slow = slow->next;
//           fast = fast->next->next;
//        }
//        ListNode* first = head;
//        ListNode* second = ReverseLL(slow->next);
//        slow->next = NULL;
       
//        while(second!=NULL)
//        {
//           ListNode* firstNext = first->next;
//           ListNode* secondNext = second->next;
//           first->next = second;
//           second->next = firstNext;
//           first = firstNext;
//           second = secondNext;
//        }
//        return;
//     }

/*LC-148 Sort List*/
//! Brute Force Approach
//    ListNode* sortList(ListNode* head) {
//         if(head==NULL)
//         {
//             return NULL;
//         }
//         vector<int>arr;
//         ListNode* temp = head;
//         while(temp!=NULL)
//         {
//             arr.push_back(temp->val);
//             temp = temp->next;
//         }
//         temp = head;
//         sort(arr.begin(),arr.end());
//         int i=0;
//         while(temp!=NULL)
//         {
//             temp->val = arr[i++];
//             temp = temp->next;
//         }
//         return head;
//     }

//?Optimal Approach
// ListNode* merge(ListNode* left , ListNode* right)
//     {
//         ListNode* dNode = new ListNode(-1);
//         ListNode* dNodeTail = dNode;
//         while(left!=NULL && right!=NULL)
//         {
//             if(left->val <= right->val)
//             {
//                 dNodeTail->next = left;
//                 left = left->next;
//             }
//             else{
//                 dNodeTail->next = right;
//                 right = right->next;
//             }
//             dNodeTail = dNodeTail->next;
//         }
//         if(left!=NULL){
//             dNodeTail->next = left;
//         }else{
//             dNodeTail->next = right;
//         }
//         return dNode->next;
//     }
//     ListNode* sortList(ListNode* head) {

//         if(head == NULL || head->next==NULL)
//         {
//             return head; //base cond
//         }
//         //Find Middle
//         ListNode* fast = head;
//         ListNode* slow = head;
//         while(fast->next!=NULL && fast->next->next!=NULL)
//         {
//             slow = slow->next;
//             fast = fast->next->next;
//         }
//         ListNode* second = slow->next;
//         slow->next = NULL;

//         ListNode* left = sortList(head);
//         ListNode* right = sortList(second);

//         return merge(left,right);
//     }

/*LC-160. Intersection of Two Linked Lists*/
//! Brute Force Approach
// unordered_map<ListNode*,int>mpp;
//         ListNode* temp = headA;
//         while(temp!=NULL)
//         {
//             mpp[temp]=1;
//             temp = temp->next;
//         }
//         temp = headB;
//         while(temp!=NULL)
//         {
//             if(mpp.find(temp)!=mpp.end())
//             {
//                 return temp;
//             }
//             temp = temp->next;
//         }
//         return NULL;

//todo: Better Approach
 /*ListNode* intersectionPoint(ListNode* t1 , ListNode* t2, int d)
    {
        while(d!=0)
        {
            d--;
            t2 = t2->next;
        }
        while(t1!=t2)
        {
            t1 = t1->next;
            t2 = t2->next;
        }
        return t1;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int n1=0;
        int n2=0;
        ListNode* temp = headA;
        while(temp!=NULL)
        {
            n1++;
            temp = temp->next;
        }
        temp = headB;
        while(temp!=NULL)
        {
            n2++;
            temp = temp->next;
        }
        if(n1<=n2)
        {
           return intersectionPoint(headA,headB,n2-n1);
        }
        else{
            return intersectionPoint(headB,headA,n1-n2);
        }
    }*/

//? Optimal Approach
// ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//        ListNode* temp1 = headA;
//        ListNode* temp2 = headB;
//        if(temp1==NULL || temp2==NULL)
//        {
//          return NULL;
//        }
//        while(temp1 != temp2)
//        {
//           temp1 = temp1->next;
//           temp2 = temp2->next;

//           if(temp1==temp2){return temp1;}

//           if(temp1==NULL){temp1=headB;}
//           if(temp2==NULL){temp2=headA;}
//        }
//        return temp1;
//     }

/*GFG Sort a linked list of 0s, 1s and 2s*/
//! Brute Force approach
/*    Node* segregate(Node* head) {
        // code here
        Node* temp = head;
        int count0=0,count1=0,count2=0;
        while(temp!=NULL)
        {
            if(temp->data==0)
            {
                count0++;
            }
            else if(temp->data==1)
            {
                count1++;
            }
            else
            {
                count2++;
            }
            temp = temp->next;
        }
        temp = head;
        while(temp!=NULL)
        {
            while(count0!=0)
            {
                count0--;
                temp->data = 0;
                temp = temp->next;
            }
            while(count1!=0)
            {
                count1--;
                temp->data = 1;
                temp = temp->next;
            }
            while(count2!=0)
            {
                count2--;
                temp->data = 2;
                temp = temp->next;
            }
        }
        return head;
}*/