#include <stdio.h>
#include <math.h>

int prime(int start, int end){

    int flag,temp=0,i;
    for(i=start; i<=end; i++)
    {
        flag =0;
        for(int j=1; j<=i; j++)
        {
            if(i % j == 0)
                flag++;
        }
        if (flag <3)
        {
            temp=1;
            printf("%d\t",i);
        }
    }
    return temp;
}

int main(){

    int i, start, end;
    printf("Enter starting and ending value: ");
    scanf("%d %d", &start, &end);
    if(prime(start, end) == 1)
        printf("");
    
}