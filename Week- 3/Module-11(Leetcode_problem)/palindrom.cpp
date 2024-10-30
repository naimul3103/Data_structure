// https://leetcode.com/problems/palindrome-linked-list/

class Solution {
public:

void insert_tail(ListNode *&head, ListNode *&tail, int val){
    ListNode *newNode = new ListNode(val);
    if(head == NULL){
        head = newNode; 
        tail = newNode; 
        return; 
    }
    tail -> next = newNode; 
    tail = tail->next; 

}
void reversed(ListNode *&head, ListNode *cur){
    if(cur->next == NULL){
        head = cur; 
        return;
    }
    reversed(head, cur->next);
    cur->next->next = cur; 
    cur->next = NULL; 

}
    bool isPalindrome(ListNode* head) {
        ListNode* newhead = NULL;
        ListNode* newtail = NULL;
        ListNode* temp = head; 
        while(temp != NULL){
            insert_tail(newhead, newtail, temp->val);
            temp = temp->next; 
        }
        reversed(newhead, newhead);


        temp = head; 
        ListNode* temp2 = newhead; 
        while(temp != NULL){
            if(temp->val != temp2->val){
                return false; 
            }
            temp = temp ->next; 
            temp2 = temp2->next; 
        }
        return true; 

    }
};