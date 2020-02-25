#include <stdio.h>

int main(void) {
  int arr[1000];  
  int sayi1,sayi2,top;
  int step;
  sayi1=1;
  sayi2=2;
  arr[0]=1;
  arr[1]=1;
  for(int i = 2;i<1000; i++){
    top=sayi1+sayi2;
    sayi1=sayi2;
    sayi2=top;

    arr[i]=top;

  }
  printf("Which step do you want to know?=");
  scanf("%d",&step);
  printf("arr[%d]=%d",step,arr[step]);
  return 0;
}