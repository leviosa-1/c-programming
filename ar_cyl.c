#include<stdio.h>
#include<conio.h>
int main(){
    float PI = 3.141;
    float r, vol,  h;
    printf("Enter the radius and height of cylinder respectively :");
    scanf("%f %f",&r,&h);
    vol=PI*r*r*h;
    printf("volume of cylinder : %0.4f \n",vol);
    getch();
    return 0;
    

}