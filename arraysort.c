int main(){

    int i, j, temp, a[5];

    for(i=0; i<5; i++){
        printf("Enter a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("\nBefore sorting: \n\n");

    for(i=0; i<5; i++){
        printf("a[%d]: %d\t\t", i, a[i]);
    }

    for(i=0; i<5; i++){
        for(j=(i+1); j<5; j++){
            if(a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("\n\nAfter sorting: \n\n");

    for(i=0; i<5; i++){
        printf("a[%d]: %d\t\t", i, a[i]);
    }

}