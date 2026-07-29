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