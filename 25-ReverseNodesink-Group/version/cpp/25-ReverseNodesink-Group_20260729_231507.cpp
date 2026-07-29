// Last updated: 7/29/2026, 11:15:07 PM
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
13    bool isable(ListNode* node,int n){
14        for(int i=0;i<n;i++){
15            if(node==nullptr) return false;
16            node = node->next;
17        }
18        return true;
19    }
20    ListNode* reverseKGroup(ListNode* head, int k) {
21        if(!isable(head,k)) return head;
22        ListNode* prev = nullptr;
23        ListNode* curr = head;
24        for(int i=0;i<k;i++){
25            ListNode* next = curr->next;
26            curr->next = prev;
27            prev = curr;
28            curr = next;
29        }
30        head->next = reverseKGroup(curr,k);
31        return prev;
32    }
33};