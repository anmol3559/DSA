/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
    int getlength(ListNode* head){
        ListNode* temp = head;
        int len = 0;
        while(temp != NULL){
            temp = temp -> next;
            len ++;
        }
        return len;
    }
public:
    ListNode* middleNode(ListNode* head) {
        int len = getlength(head);
        int ans = len/2;

        ListNode* temp = head;
        int cnt = 0;
        while(cnt < ans){
            temp = temp -> next;
            cnt ++;
        }
        return temp;
    }
};