#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <limits.h>


/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    printf("%s\n", "Imprimimos arreglo: ");
    for (i=0; i < size; i++)
    {
    	printf("| %d - %p",arr[i], &(arr[i]));

    }
    printf("\n");
}

void printArrayPuntero(int *arr[], int size)
{
    int i;
    printf("%s\n", "Imprimimos ordenamiento de los elementos: ");
    for (i=0; i < size; i++)
    {
      printf("| %d - %p", *(arr[i]), arr[i]);
    }
    printf("\n");
}

/*
* Función que implementa el ordenamiento BubbleSort
*/
void bubbleSort(int arr[],int *arrPuntero[], int n)
{
  int i, j;
 for (i = 0; i < n-1; i++)
 {
     for (j = 0; j < n-i-1; j++)
     {
        //Imprimimos lso cambios de referencia de cada iteración
        for (int i = 0; i < n; ++i)
        {
          printf("%p ", arrPuntero[i]);
        }
        printf("\n");
        //Realizamos el swap dentro de las referencias.
        if (*(arrPuntero[j]) > *(arrPuntero[j+1]))
        {
          printf("%s\n", "Swap entre referencias");
          int *punterotemp = arrPuntero[j];
          arrPuntero[j] = arrPuntero[j+1];
          arrPuntero[j+1] = punterotemp;
        }
     }

 }

}

/*
* Función que imprime los segundos restantes para el 2038
*/
void segundosRestantes2038(void)
{
  time_t actual = time(NULL);
  printf("Segundos Restantes para la fecha: %.0f s\n",difftime(INT_MAX, actual));    
}

/*
* Función que imprime la fecha exacta del 2038.
*/
void fechaExacta2038(void)
{
  time_t final = INT_MAX; 
  printf("Local Time\t%s", asctime(localtime(&final)));
  printf("Coordinated Universal Time (UTC)\t%s", asctime(gmtime(&final)));
}

/*
* Función que implementa el ejecicio de ordenamiento por BubbleSort
*/
void ejecutarBubble()
{
  printf("***** Arreglo de siete números ***** \n");
  int arr[7], i;
  int *arrPuntero[7];
  time_t t;
  srand((unsigned) time(&t));
  //Generamos el arreglo con números aleatorios. 
  for(i = 0; i < 7; ++i)
  {
   arr[i] = rand() % 20 + 1;
   arrPuntero[i] = &arr[i];
  }
 int *puntero;
 int n = sizeof(arr)/sizeof(arr[0]);
 printArray(arr, n);
 bubbleSort(arr, arrPuntero, n);
 printArray(arr, n);
 printArrayPuntero(arrPuntero, n);

}

int main()
{

  ejecutarBubble();
  /* 
  
  segundosRestantes2038();
  fechaExacta2038();
  */
 
    return 0;
}
