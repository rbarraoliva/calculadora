
#include<stdio.h>


#define PI 3.1415926536


/*************************************** MAIN ************************************************/

int main()
{
	int opcion=0;
	do
	{
		
		printf("\n MENU\n");
		printf(" 1. Area cuadrado.\n");
		printf(" 2. Area triangulo.\n");
		printf(" 3. Area circulo.\n");
		printf(" 4. Area paralelogramo.\n");
		printf(" 5. Perimetro cuadrado.\n");
		printf(" 6. Perimetro triangulo.\n");
		printf(" 7. Perimetro circulo.\n");
		printf(" 8. Perimetro paralelogramo.\n");
		printf("\n");
		printf(" 0. Salir");
		printf("\n\n Elige una opcion: ");
		scanf("%d", &opcion);
		switch(opcion)
		{
			case 0:
				break;
			case 1:
				area_cuadrado(lado);
				break;
			case 2:
				area_triangulo(altura, base);
				break;
			case 3:
				area_circulo(radio);
				break;
			case 4:
				area_paralelogramo(altura, base);
				break;

            case 5:
                perimetro_cuadrado (lado);
                break;
            case 6:
                perimetro_triangulo_isoceles(altura, base);
                break;
            case 7:
                perimetro_circulo(radio);
                break;
            case 8:
                perimetro_paralelogramo (altura, base);
                break;


			default:
				printf("\n Opcion no valida.");
			
		}
	}
	while(opcion !=0);
return 0;
}


void area_cuadrado (float lado)

{
	printf("\n Introduce el valor del lado: ");
	scanf("%f", &lado);
	printf("\n El area del cuadrado es:  %.2f", lado*lado);

}
void perimetro_cuadrado (float lado)
{
    printf("\n Introduce el valor del lado: ");
	scanf("%f", &lado);
	printf("\n El perimetro del cuadrado es:  %.2f", 4*lado);
	
}

void area_triangulo (float altura, float base)

{
	printf("\n Introduce la altura: ");
	scanf("%f", &altura);
	printf("\n Introduce la base: ");
	scanf("%f", &base);
	printf("\n El area del triangulo es:  %.2f", base*altura/2);

}
void perimetro_triangulo_isoceles(float altura, float base)
{
    printf("\n Introduce la altura: ");
	scanf("%f", &altura);
	printf("\n Introduce la base: ");
	scanf("%f", &base);
	printf("\n El perimetro del triangulo es:  %.2f", base+(altura*2));
	
}


void area_circulo(float radio)

{
	printf("\n Introduce el radio: ");
	scanf("%f", &radio);
	printf("\n El area del circulo es:  %.2f", PI*radio*radio);
	
}
void perimetro_circulo(float radio)
{
    printf("\n Introduce el radio: ");
	scanf("%f", &radio);
	printf("\n El perimetro del circulo es:  %.2f", PI*radio*2);
	
}


void area_paralelogramo (float altura, float base)
{
	printf("\n Introduce la altura: ");
	scanf("%f", &altura);
	printf("\n Introduce la base: ");
	scanf("%f", &base);
	printf("\n El area del paralelogramo es:  %.2f", altura*base);

}
void perimetro_paralelogramo (float altura, float base)
{
    printf("\n Introduce la altura: ");
	scanf("%f", &altura);
	printf("\n Introduce la base: ");
	scanf("%f", &base);
	printf("\n El perimetro del paralelogramo es:  %.2f", (2*altura+2*base));
	
}
