    // Complete the insertNodeAtPosition function below.

    /*
     * For your reference:
     *
     * SinglyLinkedListNode {
     *     int data;
     *     SinglyLinkedListNode next;
     * }
     *
     */
    static SinglyLinkedListNode insertNodeAtPosition(SinglyLinkedListNode head, int data, int position) {
        SinglyLinkedListNode node=new SinglyLinkedListNode(data);
        SinglyLinkedListNode prev=null; SinglyLinkedListNode curr=head;
        
        if(head==null)
            return node;
        prev=head;
        curr=head;
        int i=0;
        while(i<position && curr.next!=null){
            curr=curr.next;
            i++;
        }
        i=0;
        while(i<position-1 && prev.next!=null){
            prev=prev.next;
            i++;
        }
        
        if(curr.equals(prev))
            prev.next=node;
        else{
            prev.next = node;
            node.next = curr;
        }
    
    return head;
    }
        
