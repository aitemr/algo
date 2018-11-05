/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
class Solution {
    public ListNode deleteDuplicates(ListNode head) {
        if(head == null || head.next == null)
            return head;
 
        ListNode prev = head;    
        ListNode p = head.next;
 
        while(p != null){
            if (p.val == prev.val){
                prev.next = p.next;
            } else{
                prev = p;
            }
            p = p.next; 
        }
 
        return head;
    }
}