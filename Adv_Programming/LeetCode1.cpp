// Add Two Numbers in LeetCode 

#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x = 0) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode();   // Dummy head
        ListNode* curr  = dummy;            // Pointer to build result
        int carry = 0;

        while (l1 || l2 || carry) {
            int total = carry;

            if (l1) {
                total += l1->val;
                l1 = l1->next;
            }
            if (l2) {
                total += l2->val;
                l2 = l2->next;
            }

            curr->next = new ListNode(total % 10);
            carry      = total / 10;
            curr       = curr->next;
        }

        ListNode* result = dummy->next;
        delete dummy;             
        return result;
    }
};

ListNode* buildList(const vector<int>& digits, bool reverseOrder = true) {
    ListNode* head = nullptr;
    ListNode* tail = nullptr;
    for (int d : digits) {
        ListNode* node = new ListNode(d);
        if (!head)
            head = tail = node;
        else {
            tail->next = node;
            tail = node;
        }
    }
    if (!reverseOrder) {
        // Reverse the list once to make forward-order storage
        ListNode *prev = nullptr, *curr = head;
        while (curr) {
            ListNode* nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        head = prev;
    }
    return head;
}

void printList(ListNode* head) {
    while (head) {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
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
    vector<int> num1 = {2, 4, 3};
    vector<int> num2 = {5, 6, 4};

    ListNode* l1 = buildList(num1);
    ListNode* l2 = buildList(num2);

    Solution sol;
    ListNode* sum = sol.addTwoNumbers(l1, l2);

    cout << "Number 1: ";
    printList(l1);
    cout << "\nNumber 2: ";
    printList(l2);
    cout << "\nSum:      ";
    printList(sum);
    cout << '\n';

    // Clean up
    freeList(l1);
    freeList(l2);
    freeList(sum);

    return 0;
}
