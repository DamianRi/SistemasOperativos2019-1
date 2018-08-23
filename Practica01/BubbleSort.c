#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/*
int main(int argc, char const *argv[])
{
	return 0;
}*/

#include <stdio.h>
 
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
              	printArray(arrD, n);//Cada que se haga un Swap imprimimos el arreglo            	
           }
}
 
void segundosRestantes()
{
    time_t actual;
    time(&actual);
    printf("Difference is  %.0f seconds\n",difftime(2147483647, actual));
}

 
// Driver program to test above functions
int main()
{
	/*
	int arrD[7];
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int *puntero;
    for (int i = 0; i < 7; ++i)
    {
    	puntero = &arr[i];
    	printf("%p\n", puntero);
    	arrD[i] = (int)puntero;
    }
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Unsorted array: \n");
    printArray(arr, n);
    printArray(arrD, n);
    bubbleSort(arr,arrD, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    

	time_t t = time(NULL);
	struct tm *tm = localtime(&t);
	char fechayhora[100];

	strftime(fechayhora, 100, "%s", tm);
	printf ("Hoy es: %s\n", fechayhora);

	int tiempo = atoi(fechayhora);

    time_t epoch = tiempo;//2147483647
    printf("%ld seconds since the epoch began\n", (long)epoch);
    printf("%s", asctime(gmtime(&epoch)));

    int x = 2147483647 - tiempo;
    int dias = x/86400;
    printf("Segundos faltantes %d\n", x);
    printf("Días faltantes %d\n", dias);
	*/
    segundosRestantes();
    return 0;

}
