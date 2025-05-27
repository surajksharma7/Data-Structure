

class Solution{
    public:
    ListNode* solve(ListNode*&prev, ListNode*&curr){
        if(curr == NULL){
            return prev;
        }
        ListNode*forward = curr->next;
        curr->next  = forward;
        prev = curr;
        curr = forward;
        return(prev,curr);
    }
    ListNode* reverseList(ListNode* head){
        ListNode * prev = NULL;
        ListNode * curr = head;
        ListNode * newhead = solve(prev, curr);
        return newhead;
    }
};

class Soltuion{
    public:
        ListNode* middleNode(ListNode* head){
            ListNode*temp = head;
            ListNode*fast = temp;
            ListNode*slow = temp;

            while(fast != NULL && fast->next != NULL){
                fast = fast->next->next;
                slow = slow->next;

            }
            return slow;
        }
};