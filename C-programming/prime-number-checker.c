#include <stdio.h>

//so this code could be more succinct but i stuck with this cause why not, as for how, 
//you can just replace the (n/2) in line 14 to just sqrt(n)

int main()
{
    int n;
    
    printf("enter your prime number candidate: ");
    scanf("%d", &n);
    
    int c = 0;
    for(int i = 2; i <= (n/2); i++){
        
        if((n%i) == 0){
            c++;
        }
    }
    
    if(n == 0 || n == 1){
        printf("sorry not prime!!\n");
        
    }
    else if(c == 0){
       printf("Congrats the number %d is prime!!", n);
    }
    else{
        printf("sorry the number %d isn't prime!!!\n", n);
        printf("it has %d factors in total!!!\n", c+=2);
    }
}