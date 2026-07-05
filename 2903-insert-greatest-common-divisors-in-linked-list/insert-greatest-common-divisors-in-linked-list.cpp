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
public:
    int findgcd(ListNode*temp){
        int a=temp->val;
        int b=temp->next->val;
        while(b!=0){
            int t=b;
            b=a%b;
            a=t;
        }return a;
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head==NULL || head->next==NULL)return head;
        ListNode*temp=head;
        while(temp->next){
            ListNode*gcd= new ListNode(findgcd(temp));
            gcd->next=temp->next;
            temp->next=gcd;
            temp=temp->next->next;
        }return head;
    }
};