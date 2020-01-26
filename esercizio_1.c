#include <complex.h>
#include <math.h>
#include <stdio.h>
#include "libSSQ.h"

extern base1 base_std1;
extern base1_1 base_std1_1;


int main()
{
  printf("_____QUBIT SINGOLO____\n");
  
  double complex a = 1;
  double complex b = 0;
  double complex norm =csqrt( 1/(a*conj(a)+b*conj(b)));
  
  ket1 psi = crea_ket1(a*norm,b*norm,base_std1);

  op1_1 o = crea_tensore1_1(0,1,1,0,base_std1_1);

  ket1 psip = trasforma_ket1(o,psi);

  printf("\nOperatore sigma_x:\n",psi.x, psi.y);
  printf("%g+i%g,%g+i%g -> ",psi.x, psi.y);
  printf("%g+i%g,%g+i%g\n",psip.x, psip.y);
  
}
