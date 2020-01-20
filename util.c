#include <stdio.h>

int main()
{
  for(int i=1;i<=4;i++)
    {
      for(int j=1;j<=4;j++)
        {
          printf("// %i,%i\n",i,j);
          printf("matrice_x_vettore4(v,o.b.e%df%d_e%df%d,ket.b.e1f1);\n",i,j,i,j);
          printf("ketp.x11 += v[0]*o.a%d%d*ket.x11;\n",i,j);
          printf("ketp.x12 += v[1]*o.a%d%d*ket.x11;\n",i,j);
          printf("ketp.x21 += v[2]*o.a%d%d*ket.x11;\n",i,j);
          printf("ketp.x22 += v[3]*o.a%d%d*ket.x11;\n",i,j);
        }
      
      
    }







}
