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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *head = NULL;
        // list1 = list1->next;
        // if(list1 != NULL)
        //    cout << list1->val <<" ";
        while(list1 != NULL or list2 != NULL){
            int l1 = list1 != NULL ? list1->val : 1000;
            int l2 = list2 != NULL ? list2->val : 1000;
            // cout << l1 << " " << l2 << endl;
            ListNode *newnode= new ListNode;
            if(l1 <= l2){
                newnode->val = l1;
                // cout << "\nNewNode : " << newnode->val;
                newnode->next = NULL;
                ListNode *cur = head;
                if(cur == NULL)
                    head = newnode;
                else{
                    while(cur->next != NULL){
                        cur = cur->next;
                    }cur->next = newnode;
                }
                // cout << "Hello!" ;
                list1 = list1->next;
            }else{
                newnode->val = l2;
                newnode->next = NULL;
                ListNode *cur = head;
                if(cur == NULL)
                    head = newnode;
                else{
                    while(cur->next != NULL){
                        cur = cur->next;
                    }cur->next = newnode;
                }
                list2 = list2->next;
            }
        }
        return head;
    }
};