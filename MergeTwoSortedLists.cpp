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

// lists are sorted
// Algorithm:
// 1. check for base condition, if list1 is null return list2 and if list2 is null return list1 as if there will be only one list
// 2. if list1->val > list2->val swap the lists so that list1 have smaller value
// 3. assign list1 node to ans
// 4. while list1 and list2 are not null
// 5. assign temp node to null
// 6. while list1 is not null and list1 < list2
// 7. if list1 is less than list2 assign temp = list1
// 8. assign list1 to next element list1->next
// 9. else if list2 is less than list1
// 10. assign temp->next to list2
// 11. swap list1 and list2 because the smaller value was on list2
// 12. return the node ans

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL) return list2;
        if(list2 == NULL) return list1;
        
        if(list1 -> val > list2 -> val) swap(list1, list2);
        ListNode * res = list1;
        while(list1 !=  NULL && list2 != NULL){
            ListNode * tmp = NULL;
            while(list1 != NULL && list1 -> val <= list2 -> val){
                tmp = list1;
                list1 = list1 -> next;
            }
            tmp -> next = list2;
            swap(list1, list2);
        }
        return res;
        
        // if(list1->val >= list2->val) {
        //     list2->next = mergeTwoLists(list1, list2-> next);
        // }
        // else{
        //     list1->next = mergeTwoLists(list1->next, list2);
        //     list2 = list1;
        // }
        // return list2;
    }
};