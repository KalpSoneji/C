#include <stdio.h>
#define size 5

int main(){

    int i, j, temp, a[size];

    for(i=0; i<size; i++) //Array Declaration
        scanf("%d", &a[i]);

    printf("\nArray before sorting: ");

    for(i=0; i<size; i++)
        printf("\t%d", a[i]); //Displaying elements before sorting
   
    for(i=0; i<size; i++){ 
        for(j=0; j<(size - 1); j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }//End of if
        }//End of inner loop
    }//End of outer loop

    printf("\n\nArray after sorting: ");

    for(i=0; i<size; i++)
        printf("\t%d", a[i]); //Displaying elements after sorting
  
}