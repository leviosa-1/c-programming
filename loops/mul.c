#include<STDIO.H>
#include<CONIO.H>
int main(){

    int n ,i;
    printf("enter the valus of n :-");
    scanf("%d",&n);
    printf("table of %d \n",n);

    for(i=10; i>=1; i--){
       int mul=n*i;
       printf("%d X %d = %d \n ",n,i,mul);
    }
    getch();
    return 0;
}