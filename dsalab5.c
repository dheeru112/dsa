// stack implementation
#include<stdio.h>
#include<stdbool.h>
#define max_size 5
typedef struct {
    int arr[max_size];
    int top;
}Stack; 
void initialise(Stack *stack){
   stack->top = -1;
   // (*stack).top = -1; 
}
int isempty(Stack *stack){
    return (stack->top==-1);
}
int isfull(Stack *stack){
    return (stack->top==max_size-1); 
}
void push(Stack *stack,int elem){
    if(isfull(stack)){
           printf("stack overflow");
           return; 
    }
   stack->top = stack->top + 1;
   stack->arr[stack->top] = elem;
   printf("%d is pushed\n",elem);
}
int pop(Stack *stack){
    if(isempty(stack)){
        printf("underflow");
        return 0; 
    }
    int val = stack->arr[stack->top];
    
    stack->top -= 1;
    return val; 
    
}

int main(){ 
     int x;
      Stack s;
      initialise(&s);
      int n;
      printf("Enter no. of elements to push");
      scanf("%d",&n);
      for(int i=1; i<=n; i++){
        if(i>max_size) { break; }
          printf("Enter element to push:");
          scanf("%d",&x);
          push(&s,x);
          
      }
      printf("%d ",pop(&s)); 
      
    return 0; 
}