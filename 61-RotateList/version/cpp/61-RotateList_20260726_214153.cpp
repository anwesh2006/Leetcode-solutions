// Last updated: 7/26/2026, 9:41:53 PM
/*
 * have a slow and a fast 
 * calculate length of ll and k%length should be used next
 * check for all the edge cases like head to be null 
 * make fast go k steps a head
 * then make fast and slow move forward untill fast reaches end 
 * update the fast next to be head 
 * slow next to be stored and returned at the end
 * slow next is pointed to null
 * stored slow next is returned as head
*/

1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* rotateRight(ListNode* head, int k) {
14        ListNode* slow = head;
15        ListNode* fast = head;
16        ListNode* temp1 = head;
17        int length =0;
18        while(temp1!=nullptr){
19            length++;
20            temp1 = temp1->next;
21        }
22        if(k==0) return head;
23        if(head==nullptr || head->next ==nullptr) return head;
24        k = k%length;
25        for(int i=0;i<k;i++){
26            fast = fast->next;
27        }
28        while(fast->next!=nullptr){
29            slow = slow->next;
30            fast = fast->next;
31        }
32        fast->next = head;
33        ListNode* temp = slow->next;
34        slow->next = nullptr;
35        return temp;
36    }
37};