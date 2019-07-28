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
        SinglyLinkedListNode* curr1=head1;
        SinglyLinkedListNode* curr2=head2;
        int count1=0,count2=0;
        while(curr1!=NULL){
            count1++;
            curr1=curr1->next;
        }
          while(curr2!=NULL){
            count2++;
            curr2=curr2->next;
        }
        if(count1>count2){
            for(int i=0;i<(count1-count2);i++)
                head1=head1->next;
        }
        else if(count2>count1){
            for(int i=0;i<(count2-count1);i++)
                head2=head2->next;
        }
    while(head1!=NULL && head2!=NULL){
        if(head1==head2)
            return head1->data;
        head1=head1->next;
        head2=head2->next;
    }
    return 0;
}
