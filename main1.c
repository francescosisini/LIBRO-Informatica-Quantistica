#include <complex.h>
#include <stdio.h>
#include <stdlib.h>
#include "libSSQ.h"

extern base1 base_std1;
extern base2 base_std2;
extern base1_1 base_std1_1;
extern base2_2 base_std2_2;

int main()
{

  printf("_____QUBIT SINGOLO____\n");
  
  double complex a = 1+I*2;
  double complex b = 3+I*4;
  
  ket1 psi = crea_ket1(a,b,base_std1);

  op1_1 o = crea_tensore1_1(1,0,0,1,base_std1_1);

  ket1 psip = trasforma_ket1(o,psi);

  printf("Operatore identità:\n",psi.x, psi.y);
  printf("%g+i%g,%g+i%g -> ",psi.x, psi.y);
  printf("%g+i%g,%g+i%g\n",psip.x, psip.y);

  o = crea_tensore1_1(0,1,1,0,base_std1_1);

  psip = trasforma_ket1(o,psi);

  printf("\nOperatore sigma_x:\n",psi.x, psi.y);
  printf("%g+i%g,%g+i%g -> ",psi.x, psi.y);
  printf("%g+i%g,%g+i%g\n",psip.x, psip.y);

  o = crea_tensore1_1(0,I*(-1),I,0,base_std1_1);

  psip = trasforma_ket1(o,psi);

  printf("\nOperatore sigma_y:\n",psi.x, psi.y);
  printf("%g+i%g,%g+i%g -> ",psi.x, psi.y);
  printf("%g+i%g,%g+i%g\n",psip.x, psip.y);

  o = crea_tensore1_1(1,0,0,-1,base_std1_1);

  psip = trasforma_ket1(o,psi);

  printf("\nOperatore sigma_z:\n",psi.x, psi.y);
  printf("%g+i%g,%g+i%g -> ",psi.x, psi.y);
  printf("%g+i%g,%g+i%g\n",psip.x, psip.y);

  printf("_____2 QUBITs____\n");

  a = 1;
  b = 0;
  double complex c = 1;
  double complex d = 0;
  
  
  ket2 psi2 = crea_ket2(a,b,c,d,base_std2);
  printf("Stato di 2 qubit:\n");
  printf("(%g+i%g,%g+i%g)x(%g+i%g,%g+i%g) -> ",a, b,c,d);
  printf("%g+i%g,%g+i%g,%g+i%g,%g+i%g\n\n",psi2.x11, psi2.x12,psi2.x21, psi2.x22);

  a=1;b=0;c=0;d=1;
  psi2 = crea_ket2(a,b,c,d,base_std2);
  printf("(%g+i%g,%g+i%g)x(%g+i%g,%g+i%g) -> ",a, b,c,d);
  printf("%g+i%g,%g+i%g,%g+i%g,%g+i%g\n\n",psi2.x11, psi2.x12,psi2.x21, psi2.x22);

  a=0;b=1;c=1;d=0;
  psi2 = crea_ket2(a,b,c,d,base_std2);
  printf("(%g+i%g,%g+i%g)x(%g+i%g,%g+i%g) -> ",a, b,c,d);
  printf("%g+i%g,%g+i%g,%g+i%g,%g+i%g\n\n",psi2.x11, psi2.x12,psi2.x21, psi2.x22);

  a=0;b=1;c=0;d=1;
  psi2 = crea_ket2(a,b,c,d,base_std2);
  printf("(%g+i%g,%g+i%g)x(%g+i%g,%g+i%g) -> ",a, b,c,d);
  printf("%g+i%g,%g+i%g,%g+i%g,%g+i%g\n\n",psi2.x11, psi2.x12,psi2.x21, psi2.x22);

  
  op2_2 o2 = crea_tensore2_2(
                             1,0,0,0,
                             0,1,0,0,
                             0,0,1,0,
                             0,0,0,1,
                             base_std2_2);

  ket2 psip2 = trasforma_ket2(o2,psi2);
  

  printf("Operatore identità:\n");
  printf("%g+i%g,%g+i%g,%g+i%g,%g+i%g -> ",psi2.x11, psi2.x12,psi2.x21, psi2.x22);
  printf("%g+i%g,%g+i%g,%g+i%g,%g+i%g\n",psip2.x11, psip2.x12,psip2.x21, psip2.x22);

  a=1;b=0;c=0;d=1;
  psi2 = crea_ket2(a,b,c,d,base_std2);

   o2 = crea_tensore2_2(
                             1,0,0,0,
                             0,1,0,0,
                             0,0,0,1,
                             0,0,1,0,
                             base_std2_2);
   psip2 = trasforma_ket2(o2,psi2);

   printf("Operatore CNOT:\n");
  printf("%g+i%g,%g+i%g,%g+i%g,%g+i%g -> ",psi2.x11, psi2.x12,psi2.x21, psi2.x22);
  printf("%g+i%g,%g+i%g,%g+i%g,%g+i%g\n",psip2.x11, psip2.x12,psip2.x21, psip2.x22);
  
}
