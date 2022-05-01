#include <stdio.h> // Biblioteca

//Variables
int temperatura;

//Procedimiento
void preguntaInicial();
void procesoTemperarura();

//Inicio Algoritmo
int main (){
	preguntaInicial();
    procesoTemperarura();
    
	return 0;
}
//Fin Algoritmo

//Implemetación
void preguntaInicial(){
	printf("\tServicio de meteorologia\n\n");
	printf("Ingrese la temperatura actual: ");
	scanf("%d",&temperatura);
}

void procesoTemperarura(){
	if (temperatura <=10)
	{
		printf("\nMucho Frio");
	}
	else{
		if (temperatura > 10 && temperatura <= 15)
		{
			printf("\nPoco Frio");
		}
		else{
			if(temperatura > 15 && temperatura <= 25)
			{
				printf("\ntemperatura Normal");
			}
			else{
				if(temperatura > 25 && temperatura <=30)
				{
					printf("\nPoco Calor");
				}
				else{
					if(temperatura > 30 && temperatura <=45)
					{
						printf("\nMucho calor");
					}
				}
			}
		}
    }
}
