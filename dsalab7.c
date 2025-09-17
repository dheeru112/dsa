#include<stdio.h> // single linked list implementation 
#include<stdlib.h> //menu driven program that asks user to create a node insert, delete,display 
struct node{
    int data;
    struct node* next;
};  
struct node* insertatstart(struct node* head,int v){
    struct node* newnode = malloc(sizeof(struct node));
    newnode->data = v;
    newnode->next = head;
    head = newnode;
    return head;
}
struct node* insertatend(struct node* head,int v){
    struct node* newnode = malloc(sizeof(struct node));
    newnode->data = v;
    newnode->next = NULL;
    struct node* ptr = head;
      while(ptr->next!=NULL){
        ptr = ptr->next;
      }
      ptr->next = newnode;
      return head;

}
struct node* deleteatstart(struct node* head){
    struct node* ptr = head;
    head = head->next;
    free(ptr); 
    return head;
}
struct node* deleteatend(struct node* head){
    struct node* ptr = head;
    struct node* current = NULL;
    while(ptr->next!=NULL){
        current = ptr;
        ptr = ptr->next;
    }
    current->next = NULL; 
    return head;
}
void display(struct node* head){
    if(head==NULL){
        printf("linked list is empty\n");
        return; 
    }
    else{
    struct node* ptr = head;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
    return;  }
}
 
int main() {
    char ch; 
    struct node* head = NULL;
    do {
        printf("1 for insert at start\n");
        printf("2 for insert at end\n");
        printf("3 for delete at start\n"); 
        printf("4 for delete at end\n");
        printf("5 for display\n");
        printf("what do you choose?\n");
        int x;
        scanf("%d",&x);
        if(x==1){
            int v1;
             printf("Enter value to insert:\n");
             scanf("%d",&v1); 
             head = insertatstart(head,v1);
        }
        else if(x==2){
            int v2;
            printf("Enter value to insert:\n");
             scanf("%d",&v2); 
             head = insertatstart(head,v2);
        }
        else if(x==3){
            head = deleteatstart(head);
        }
        else if(x==4){
            head = deleteatend(head);
        }
        else if(x==5){
            display(head);
        }
        else{
            printf("invalid case\n");
        }
        
        printf("Do you want to continue? (type=y):");
        fflush(stdin);
        scanf("%c",&ch); 
    }while(ch=='y');
   
   

      
    return 0; 
}