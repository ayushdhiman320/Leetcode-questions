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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* before=nullptr;
        ListNode* prev=nullptr;
        ListNode* curr=head;
        
        if(head==nullptr) return nullptr;
        if(left==right) return head;

        int cnt=1;
        while(cnt<left){
            before=curr;
            curr=curr->next;
            cnt++;
        }
        ListNode* before1=curr;
        ListNode* temp=curr;
        int loop_cnt=right-left+1;
        for(int i=0;i<loop_cnt;i++){
            temp=temp->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        before1->next=curr;
        
        if(before){
            before->next=prev;
            return head;
        }
        return prev;

    }
};