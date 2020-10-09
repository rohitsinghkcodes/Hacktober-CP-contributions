ListNode Solutionsolve(ListNode A) {
ListNode zd=new ListNode(8);
ListNode od=new ListNode(9);

ListNode crr=A,z=zd,o=od;
while(crr!=0){
    if(crr-val==0){
        z-next=crr;
        z=z-next;
    }
    else if(crr-val==1){
        o-next=crr;
        o=o-next;
    }
    crr=crr-next;
}
z-next=od-next;
o-next=NULL;
return zd-next;
}