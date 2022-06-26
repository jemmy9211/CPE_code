/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     public int val;
 *     public ListNode next;
 *     public ListNode(int val=0, ListNode next=null) {
 *         this.val = val;
 *         this.next = next;
 *     }
 * }
 */
public class Solution {
    public ListNode DeleteDuplicates(ListNode head) {
        if(head==null || head.next==null)
            return head;
        
        var begin=head;
        while(head.next!=null){
            var tep=head.next;
            
            if(head.val==tep.val){
                while(head.val==tep.val){
                    if(tep.next==null){
                        head.next=null;
                        return begin;
                    } 
                    tep=tep.next;
                }
                
                head.next=tep;
            }
            
            head=head.next;
        }
        
        return begin;
    }
}
