
#include<iostream>
using namespace std;



// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode(int x) : val(x), next(NULL) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode *detectCycle(ListNode *head) {
//         ListNode* slow = head;
//         ListNode* fast = head;
//         bool isCycle = false;

//         while(fast != NULL && fast->next != NULL){

//             slow = slow->next;
//             fast = fast->next->next;

//             if(slow == fast){
//                 isCycle = true;
//                 break;
//             }
//         }

//         if(!isCycle){
//             return NULL;
//         }

//         slow = head;

//         ListNode* prev = NULL; // to Remove the cycle.
//         while(slow != fast){
//             slow = slow->next;
//             prev = fast;
//             fast = fast->next;
//         }

//         prev->next = NULL; // Remove Cycle

//         return slow;
//     }
// };


int main(){

    //  this is third in this we also remove the cycle of the linked list.



    return 0;
}

