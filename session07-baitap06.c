#include<stdio.h>

int array[5];
int main(){
    
    
    for(int i = 0; i < 5; i++){
        printf("array [%d]: ", i);
        scanf("%d", &array[i]);
    }
    for(int i = 0; i < 5; i++){

        if(array[i] % 2 == 0){
            array[i] = array[i] + 3;
        }else {
            array[i] = array[i] + 2;
        }
    }
    for(int i = 0; i < 5; i++){

        printf("%d, ", array[i]);
    }
    printf("\n");



    return 0;
}