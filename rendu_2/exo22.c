#include<stdio.h>

int main(){
	
	  double x,y,z;
		x=1.0; //  
                y=4.940656458412e-324;  
          // meme pour le double j ai choisi y comme chiffre sous-normaux (plus petit) 
          // pour bien avoir la précision 
                              
                z=x+y;
                printf("%.24e\n",z);  
                printf("%f",z);
return 0;
}
