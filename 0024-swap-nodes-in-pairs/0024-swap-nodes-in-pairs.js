var swapPairs = function(head) {
    if(!head || !head.next) return head

    let dummy = new ListNode(0)
    let tail = dummy
    let curr = head
    
    while(curr && curr.next){
        let temp = curr.next.next

        tail.next = curr.next
        curr.next.next = curr
        curr.next = temp

        tail = curr
        curr = temp
    }
    return dummy.next
};