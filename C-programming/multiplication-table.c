#include <stdio.h>

int main()
{
    int n;
    
    printf("how many rows do you want your multiplication table to include? ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            printf("%3d ", j * i);
        }
        printf("\n");
    }
}