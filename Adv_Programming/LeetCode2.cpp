//Delete nth node from the end of the list in Leetcode 
#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    // Two handy constructors
    ListNode(int x = 0) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* nxt) : val(x), next(nxt) {}
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* sentinel = new ListNode(0, head);   // Dummy front
        ListNode* fast = head;                        
        for (int i = 0; i < n; ++i) fast = fast->next;

        ListNode* slow = sentinel;                   
        while (fast) {
            fast = fast->next;
            slow = slow->next;
        }
        ListNode* doomed = slow->next;
        slow->next = doomed->next;                    
        delete doomed;                                

        ListNode* result = sentinel->next;
        delete sentinel;                            
        return result;
    }
};

ListNode* buildList(const vector<int>& vals) {
    ListNode *head = nullptr, *tail = nullptr;
    for (int v : vals) {
        ListNode* node = new ListNode(v);
        if (!head) head = tail = node;
        else       tail = tail->next = node;
    }
    return head;
}

void printList(ListNode* head) {
    for (ListNode* p = head; p; p = p->next) {
        cout << p->val << (p->next ? " -> " : "");
    }
}

void freeList(ListNode* head) {
    while (head) {
        ListNode* tmp = head;
        head = head->next;
        delete tmp;
    }
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};   
    int n = 2;

    ListNode* head = buildList(nums);

    cout << "Original list: ";
    printList(head);
    cout << '\n';

    Solution sol;
    head = sol.removeNthFromEnd(head, n);

    cout << "After removing " << n << "nth from end: ";
    printList(head);
    cout << '\n';

    freeList(head);
    return 0;
}
