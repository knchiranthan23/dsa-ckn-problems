
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

//? Optimal Approach
/*Node* segregate(Node* head) {
        // code here
        Node* zeroHead = new Node(-1);
        Node* oneHead = new Node(-1);
        Node* twoHead = new Node(-1);
        Node* zeroTail = zeroHead;
        Node* oneTail = oneHead;
        Node* twoTail = twoHead;
        
        Node* temp = head;
        while(temp!=NULL)
        {
            if(temp->data==0)
            {
                zeroTail->next=temp;
                zeroTail=temp;
            }
            else if(temp->data==1)
            {
                oneTail->next=temp;
                oneTail=temp;
            }
            else{
                twoTail->next=temp;
                twoTail=temp;
            }
            temp = temp->next;
        }
        zeroTail->next = oneHead->next?oneHead->next:twoHead->next;
        oneTail->next = twoHead->next;
        twoTail->next = NULL;
        
        return zeroHead->next;
    }*/

/*138. Copy List with Random Pointer*/
//! Brute Force approach 
/*int copyRandom(Node* head,Node* target)
    {
        int indx;
       while(head!=NULL)
       {
          indx = 0;
          if(head!=target)
          {
             head = head->next;
             indx++;
          }
       }
       return indx;
    }
    Node* copyRandomList(Node* head) {
        Node* dummy = new Node(-1);
        Node* tail = dummy;
        Node* temp = head;
        while(temp!=NULL)
        {
           Node* copyNode = new Node(temp->val);
           tail->next = copyNode;
           tail = copyNode;
           temp = temp->next;
        }
        tail->next = NULL;
        temp = head;
        Node* tempCopy = dummy->next;
        while(temp!=NULL)
        {
            if(temp->random==NULL)
            {
                tempCopy->random = NULL;
            }
            else
            {
                int indx = copyRandom(head,temp->next);
                Node* tempTarget = dummy->next;
                while(indx--)
                {
                    tempTarget = tempTarget->next;
                }
                tempCopy->next = tempTarget;
            }
            tempCopy = tempCopy->next;
            temp = temp->next;
        }
        return dummy->next;
    }*/

//todo : Better Approach
/* Node* copyRandomList(Node* head) {
        Node* dummy = new Node(-1);
        Node* tail = dummy;
        Node* temp = head;
        while(temp!=NULL)
        {
           Node* copyNode = new Node(temp->val);
           tail->next = copyNode;
           tail = copyNode;
           temp = temp->next;
        }
        tail->next = NULL;
        temp = head;
        Node* tempCopy = dummy->next;
        unordered_map<Node*,Node*>mpp;
        while(temp!=NULL)
        {
            mpp[temp]=tempCopy;
            temp = temp->next;
            tempCopy = tempCopy->next;
        }
        temp = head;
        tempCopy = dummy->next;
        while(temp!=NULL)
        {
            if(temp->random==NULL)
            {
                tempCopy->random=NULL;
            }
            else
            {
                tempCopy->random = mpp[temp->random];
            }
            temp = temp->next;
            tempCopy = tempCopy->next;
        }
        return dummy->next;
    }*/

//? Optimal Solution
/*Node* copyRandomList(Node* head) {
        Node* temp = head;
        while(temp!=NULL)
        {
            Node* copy = new Node(temp->val);
            copy->next = temp->next;
            temp->next = copy;
            temp = copy->next;
        }
        temp = head;
        while(temp!=NULL)
        {
            Node* copy = temp->next;
            if(temp->random!=NULL)
            {
                copy->random = temp->random->next;
            }
            else
            {
                copy->random = NULL;
            }
            temp = copy->next;
        }
        Node* dummy = new Node(-1);
        Node* tail = dummy;
        temp = head;
        while(temp!=NULL)
        {
            Node* copy = temp->next;
            temp->next = copy->next;

            tail->next = copy;
            tail = copy;

            temp = temp->next;
        }
        return dummy->next;
    }*/

//!Hard Problems Singly Linked List(SLL)

/*25. Reverse Nodes in k-Group*/
//todo: Solution
/*ListNode* reverseLL(ListNode* head)
    {
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        ListNode* newHead = reverseLL(head->next);
        ListNode* front = head->next;
        front->next = head;
        head->next=NULL;
        return newHead;
    }
    ListNode* findKNode(ListNode* temp , int k)
    {
        k=k-1;
        while(temp!=NULL && k>0)
        {
            k--;
            temp = temp->next;
        }
        return temp;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
       ListNode* temp = head;
       ListNode* prevNode = NULL;
       while(temp!=NULL)
       {
          ListNode* kNode = findKNode(temp,k);
          if(kNode==NULL)
          {
             if(prevNode){prevNode->next = temp;}
             break;
          }
          ListNode* nextNode = kNode->next;
          kNode->next = NULL;
          reverseLL(temp);
          if(temp==head)
          {
            head = kNode;
          }
          else
          {
            prevNode->next = kNode;
          }
          prevNode = temp;
          temp = nextNode;
       }
       return head;
}*/