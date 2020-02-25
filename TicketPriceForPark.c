#include <stdio.h>

float ucrethesapla(int saat){
  float bclock;
  float ucret;
  bclock =saat-3;
  if(bclock<=0){

    ucret=3;
    return ucret;
  }
  //17 saatten sonra 10 TLyi geçiyor bu sebeple 14 den aşağısı if'e giriyor.
  else if(bclock>0&& bclock<=14){
    float ucret2=0;

    for(int i= 1; i<=bclock; i++ ){
      
      ucret2+= 0.50;
     
     
    }
    return ucret2+3;
  }
  return 10;
}
int main(void) {
  int saat;
  float asucret;
  printf("How many hours you stay:");
  scanf("%d",&saat);
  asucret=ucrethesapla(saat);
  printf("Price = %.2f TR",asucret);
  return 0;
}