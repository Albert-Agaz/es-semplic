/*Avendo una variabile inizialmente posta a 2, creare un programma in grado di:
- aggiungere 10 alla variabile
- sottrarre 5 dalla variabile
- raddoppiare il valore della variabile
- uscire dal programma stampando il contenuto della variabile*/
#include <stdio.h>//standard input output
int main(){
  int a=2,opzione,c;//b è l opzione nel menu
printf("Menu\n");
printf("scegli un opzione:\n1)somma 10\n2)sottrae 5\n3)raddoppia");
printf("\n");
scanf("%d",&opzione);
if(opzione<=0 || opzione>3)
printf("\nERRORE:la scelta è da 1 a 3\n");
else{
  printf ("ok");
}//fino a qui tutto giusto!!
switch(opzione)
case 1:{printf("%d+10=%d",a,a+10);}  //uso lo switch per le 3 condizioni e ho finito 
/*case 2:
case 3:
   
}
*/


}