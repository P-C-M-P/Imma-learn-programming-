#include<stdio.h>
#include<math.h>

int main(){
    
    int nums[4] = {0};
    int current_largest = 0;
    
    int i = 0;
    
    do{
        printf("Enter a number: ");
        scanf(" %c", &nums[i]);
        
        if(i >= 1){
            if(nums[i] > nums[(i-1)]){
               current_largest = nums[i]; 
            }
            else{
                current_largest = nums[(i-1)];
            }
        }
        else{
            current_largest = nums[i];
        }
        
        i++;
        
    }while(i < 4);
    
    printf("the largest number is %d", current_largest);
}