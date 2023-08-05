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
    int getlen(ListNode* head)
    {
        ListNode* h1 = head;
        int cnt = 1;
        while(h1->next != NULL)
        {
            cnt++;
            h1 = h1->next;
        }
        return cnt;
    }
    bool isPalindrome(ListNode* head) {
        stack<int> st;
        int l = getlen(head);
        ListNode* temp = head;
        for(int i=0; i<(l/2); i++)
        {
            st.push(temp->val);
            temp = temp->next;
        }
        if(l%2!=0)temp = temp->next;
        while(temp != NULL)
        {
            if(temp->val == st.top()){
                st.pop();
                temp = temp->next;
            }
            else{
                return false;
            }
        }
        if(st.empty()){
            return true;
        }
        return (l==1)? true : false;
    }
};