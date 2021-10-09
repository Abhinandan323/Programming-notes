public class Solution {

	public static LinkedListNode<Integer> kReverse(LinkedListNode<Integer> head, int k) {
		if(head == null || head.next == null) return head;
        LinkedListNode<Integer> temp = head;
        int i = 1;
        while(i < k && temp.next != null) {
            temp = temp.next;
            i++;
        }
        LinkedListNode<Integer> tomp = temp.next;
        temp.next = null;
        LinkedListNode<Integer> newHead = reverse(head);
        LinkedListNode<Integer> smallAns = kReverse(tomp, k);
        
        head.next = smallAns;
        return newHead;
	}
    
    public static LinkedListNode<Integer> reverse(LinkedListNode<Integer> head) {
        if(head == null || head.next == null) return head;
        
        LinkedListNode<Integer> reversedTail = head.next;
        LinkedListNode<Integer> smallAns = reverse(head.next);
        reversedTail.next = head;
        head.next = null;
        
        return smallAns;
    }

}