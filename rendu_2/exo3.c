#include<stdio.h>
int main(){
     
     int i;
     float x=1.0/10.0;
        printf("x a l'etat initiale =%e\n",x);
     	for(i=0;i<150;i++)
	{
		x=x/2.0;
                printf("x=%f  x= %e  i=%d \n",x,x,i);
                
        }

return 0;
}
