#include <stdio.h>

int main() {

  char age = 'a';
  char *p =  &age;
  printf("ptr :- %u\n",p);
  p++;
    printf("ptr :- %u\n",p);
  p--;
  printf("ptr :- %u\n",p);
//  float price[3] ;
//     float final_cost , sum;
//     float gst;
//      printf("Enter the price of 3 items");
//      for(int i=0; i<=3;i++){
//          scanf("%f",&price[i]);
//      }
//      sum= price[0]+price[1]+price[2];
//      gst = sum *0.18;
//      final_cost = sum+gst;
//      printf("final cost :- %0.3f", final_cost);
     
    return 0;
}