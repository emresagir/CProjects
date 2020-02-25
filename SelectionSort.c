#include <stdio.h>

void sort (int *arr,int *arrsayi){

  for(int i=0; i< *arrsayi;i++  ){
    for(int j=i+1; j <*arrsayi ; j++ ){
      int temp;
      if(arr[i]>arr[j]){
        temp= arr[i];
        arr[i] = arr[j];
        arr[j]= temp;
      }
    }
  }
  printf("Minimum Value = %d \n",arr[0]);
}
int main (){
  
  
  int arr[]={1,9,6,0,5};
 
  int arrsayi=5;
  

  sort(arr,&arrsayi);
    
  for( int i = 0; i<arrsayi; i++){

    printf("%d ",arr[i]);

  }
  return 0;
}