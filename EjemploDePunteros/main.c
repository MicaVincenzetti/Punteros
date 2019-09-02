#include <stdio.h>
#include <stdlib.h>

//[] = direcciòn
// Definicion de puntero int*pDato
// invocar *dato
// pasaje &numero = *dato

/*void cambiarDeValor( int unDato); //Dentro del () se pone la funcion o el dato
void cambiarPorReferencia(int* unpDato);// * Es la direcciòn, un puntero
int dameUnEntero();

int main()
{
    int numero;
    numero=22;

    cambiarDeValor(numero);
    printf("Numero = %d \n", numero);

    cambiarPorReferencia(&numero);
    printf("Numero = %d \n", numero);
    return 0;
}

void cambiarDeValor( int unDato)
{
    unDato=99;
    printf("Dato por valor = %d \n", unDato);
}

void cambiarPorReferencia(int* unpDato)
{
    *unpDato=99;
    printf("Dato por referencia = %d \n", *unpDato);
}
*/
// FUNCION QUE DEVUELVE ENTERO
/*void cambiarDeValor( int unDato);
void cambiarPorReferencia(int* unpDato);
int dameUnEntero();

int main()
{
    int unNumero;
    unNumero = dameUnEntero();
    printf("El numero es: %d \n", unNumero);
    return 0;
}
int dameUnEntero()
{
    int aux;
    printf("Ingrese un numero: ");
    scanf("%d", &aux);
    return aux;
}*/

/*
void cambiarDeValor( int unDato);
void cambiarPorReferencia(int* unpDato);
int dameUnEntero(char* mensaje, int max);

int main()
{
    int unNumero;
    unNumero = dameUnEntero("Ingrese su edad: ", 100);
    printf("La edad es: %d \n", unNumero);
    return 0;
}
int dameUnEntero(char* mensaje, int max)
{
    int aux;
    printf("%s", mensaje);
    scanf("%d", &aux);

    while(aux>max)
    {
        printf("%s", mensaje);
        scanf("%d", &aux);
    }
    return aux;
}*/
/*
int dameUnEntero(char* mensaje, int max, int cantidad, int* pNumero);

int main()
{
    int unNumero;
    int sePudo;

    sePudo = dameUnEntero("Ingrese su edad: ", 100, 2, &unNumero);
    if( sePudo == -1)
    {
        printf("No se pudo cargar");
    }else
    {
        printf("La edad es: %d \n", unNumero);
    }

    return 0;
}
int dameUnEntero(char* mensaje, int max, int cantidad, int* pNumero)
{
    int contador = 0;

    printf("%s", mensaje);
    scanf("%d", pNumero);

    while(*pNumero>max)
    {
        contador++;
        printf("%s", mensaje);
        scanf("%d", pNumero);

        if(contador==cantidad)
        {
            return -1;
        }

    }
    return 0; // o se puede poner return 1;
}*/

int DameUnEntero(char* mensaje,int max,int cantidad,int *pNumero);
int estaEntreRangos(int superior,int inferior, int elNumero);
int main()
{
    int unNumero;
    int sePudo;
    sePudo=DameUnEntero("ingresa tu edad :",100,2,&unNumero);
    if(sePudo==-1)
    {
        printf("no se pudo cargar");
    }else
    {
          printf("el numero es :%d",unNumero);
    }
    return 0;

    if(estaEntreRangos(100,0,22)==0)
    {

    }else{
    }
     if(estaEntreRangos(100,0,unNumero)==0)
    {

    }else{

    }


}
int estaEntreRangos(int superior,int inferior, int elNumero)
{
    if(elNumero<superior && elNumero>inferior)
    {
        return 0;
    }
    return 1;
}



int DameUnEntero(char* mensaje,char* mensajeError,int max,int cantidad,int *pNumero){
    int contador=0;
    printf("%s",mensaje);
    scanf("%d",pNumero);
    while(*pNumero>max){
         if(contador==cantidad){
            return -1;
        }
        contador++;
        printf("%s",mensajeError);
        scanf("%d",pNumero);

    }
    return 0;
}

