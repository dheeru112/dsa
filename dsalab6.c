//code to implement infix to postfix conversion
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#define maxsize 100
typedef struct{
    char arr[maxsize]; 
    int top;
}stack;
int precedence(char c){
    if(c=='^') return 3;   // higher 
    else if(c=='*'||c=='/') return 2;  // same
    else if(c=='+'||c=='-') return 1;  // same precedence
    else return -1;
}
int isoperator(char c){
    return (c=='+'||c=='-'||c=='*'||c=='/'||c=='^');
}
void initialise(stack *ss){
   ss->top = -1;
   // (*stack).top = -1; 
}
int isempty(stack *ss){
    return (ss->top==-1);
}
int isfull(stack *ss){
    return (ss->top==maxsize-1); 
}
void push(stack *ss,char elem){
    if(isfull(ss)){
           printf("stack overflow");
           return; 
    }
   ss->top = ss->top + 1;
   ss->arr[ss->top] = elem;
   //printf("%d is pushed\n",elem);
}
int pop(stack *ss){
    if(isempty(ss)){
        printf("underflow");
        return 0; 
    }
    int val = ss->arr[ss->top];
    
    ss->top -= 1;
    return val; 
    
}
char peek(stack *ss){
    return  (ss->arr[ss->top]); 
   
}
void infixtopostfix(char *in,char *post){
     stack s;
     initialise(&s);
     int k = 0;
     for(int i=0; in[i]!='\0'; i++){
             char c =  in[i];
             if(isspace(c)){
                continue;
             }
             if(isalnum(c)){
                post[k] = c;
                k++;
             }
             else if(c=='('){
                push(&s,c);
             }
             else if(c == ')'){
                while(!isempty(&s) && peek(&s)!='('){
                    post[k] = pop(&s);
                    k++;
                } 
             
             if(!isempty(&s) && peek(&s)=='('){
                pop(&s); }
             }
             else if(isoperator(c)){
                 while(!isempty(&s) && precedence(peek(&s))>=precedence(c)){
                    post[k] = pop(&s);
                    k++;
                 }
                 push(&s,c);
             }

     }
     while(!isempty(&s)){
        post[k] = pop(&s);
        k++;
     }
    post[k] = '\0'; 
}
int main() {
   char in[maxsize],post[maxsize];
   printf("Enter the infix expression:");
   fgets(in,maxsize,stdin);  
   in[strcspn(in,"\n")] = 0; // to remove enter from scan  
   infixtopostfix(in,post);
   printf("postfix expression : %s \n",post);
   


    return 0; 
}
// peek function is to check peek element of stack 
