#include<STDIO.H>
#include<CONIO.H>
#include<MATH.H>
float f(float x){
    return(x*x-x-1);
}
void main(){
    float a,b,m,e=0.00001;
    int i;
    printf("\n Enter initial interval [a,b] \n");
    scanf("%f %f",&a,&b);
    if(f(a)*f(b)>0)
       printf("Invalid interval !!");
    else{
        m=(a+b)/2;
        i=1;
        while(fabs(f(m))>=e){
            printf("\n i=%d \t a=%f \t b=%f \t m=%f \t f(m)=%f \n",i,a,b,m,f(m));
            if(f(a)*f(m)>0)
               a=m;
            else
               b=m;
            
            m=(a+b)/2;
            i=i+1;
        }

    }
    printf("\n the root = %f",f(m));
    getch();

    
} 