#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
int lonelyinteger(int a_size, int* a) {
    int flag=1,i,k;
    for(i=0;i<a_size;i++)
       {
       flag=1;
       for(k=0;k<a_size;k++)
          {
          if(i != k && a[i] == a[k]]
              {
              flag=0;
          }
       }
       if(flag)
          {
          return a[i];
       }
   }
return 0;

          
       
