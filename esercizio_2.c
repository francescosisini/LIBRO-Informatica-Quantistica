#include <complex.h>
#include <math.h>
#include <stdio.h>
#include "libSSQ.h"

extern base2 base_std2;
extern base2_2 base_std2_2;


int main()
{
  printf("_____2 QUBITs____\n");

  double complex a = 1;
  double complex b = 0;
  double complex c = 1;
  double complex d = 0;

  double complex norm1 =
    csqrt(1/(a*conj(a)+b*conj(b)));
  double complex norm2 =
    csqrt(1/(c*conj(c)+d*conj(d)));
  
  ket2 psi2 = crea_ket2(a*norm1,b*norm1,c*norm2,d*norm2,base_std2);

  op2_2 o2 = crea_tensore2_2(
                       1,0,0,0,
                       0,1,0,0,
                       0,0,0,1,
                       0,0,1,0,
                       base_std2_2);
  
 ket2  psip2 = trasforma_ket2(o2,psi2);

  printf("Operatore CNOT:\n");
  printf("%g+i%g,%g+i%g,%g+i%g,%g+i%g -> ",psi2.x11, psi2.x12,psi2.x21, psi2.x22);
  printf("%g+i%g,%g+i%g,%g+i%g,%g+i%g\n",psip2.x11, psip2.x12,psip2.x21, psip2.x22);

  a = 0;
  b = 1;
  c = 0;
  d = 1;

  norm1 =
    csqrt(1/(a*conj(a)+b*conj(b)));
  norm2 =
    csqrt(1/(c*conj(c)+d*conj(d)));

  psi2 = crea_ket2(a*norm1,b*norm1,c*norm2,d*norm2,base_std2);
  
  psip2 = trasforma_ket2(o2,psi2);
  

  printf("Operatore CNOT:\n");
  printf("%g+i%g,%g+i%g,%g+i%g,%g+i%g -> ",psi2.x11, psi2.x12,psi2.x21, psi2.x22);
  printf("%g+i%g,%g+i%g,%g+i%g,%g+i%g\n",psip2.x11, psip2.x12,psip2.x21, psip2.x22);
  
}
