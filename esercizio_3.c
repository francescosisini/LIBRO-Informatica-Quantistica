#include <complex.h>
#include <math.h>
#include <stdio.h>
#include "libSSQ.h"

extern base2 base_std2;
extern base2_2 base_std2_2;


int main()
{
  printf("_____Dense Coding____\n\n");

  printf("1)Viene creato e condiviso uno stato entangled |00>+|11> tra Fabbri e Magri");
  double complex norm = 1/sqrt(2);
  //Non può essere costruito come il prodotto di due ket
  ket2 ent_k = {1*norm,0,0,1*norm,base_std2};

  //Operatore XxI
  op2_2 o2 = crea_tensore2_2(
                       0,1,0,0,
                       1,0,0,0,
                       0,0,0,1,
                       0,0,1,0,
                       base_std2_2);
  
 ket2  psip2 = trasforma_ket2(o2,ent_k);
 
 printf("\n\n2)Fabbri codifica il valore 1 (SUD) usando l'operatore XxI:\n\n");
 
 printf("\t%g+i%g,%g+i%g,%g+i%g,%g+i%g -> ",ent_k.x11, ent_k.x12,ent_k.x21, ent_k.x22);
 printf("\t%g+i%g,%g+i%g,%g+i%g,%g+i%g\n",psip2.x11, psip2.x12,psip2.x21, psip2.x22);

 printf("\n3)Fabbri invia il proprio qubit a Magri\n");
 
 printf("\n4)Magri applica un operatore CNOT e uno HxI:\n\n");
 //Passo1: trasforma con Cnot
 o2 = crea_tensore2_2(
                       1,0,0,0,
                       0,1,0,0,
                       0,0,0,1,
                       0,0,1,0,
                       base_std2_2);
  
 ket2 psipp2 = trasforma_ket2(o2,psip2);
 
 printf("\t%g+i%g,%g+i%g,%g+i%g,%g+i%g -> ",psip2.x11, psip2.x12,psip2.x21, psip2.x22);
 printf("\t%g+i%g,%g+i%g,%g+i%g,%g+i%g\n",psipp2.x11, psipp2.x12,psipp2.x21, psipp2.x22);

 double complex h = norm*1;
 o2 = crea_tensore2_2(
                       h,0,h,0,
                       0,h,0,h,
                       h,0,-h,0,
                       0,h,0,-h,
                       base_std2_2);
  
 ket2 psippp2 = trasforma_ket2(o2,psipp2);
 
 printf("\t%g+i%g,%g+i%g,%g+i%g,%g+i%g -> ",psipp2.x11, psipp2.x12,psipp2.x21, psipp2.x22);
 printf("\t%g+i%g,%g+i%g,%g+i%g,%g+i%g\n",psippp2.x11, psippp2.x12,psippp2.x21, psippp2.x22);
 printf("\n5)Magri ha ricevuto |01> cioè SUD\n\n");

  
}
