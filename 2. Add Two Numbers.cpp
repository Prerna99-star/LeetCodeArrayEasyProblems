class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
      int c=0, sum=0;
      ListNode* ans = new ListNode(0);
      ListNode* current = ans;
      while(l1||l2||c){
          int d1 = l1?(l1->val):0;
          int d2 = l2?(l2->val):0;
          sum = d1 + d2 + c;
          current->next = new ListNode(sum%10);
          current = current->next;
          c = sum/10;
          l1 = l1?(l1->next):nullptr;
          l2 = l2?(l2->next):nullptr;
      }
      return ans->next;
    }
};
