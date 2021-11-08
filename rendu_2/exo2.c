#include<stdio.h>

int main(){
	
	  float x,y,z;
		x=1; // 
		y=1.40129846432e-45; // y=(0.00000000000000000000001 en base bin)*2^-126  
                // j ai choisi y comme chiffre sous-normaux (plus petit) pour bien avoir la précision 
                              
                z=x+y;
                printf("%e\n",z);  
                printf("%f",z)
return 0;
}
