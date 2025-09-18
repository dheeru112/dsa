#include<stdio.h>  // doubly linked list   implementation 
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
    struct node* prev;
};
struct node* insertatstart(struct node* head,int v){
    struct node* newnode = malloc(sizeof(struct node));
    newnode->data = v;
    newnode->prev = NULL;
    newnode->next = head;
    // head->prev = newnode;
    if(head!=NULL){
    head->prev = newnode;
    } 
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
    newnode->prev = ptr;
    return head;
}
struct node* deleteatstart(struct node* head){
     if(head==NULL){
        printf("linked list is empty\n");
     }
     else{
     head = head->next;
     head->prev = NULL; } 
     return head;
}
struct node* deleteatend(struct node* head){
    if(head==NULL){
        printf("linked list is empty\n");
    }
    else{
    struct node* ptr = head;
    struct node* current = NULL;
    while(ptr->next!=NULL){
        current = ptr;
        ptr = ptr->next;
    }
    current->next = NULL; } 
    return head;
}
void display(struct node* head){
    if(head==NULL){
        printf("Linked list is empty");
        return;
    }
    struct node* ptr = head;
    while(ptr!=NULL){
    printf("%d ",ptr->data);
    ptr = ptr->next; 
    } 
    printf("\n"); 
    return;
    
}
int main() {
    struct node* head = NULL;
    head = insertatstart(head,10);
    head = insertatend(head,1);
    head = insertatend(head,20);
    display(head);
    head = deleteatstart(head);
    display(head);
    head = deleteatend(head);
    display(head);
    
    
    return 0;
}