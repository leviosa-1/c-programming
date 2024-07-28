#include<STDIO.H>
#include<CONIO.H>
int main(){
   /* int i=5;
    //printf("preincrement : %d",++i);
   // printf("post increment :%d",i++);
   // printf("predecremet : %d",--i);
    printf("post decrement : %d \n",i--);
    printf("%d",i);
    */

    int n;
    printf("Enter n ");
    scanf("%d",&n);
    for(int i=n; i>=0; i--){
        printf("%d \n",i);
        
    }
    getch();
    return 0;
}