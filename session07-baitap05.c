#include<stdio.h>

int array[5];
int main(){
    
    
    for(int i = 0; i < 5; i++){
        printf("array [%d]: ", i);
        scanf("%d", &array[i]);
    }
    int max = array[0], min = array[0];
    for(int i=0; i < 5; i++){
        if(array[i] > max){
         max = array[i];
        }
    }
    for(int i=0; i < 5; i++){
        if(array[i] < min){
         min = array[i];
        }
    }
    printf("phần tử lớn nhất trong mảng là: %d\n", max);
    printf("phần tử nhỏ nhất trong mảng là: %d\n", min);


    return 0;

}