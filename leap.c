#include<STDIO.H>
#include<CONIO.H>
int main(){
    int yr;
    printf("enter the year to check if it is leap year or not :-");
    scanf("%d",&yr);
    if(((yr%4==0) && (yr%400==0)) || (yr%100!=0)){
       printf("%d is Leap year!!",yr);
    }
    else{
        printf("%d is not leaf year ",yr);
    }
    getch();
    return 0;
}