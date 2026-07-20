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
    ListNode* rotateRight(ListNode* head, int k) {

        if(head==nullptr || head->next==nullptr || k==0) return head;

        int size=1;
        ListNode* tail=head;
        while(tail->next!=nullptr){
            tail=tail->next;
            size++;
        }

        tail->next=head;

        int new_tail_size=size-(k%size);
        for(int i=0;i<new_tail_size;i++){
            tail=tail->next;
        }
        ListNode* newhead=tail->next;
        tail->next=nullptr;

        return newhead;
        
    }
};