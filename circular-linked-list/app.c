// Include all the required files
#include"circular-linked-list.h"

// Main function - Starting point of the program
int main(){
    int choice,elem;
    struct Node* head = NULL;
    struct Node* lefthalf = NULL;
    struct Node* righthalf = NULL;

    printf("\tCircular Linked List\n\n");
    do{
        printf("1. Insert the element in the beginning of the linked list\n");
        printf("2. Insert element at the end of the linked list\n");
        printf("3. Split the circular linked list in two halves\n");
        printf("4. Insert element in the list in a sorted way (sorted insert)\n");
        printf("0. Exit\n\n");
        printf("Enter your choice : ");
        scanf(" %d",&choice);
        switch(choice){
            case 0 : break;
            case 1: 
                printf("Element : ");
                scanf(" %d",&elem);
                head = InsertBegin(head, elem);
                PrintList(head);
                break;
            case 2:
                printf("Element : ");
                scanf(" %d",&elem);
                head = InsertEnd(head, elem);
                PrintList(head);
                break;
            case 3:
                printf("-------Original List----------\n");
                PrintList(head);
                SplitList(head, &lefthalf, &righthalf);
                printf("-------List 1-------------\n");
                PrintList(lefthalf);
                printf("-------List 2-------------\n");
                PrintList(righthalf);
                break;
            case 4:
                printf("Element : ");
                scanf(" %d",&elem);
                head =  InsertSorted(head, elem);
                PrintList(head);
                break;
            default: printf("Enter a valid choice \n");
        }
    }while(choice!=0);
    return 0;
}
