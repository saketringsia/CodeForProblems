/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
    // Complete this function
    // Do not write the main method
        if(head==NULL || head->next==NULL)
        return false;
    Node* prev = head;
    Node* fast = head->next;

    while(prev!=fast){
        if(fast==NULL || fast->next==NULL) return false;
        
        prev = prev->next;
        fast = fast->next->next;
    }
    return true;
}
