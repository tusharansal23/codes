/*
Question finding merge-point of two linked list
by
Tushar Ansal
Link-https://www.hackerrank.com/challenges/find-the-merge-point-of-two-joined-linked-lists/problem

*/

#include <bits/stdc++.h>

using namespace std;

class SinglyLinkedListNode {
    public:
        int data;
        SinglyLinkedListNode *next;

        SinglyLinkedListNode(int node_data) {
            this->data = node_data;
            this->next = nullptr;
        }
};

class SinglyLinkedList {
    public:
        SinglyLinkedListNode *head;
        SinglyLinkedListNode *tail;

        SinglyLinkedList() {
            this->head = nullptr;
            this->tail = nullptr;
        }

        void insert_node(int node_data) {
            SinglyLinkedListNode* node = new SinglyLinkedListNode(node_data);

            if (!this->head) {
                this->head = node;
            } else {
                this->tail->next = node;
            }

            this->tail = node;
        }
};

void print_singly_linked_list(SinglyLinkedListNode* node, string sep, ofstream& fout) {
    while (node) {
        fout << node->data;

        node = node->next;

        if (node) {
            fout << sep;
        }
    }
}

void free_singly_linked_list(SinglyLinkedListNode* node) {
    while (node) {
        SinglyLinkedListNode* temp = node;
        node = node->next;

        free(temp);
    }
}

// Complete the findMergeNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    int count1=0,count2=0,diff;
    SinglyLinkedListNode *ptr1=head1,*ptr2=head2;
    while(ptr1!=NULL){
        ptr1=ptr1->next;
        count1++;
    }
    while(ptr2!=NULL){
        ptr2=ptr2->next;
        count2++;
    }
    ptr1=head1;
    ptr2=head2;
    if(count1>count2){
        diff=count1-count2;
        while(diff){
            if(ptr1->next)
            ptr1=ptr1->next;
            diff--;
        }
    }
    else if(count2>count1){
        diff=count2-count1;
        while(diff){
            if(ptr2->next)
            ptr2=ptr2->next;
            diff--;
        }
    }
    if(ptr1==ptr2){
        return ptr1->data;
    }
    while(ptr1->next!=ptr2->next && ptr1->next!=NULL && ptr2->next!=NULL){
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
return ptr1->next->data;
}

int main()

