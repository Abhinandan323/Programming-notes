public class Solution {

	public static LinkedListNode<Integer> mergeSort(LinkedListNode<Integer> head) {
        
     if(head == null || head.next == null) {
            return head;
        }
       
        
        LinkedListNode<Integer> mid = midPoint(head);
        LinkedListNode<Integer> head2 = mid.next;
        mid.next = null;
        
        LinkedListNode<Integer> part1 = mergeSort(head);
        LinkedListNode<Integer> part2 = mergeSort(head2);
        
      return merge(part1, part2);
        
	}
    
    public static LinkedListNode<Integer> midPoint(LinkedListNode<Integer> head) {
        
        LinkedListNode<Integer> slow = head;
        LinkedListNode<Integer> fast = head;
        
        while(fast.next != null && fast.next.next != null) {
            slow = slow.next;
            fast = fast.next.next;
        }
        return slow;
    }
    
    
    public static LinkedListNode<Integer> merge(LinkedListNode<Integer> head1, LinkedListNode<Integer> head2) {
        
//         if(head1 == null) {
//             return head2;
//         }
        
//         if(head2 == null) {
//             return head1;
//         }
        
        LinkedListNode<Integer> head, tail;
        if(head1.data <= head2.data) {
            head = head1;
            tail = head1;
            head1 = head1.next;
        } else {
             head = head2;
             tail = head2;
             head2 = head2.next;
        }
        
        while(head1 != null && head2 != null) {
            if(head1.data <= head2.data) {
                tail.next = head1;
                tail = tail.next;
                head1 = head1.next;
            } else {
                tail.next = head2;
                tail = tail.next;
                head2 = head2.next;
            }
        }
        
        if(head1 == null) {
            tail.next = head2;
        }
        
        if(head2 == null) {
           tail.next = head1;
        }
        
        return head;
    }

}