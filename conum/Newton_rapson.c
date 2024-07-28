#include<STDIO.H>
#include<CONIO.H>
#include<MATH.H>
float f(float x){
    return (x*x-x-1);
}
float df(float x){
    return(2*x-1);
}

void main(){
    float b,m,e=0.00001;
    int i;
    printf("enter the b (max point of slop )");
    scanf("%f",&b);
    m=b-(f(b)/df(b));
    i=0;
    while(fabs(f(m))>=e){
        printf("\n i=%d \t b=%f \t m=%f \t f(m)=%f",i,b,m,f(m));
        b=m;
        m=b-(f(b)/df(b));
        i=i+1;

    }
    printf("root = %f",m);
    getch();

}