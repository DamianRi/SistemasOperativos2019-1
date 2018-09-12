#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <limits.h>
 
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
    {
        //printf("V %d = D %p ",arr[i], &(arr[i]));
        //printf("%p ",&(arr[i]));
    	printf("%d ",arr[i]);

    }
    printf("\n");
}

// A function to implement bubble sort
void bubbleSort(int arr[], int arrD[],int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)      
       // Last i elements are already in place   
       for (j = 0; j < n-i-1; j++) 
           if (arr[j] > arr[j+1])
           {	              	
              	swap(&arr[j], &arr[j+1]);
              	swap(&arrD[j], &arrD[j+1]);
              	//printArray(arrD, n);//Cada que se haga un Swap imprimimos el arreglo            	
           }
}
 
void segundosRestantes2038(void)
{
    time_t actual = time(NULL);
    printf("Segundos Restantes para la fecha: %.0f s\n",difftime(INT_MAX, actual));    
}

void fechaExacta2038(void)
{
	time_t final = INT_MAX; 
    printf("Local Time\t%s", asctime(localtime(&final)));
    printf("Coordinated Universal Time (UTC)\t%s", asctime(gmtime(&final)));
}
 
int main()
{
	
	int arrD[7];
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int *puntero;
    for (int i = 0; i < 7; ++i)
    {
    	puntero = &arr[i];
    	printf("%p\t", puntero);
    	arrD[i] = (int)puntero;
    }
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Imprimimos el arreglo: \n");
    printArray(arr, n);
    printArray(arrD, n);
    bubbleSort(arr,arrD, n);
    printf("Imprimimos el arreglo: \n");
    printArray(arr, n);
    printArray(arrD, n);

/*
    segundosRestantes2038();
    fechaExacta2038();
*/
 
    return 0;
}
