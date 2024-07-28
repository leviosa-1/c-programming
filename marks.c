#include<STDIO.H>
#include<CONIO.H>
int main(){
    int m1,m2,m3;
    float per;
    printf("Enter the marks of student out of 100 in 3 subjects(Maths,physics,chemistry) respectively : ");
    scanf("%d %d %d" ,&m1, &m2, &m3);
    per=(m1+m2+m3)/3;
    if(per>=33 && m1<=33 && m2<=33 && m3<=33){
        printf("pass with percentage :%f", per);
    }
    else{
        printf("Fails with percentaeg :%f", per);
    }
    getch();
    return 0;

}