/*Day 4 Adding two numbers represented using linked list in reversed order by Leetcode  */

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
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* res_l=NULL;
        ListNode *curr,*prev=NULL;
        
        int carry = 0,sum;
        while(l1!=NULL || l2!=NULL){
            sum=carry+(l1?l1->val:0)+(l2?l2->val:0);
            carry=(sum>=10?1:0);
            
            sum=sum%10;
            
            curr=new ListNode(sum);
            if(res_l==NULL){
                res_l  = curr;
            }
            else{
                prev->next=curr;
            }
            
            prev= curr;
            if(l1)
                l1 = l1 ->next;
            if(l2)
                l2=l2->next;
        }
        if(carry>0)
            curr->next = new ListNode(carry);
        return res_l;
    }
};
