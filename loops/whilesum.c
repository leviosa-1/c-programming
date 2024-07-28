#include<STDIO.H>
#include<CONIO.H>
int main(){
    printf("sum of first entered natural numbers \n");
     int sum=0 ,i,n;
     printf("Enter the number :");
     scanf("%d",&n);
     do{
        sum=sum+i;
        i++;
     }
     while(i<=n);
     printf("The sum of first %d natural number  is %d ",n,sum);
    getch();
    return 0;
}