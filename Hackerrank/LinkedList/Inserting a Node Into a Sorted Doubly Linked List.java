    // Complete the sortedInsert function below.

    /*
     * For your reference:
     *
     * DoublyLinkedListNode {
     *     int data;
     *     DoublyLinkedListNode next;
     *     DoublyLinkedListNode prev;
     * }
     *
     */
    static DoublyLinkedListNode sortedInsert(DoublyLinkedListNode head, int data) {
            
        DoublyLinkedListNode node=new DoublyLinkedListNode(data);
        DoublyLinkedListNode curr=null;
        curr=head;
        if(head==null)
            return node;
        int c=0;
        while((curr.data < node.data) && curr.next!=null){
            curr=curr.next;
            c++;
        }
        if(c==0){
            head.prev = node;
            node.next = head;
            head = node;
            
        }
        else if(curr.next==null && (node.data > curr.data)){
            curr.next = node;
            node.prev=curr;
        }
        else {
            curr.prev.next = node;
            node.prev = curr.prev;
            curr.prev = node;
            node.next = curr;
        }
        
        return head;
    }
