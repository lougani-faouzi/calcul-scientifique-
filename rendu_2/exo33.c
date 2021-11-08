#include<stdio.h>
int main(){
     
     int i;
     float x=1.401298e-45;
        printf("x a l'etat initiale =%e\n",x);
     	for(i=0;i<146;i++)
	{
		x=x*2.0;
                printf("x=%f  x= %e  i=%d \n",x,x,i);
                
        }

return 0;
}
