#include <stdio.h>

int main()
{
  for(int k=0;k<64;k++)
    {
      for(int i=0;i<8;i++)
        {
          for(int j=0;j<8;j++)
            {
              int v=0;
              if(i*8+j==k) v=1;
              printf("%d,",v);
            }
          
          printf("\n");
        }
      printf("\n");
      
    }
  
  
  



}
