// Last updated: 7/29/2026, 10:03:21 PM
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
13    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
14        int sum =0;
15        int carry =0;
16        ListNode* newhead = new ListNode(0);
17        ListNode* dummy = newhead;
18        while(l1 != nullptr && l2 != nullptr){
19            sum = l1->val + l2->val + carry;
20            l1 = l1->next;
21            l2 = l2->next;
22            int digit = sum%10;
23            ListNode* temp = new ListNode(digit);
24            carry = sum/10;
25            dummy->next = temp;
26            dummy = dummy->next;
27            sum=0;
28        }
29        while(l1 != nullptr){
30            sum = l1->val + carry;
31            l1 = l1->next;
32            int digit = sum%10;
33            ListNode* temp = new ListNode(digit);
34            dummy->next = temp;
35            dummy = dummy->next;
36            carry = sum/10;
37            sum = 0;
38        }
39        while(l2 != nullptr){
40            sum = l2->val + carry;
41            l2 = l2->next;
42            int digit = sum%10;
43            ListNode* temp = new ListNode(digit);
44            dummy->next = temp;
45            dummy = dummy->next;
46            carry = sum/10;
47            sum = 0;
48        }
49        if(carry>0) {
50            ListNode* temp = new ListNode(carry);
51            dummy->next = temp;
52            dummy = dummy->next;
53        }
54        return newhead->next;
55    }
56};