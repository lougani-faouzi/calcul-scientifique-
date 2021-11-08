#include<stdio.h>
#include<math.h>
/* Program 5: differences centrées */

int main(){
        FILE *pipe = popen("gnuplot -persist","w");
        fprintf(pipe, "set logscale xy\n");
        fprintf(pipe, "set xrange [1e-20:1e-0]\n");
        fprintf(pipe, "set yrange [1e-9:1e-0]\n");
        fprintf(pipe, "set xlabel 'h'\n");
        fprintf(pipe, "set ylabel 'erreure :fabs(deriv-diffquo)'\n");  
        FILE *temp=fopen("donnees1.txt","w");
       	int n = 1,i;
	double x = 1.0, h = 1.0, deriv=cos(x), diffquo, error;
	printf(" deriv =%13.6e \n", deriv);
	printf(" h      diffquo       abs(deriv - diffquo) \n");
	/* Let h range from 10~{-1} down to 10~{-20} */

	while(n <= 20) {
                                  
		h = h/10; /* h = 10~(-n) */
		diffquo = (sin(x+h)-sin(x-h))/(2*h); /* differences centrales  */
		error = fabs(deriv-diffquo);
                fprintf(temp,"%5.1e%13.6e\n",h,error);
                printf("%5.1e  %13.6e %13.6e \n", h, diffquo, error);
		n++;
		       }
               fprintf(pipe, "plot'donnees.txt'\n"); 
          fclose(temp);
        	
        
 pclose(pipe);
return 0;
}
