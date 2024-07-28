#include<stdio.h>
#include<CONIO.H>
int main(){
    float PI =  3.14;
    float radius , area ;
    printf("enter the radius of circle :");
    scanf("%f",&radius);
    area = PI* radius * radius;
    printf("area of circle : %0.4f \n",area);

    int a=10;
    if(a=11){
        printf("i am 11");
    }
    else{
        printf("i am not 11");
    }
    getch();

    return 0;
}
