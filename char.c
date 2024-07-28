#include<STDIO.H>
#include<CONIO.H>
#include<CTYPE.H>
int main(){

    char ch;
    printf("Enter The charachter :");
    scanf("%c",&ch);
    if(isupper(ch)){
        printf("%c is Uppercase alphabate",ch);
    }
    else if(islower(ch)){
        printf("%c is lowercase alphabate",ch);
    }
    else{
        printf("%c is not alphabate its is symblol",ch);
    }
    getch();
    return 0;
}