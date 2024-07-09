#include<stdio.h>
int stack[5];
int top=-1;

void push();
void pop();
void display();

int main(){
    int choice=0;
     do{
     printf("\nEnter your choice number 1-Push , 2-Pop , 3-Display , 4-exit: ");
     scanf("%d",&choice);
     switch(choice) {
      case 1:push();
      break;
      case 2:pop();
      break;
      case 3:display();
      break;
      case 4:
      break;
       }
     }
     while(choice!=4);

}
void push(){

   if(top==4){
    printf("Stack is overflow !");return;
   }
   top+=1;

   scanf("%d",&stack[top]);
}
void pop(){
   if(top==-1){
     printf("Stack is underflow !");return;
    }
   printf("%d is popped out!",stack[top]);
   top-=1;

}
void display(){
    for(int i=0;i<=top;i++){
   printf("%d\n",stack[i]);
    }
}
