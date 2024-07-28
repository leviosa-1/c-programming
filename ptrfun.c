#include<STDIO.H>
#include<CONIO.H>
// //call by value 
// void square(int n){
//     n = n*n;
//     printf("square :- %d\n",n);
// }
// // call by reference
// void _square(int* n){
//     *n = (*n) * (*n);
//     printf("square = %d\n", *n);
// }
void swap (int* a, int* b){
    int temp = *a ;
    *a=*b;
    *b=temp;
    printf("swaped a = %d\n",*a);
    printf("swaped b = %d\n",*b);
}
int main(){
    int a=4, b=10;
   printf("prv a = %d\n",a);
    printf("prev b = %d\n",b);
    swap(&a,&b);
    // int number=4;
    // square(number);
    // printf("number = %d\n",number);
    // _square(&number);
    // printf("number = %d\n", number);
}