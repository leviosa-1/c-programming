#include<STDIO.H>
#include<CONIO.H>
int main(){

    int income ;
     printf("Enter your Yearly income ");
     scanf("%d",&income);
       
    if(income>=1000000){
        printf("tax:- 30 percent \n");
        int tax = (income*30)/100;
        printf("Payable Tax : %d \n",tax);
    }
    else if(income>=500000 && income<1000000){
        printf("Tax :- 20 percent \n");
        int tax = (income*20)/100;
        printf("Payable Tax :- %d \n",tax);
    }
    else if(income>=250000 && income<500000){
        printf("Tax :- 5 percent \n ");
        int tax = (income*5)/100;
        printf("Payable Tax :- 89%d \n",tax);
    }
    else{
        printf("No need to pay Tax !! \n");
    }

    printf("Income Tax Departmrnt , India (Bharat Sarkar)");
    getch();
    return 0;
}