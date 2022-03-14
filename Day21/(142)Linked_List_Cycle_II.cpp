class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        int curr_pos = 0;
        +
        ListNode* temp = head;
        map<ListNode*,int> mp;
        mp[temp] = curr_pos;
        while(temp!=NULL){
            if(temp->next == head){
                return head;
            }
            if(mp[temp->next]!=0 && mp[temp->next]<=curr_pos){
                return temp->next;
            }
            curr_pos++;
            mp[temp] = curr_pos;
            temp = temp->next;
        }
       return NULL;
    }
};
