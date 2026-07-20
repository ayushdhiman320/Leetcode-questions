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
    void reverse(ListNode* head, int times){
        ListNode* curr=head;
        ListNode* prev=nullptr;
        ListNode* temp=head;

        while(times--){
            temp=temp->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==nullptr || head->next==nullptr) return head;
        int size=k;
        ListNode* left=head;
        ListNode* right;
        ListNode* prevleft=nullptr;
        ListNode* res=nullptr;

        while(true){
            right=left;
            for(int i=0;i<size-1;i++){
                if(right==nullptr) break;
                right=right->next;
            }
            if(right){
                ListNode* nextleft=right->next;
                reverse(left,size);
                if(prevleft){
                    prevleft->next=right;
                }
                prevleft=left;
                if(res==nullptr){
                    res=right;
                }
                left=nextleft;
            }
            else{
                if(prevleft){
                    prevleft->next=left;
                    if(res==nullptr){  // no need as we are passing head->next == null then return head in the starting
                        res=left;
                    }
                    break;
                }
            }

        }
        return res;
    }
};