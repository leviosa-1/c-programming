#include<STDIO.H>
#include<CONIO.H>
int main(){
    float p , r, t ,  si;
    printf("Enter the p , r , t repectivrly :");
    scanf("%f%f%f",&p,&r,&t);
    si=(p*r*t)/100;
    printf("Simple Interest : %0.4f",si);

    return 0;
    
}