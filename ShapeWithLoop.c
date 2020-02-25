#include <stdio.h>

int main(void) {
  int row,trow,i,j,k;
  
  printf("How many rows:");
  scanf("%d",&trow);

    for(row=1; row<=trow; row++){

        for(i=1; i<=trow-row;i++ ){
          printf(" ");
        }
        for(j=1; j<=(2*row)-1;j++){
          printf("*");
        }
        printf("\n");
        
    }

  return 0;
}