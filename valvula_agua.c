#include <stdio.h>
#include <stdlib.h>


int main() 
{
	float cont_agua, cantidad, cant_paso, agua, porcentaje;
	char resp;

    printf("ingrese la cantidad de agua que contiene el tanque: ");
	scanf("%f", &cantidad);
   
    printf("desea abrir la valvula de agua: ");
   resp=tolower(getch());
    agua=cantidad;
    while(resp=='s')
    {   
        printf("cantidad de agua que paso: ");
		scanf("%f", &cant_paso); 
    	
		agua=(agua-cant_paso);
		printf("\n la cantidad de agua que quedo en el tanque es: %.2f",agua);
		if(agua>=1150 && agua<=1500)
    	{
    		printf("\n\t\t LA CONDICION DEL TANQUE ES NORMAL");
		}
		
		if(agua<1150)
        {
        	printf("\n\t\t ALERTA..!! LA CONDICION DEL TANQUE ES DE CUIDADO ");	
		}    	
	  
		  printf(" \n desea abrir la valvula de agua : ");
          resp=tolower(getch());   
	}
   
    printf("\n la cantidad de agua que quedo en el deposito es: %.2f",agua);
    porcentaje=(agua*100/cantidad);
    
    printf("\n el porcentaje de agua que queda en el tanque es: %.2f%%",porcentaje);
	return 0;
}
