#include<STDIO.H>
#include<CONIO.H>
int main (){
    int marks;
    printf("Enter the marks of student out of 100 :");
    scanf("%d",&marks);
    if(marks>=90 && marks<=100){
        printf("pass in A gread");
    }
    else if(marks>=80 && marks<90){
        printf("Pass with B grad");

    }
    else if(marks>=70 && marks<80){
        printf("Pass with C gread");
    }
    else if(marks>=60 && marks<=70){
        printf("pass with D gread");
    }
    else if(marks<70){
        printf("pass with Gread F");
    }
  return 0;

}