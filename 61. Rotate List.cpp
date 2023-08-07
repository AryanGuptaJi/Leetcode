class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }
        auto temp = head;
        auto l = 1;
        while (temp->next != nullptr) {
            temp = temp->next; l++;
        }
        temp->next = head;
        temp = head;
        for (int i=0; i<l-(k % l)-1; i++) {
            temp = temp->next;
        }
        head = temp->next;
        temp->next = nullptr;
        return head;
    }
};