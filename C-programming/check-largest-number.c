
// so either is a valid solution although they kinda suck overall, do fix them if you'd like
// the third option is the better solution


/*#include<stdio.h>

int main(){
    
    int nums[4] = {0};
    int current_largest = 0;

    for(int i = 0;i < 4;i++){
        printf("Enter a number: ");
        scanf("%d", &nums[i]);
        
        if(i > 0){
            if(nums[i] > current_largest){
                current_largest = nums[i];
            }
        }
        else{
            current_largest = nums[i];
        }
    }
    
    printf("the largest number is %d", current_largest);
}*/

#include<stdio.h>

int main(){
    
    int nums[4] = {0};
    int current_largest = 0;
    
    int i = 0;

    do{
        printf("Enter a number: ");
        scanf("%d", &nums[i]);
        
        if(i >= 1){
            if(nums[i] > current_largest){
                current_largest = nums[i];
            }
        }
        else{
            current_largest = nums[i];
        }
        
        i++;
    }while(i < 4);
    
    printf("the largest number is %d", current_largest);
}

/*#include<stdio.h>

int main(){
    
    int current_largest = 0;
    int num;
    
    int i = 0;

    do{
        printf("Enter a number: ");
        scanf("%d", &num);
        
        if(i == 0 || num > current_largest){
            current_largest = num;
        }
        i++;
    }while(i < 4);
    
    printf("the largest number is %d", current_largest);
}
*/
