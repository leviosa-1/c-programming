#include<STDIO.H>
#include<CONIO.H>
int main(){

    int n1,n2,n3,n4;
    printf("Enter the first number ");
    scanf("%d",&n1);
     printf("Enter the second number ");
    scanf("%d",&n2);
     printf("Enter the third number ");
    scanf("%d",&n3);
     printf("Enter the fourth number ");
    scanf("%d",&n4);
    int greatest = n1;
    if(n2>greatest){
        greatest=n2;
    }
    if(n3>greatest){
        greatest=n3;
    }
    if(n4>greatest){
        greatest=n4;
    }

    printf("%d is greater",greatest);
    getch();
    return 0;
}