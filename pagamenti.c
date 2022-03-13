//input importo 
#include<stdio.h>
int main(void){
  int importo,a,b,c,d,e,f;
printf("inserisci l' importo:\t");
scanf("%d",&importo);

if(importo==0)printf("errore\n");

printf("per pagare l' importo puoi usare:\n");

        printf(" banconota 20$:%d\n",importo/20);

 a=importo/20;//metafase
 b=importo-(a*20);
       printf(" banconota 10$:%d\n",b/10);

  c=b/10;
  d=importo-(c*10)-(a*20);
       printf(" banconota 5$:%d\n",d/5); 
  
  e=d/5;
  f=importo-(e*5)-(c*10)-(a*20);
        printf(" banconota 1$:%d\n",f/1);


return 0;
}

