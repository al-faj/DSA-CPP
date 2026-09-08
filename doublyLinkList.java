public class doublyLinkList{
    static class node{
        int data;
        node previous;
        node next;
        node(int data){
            this.data = data;
            this.previous=null;
            this.next=null;
        }
    }
    //data member
    private node head;
    private node tail;
    private int size;

    doublyLinkList(){
        this.head = null;
        this.tail=null;
        this.size=0;
    }
    public void insertAtHead(int data){
        node NewNode = new node(data);
        if(head == null && tail==null){
            head = NewNode;
            tail=NewNode;
        }
        else{
            NewNode.next = head;
            head.previous = NewNode;
            head=NewNode;
        }
        size++;
    }

    //insert at Tail

    public void insertAtTail(int data){
        node NewNode = new node(data);
        if(head == null && tail == null){
            head = NewNode;
            tail = NewNode;
        }
        else{
            NewNode.previous =tail;
            tail.next = NewNode;
            tail = NewNode;
        }
        size++;
    }

    // insert value at position
    public void insertAtPosition(int position, int data){
        if (position < 1 || position > size + 1) {
            System.out.println("Invalid Position");
            return;
        }
        if(position == 1){
            insertAtHead(data);
            return;
        }
        if(position == size+1){
            insertAtTail(data);
            return;
        }
        node temp = head;
        for(int i=1; i<= position-2; i++){
            temp = temp.next;
        }
        //ab mera node preivioud ke uper aa chuki hai
        node prvNode = temp;
        node nextNode = prvNode.next;
        node cuurentNode = new node(data);

        // ab change link
        cuurentNode.previous = prvNode;
        prvNode.next = cuurentNode;
        cuurentNode.next = nextNode;
        nextNode.previous = cuurentNode;

        size++;
    }
    //print the linklist
    public void printlist(){
        node temp = head;
        while(temp != null){
            System.out.print(temp.data+"->");
            temp = temp.next;

        }
        System.out.println();
    }
    public static void main(String[] args){
        doublyLinkList myList = new doublyLinkList();
            myList.insertAtHead(10);
            myList.printlist();

            myList.insertAtHead(20);
            myList.printlist();

            myList.insertAtHead(30);
            myList.printlist();


    }
}
