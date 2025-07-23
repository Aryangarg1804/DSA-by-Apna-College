#include<iostream>
using namespace std;

// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* swapPairs(ListNode* head) {


//          done by me
//         // int count = 0;
//         // ListNode* temp = head;
//         // while(count < 2){
//         //     if(temp == NULL){
//         //         return head;
//         //     }
//         //     temp = temp->next;
//         //     count++;
//         // }

//         // ListNode* prevNode = swapPairs(temp);

//         // temp = head;
//         // count = 0;
//         // while(count < 2){
//         //     ListNode* next = temp->next;
//         //     temp->next = prevNode;
//         //     prevNode = temp;
//         //     temp = next;

//         //     count++;
//         // }


//         // return prevNode;


//          done by youtube 
//         if(head == NULL || head->next == NULL) return head;

//         ListNode* first = head;
//         ListNode* second = head->next;
//         ListNode* prev = NULL;
//         while(first != NULL && second != NULL){
//             ListNode* third = second->next;

//             second->next = first;
//             first->next = third;

//             if(prev != NULL){
//                 prev->next = second;
//             } else{
//                 head = second;
//             }

//             // update
//             prev = first;
//             first = third;

//             if(third != NULL){
//                 second = third->next;
//             } else{
//                 second = NULL;
//             }
//         }

//         return head;
//     }
// };


int main(){

    // leetcode 24 
    // one is done by me and other is done by youtube both different approach.


    return 0;
}