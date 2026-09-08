import java.util.*;

public class Main {

    static class Node {
        int data;
        Node next;

        Node(int data) {
            this.data = data;
            this.next = null;
        }
    }

    Node head;

    // Insert at end
    public void insert(int data) {
        Node newNode = new Node(data);

        if (head == null) {
            head = newNode;
            return;
        }

        Node temp = head;

        while (temp.next != null) {
            temp = temp.next;
        }

        temp.next = newNode;
    }

    // Search target
    public boolean search(int target) {
        Node temp = head;

        while (temp != null) {
            if (temp.data == target) {
                return true;
            }

            temp = temp.next;
        }

        return false;
    }
    //delete first Node
    public void deleteHead(){
        if(head == null){
            System.out.println("ll is empty");
            return;
        }
        //main logic
        head=head.next;

    }
    //delete node
    
    // Print Linked List
    public void printList() {
        Node temp = head;

        while (temp != null) {
            System.out.print(temp.data + " -> ");
            temp = temp.next;
        }

        System.out.println("null");
    }

    public static void main(String[] args) {

        Main ll = new Main();

        ll.insert(10);
        ll.insert(20);
        ll.insert(30);
        ll.insert(40);

        int target = 20;

        System.out.println(ll.search(target));
        ll.deleteHead();

        System.out.println("After deleting head:");
        ll.printList();
    }
}
