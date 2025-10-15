#include <stdio.h>
#include <stdlib.h>

int factorial(int n)
{
    int res = 1;
    int i;
    //for (i is from 1 to n, increment 1) 
    for (i=1; i<=n;i++)
        res = res * i;   
            
    return res;
}


int combination(int n, int r)
{
    return factorial(n)/factorial(n-r)/factorial(r);//factorial computation
}


int main(int argc, char *argv[]){
    
  int n, r;
  int res;
  
  printf("Input a and r:");
  scanf("%d %d", &n, &r); 
   
  res = combination(n, r);
  
  printf("Combination result is:%i\n",res); 
  system("PAUSE");	
  return 0;
}
