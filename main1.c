#include <complex.h>
#include <stdio.h>
#include <stdlib.h>
#include "libSSQ.h"

extern base1 base_std1;
extern base2 base_std2;
extern base3 base_std3;
extern base1_1 base_std1_1;
extern base2_2 base_std2_2;
extern base3_3 base_std3_3;

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
  

 
  a=1;b=0;c=1;d=0;
  int me = 1;
  int mf= 0;
  ket3  psi3 = crea_ket3(a,b,c,d,me,mf,base_std3);
  
  op3_3 o3 = crea_tensore3_3
    (
     1,0,0,0,0,0,0,0,
     0,1,0,0,0,0,0,0,
     0,0,1,0,0,0,0,0,
     0,0,0,1,0,0,0,0,
     0,0,0,0,1,0,0,0,
     0,0,0,0,0,1,0,0,
     0,0,0,0,0,0,1,0,
     0,0,0,0,0,0,0,1,
     base_std3_3);

  ket3 psip3 = trasforma_ket3(o3,psi3);
  
  printf("Operatore Identita':\n");
  printf("%g+i%g,%g+i%g,%g+i%g,%g+i%g,%g+i%g,%g+i%g,%g+i%g,%g+i%g -> ",
         psi3.x111,
         psi3.x112,
         psi3.x121,
         psi3.x122,
         psi3.x211,
         psi3.x212,
         psi3.x221,
         psi3.x222
         );
  printf("%g+i%g,%g+i%g,%g+i%g,%g+i%g,%g+i%g,%g+i%g,%g+i%g,%g+i%g",
         psip3.x111,
         psip3.x112,
         psip3.x121,
         psip3.x122,
         psip3.x211,
         psip3.x212,
         psip3.x221,
         psip3.x222
         );

  a=1;b=0;c=0;d=1;me = 1;mf= 0;
  psi3 = crea_ket3(a,b,c,d,me,mf,base_std3);
  
  o3 = crea_tensore3_3
    (
     1,0,0,0,0,0,0,0,
     0,1,0,0,0,0,0,0,
     0,0,1,0,0,0,0,0,
     0,0,0,1,0,0,0,0,
     0,0,0,0,1,0,0,0,
     0,0,0,0,0,1,0,0,
     0,0,0,0,0,0,0,1,
     0,0,0,0,0,0,1,0,
     base_std3_3);

  psip3 = trasforma_ket3(o3,psi3);
  
  printf("Operatore CCNOT:\n");
  printf("%g+i%g,%g+i%g,%g+i%g,%g+i%g,%g+i%g,%g+i%g,%g+i%g,%g+i%g -> ",
         psi3.x111,
         psi3.x112,
         psi3.x121,
         psi3.x122,
         psi3.x211,
         psi3.x212,
         psi3.x221,
         psi3.x222
         );
  printf("%g+i%g,%g+i%g,%g+i%g,%g+i%g,%g+i%g,%g+i%g,%g+i%g,%g+i%g",
         psip3.x111,
         psip3.x112,
         psip3.x121,
         psip3.x122,
         psip3.x211,
         psip3.x212,
         psip3.x221,
         psip3.x222
         );
  

  
  
}
