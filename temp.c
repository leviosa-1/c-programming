#include<STDIO.H>
#include<CONIO.H>
int main (){
    float c ,f;
    printf("Enter the temprature in celcius : ");
    scanf("%f",&c);
    f = c*9/5+32;
    printf("Temprature in Faharanite : %f \n",f);
    getch();
    return 0;
}