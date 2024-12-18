#include<stdio.h>

int array[5];
int main(){
    
    for(int i = 0; i < 5; i++){
        printf("array [%d]: ", i);
        scanf("%d", &array[i]);
    }
    int flag = 5;

     for(int i = 0; i< 5; i++){
        if(array[i] % 2 == 0){
             flag = flag - 1 ;
        }
    }
    if (flag ==5){
        printf("mảng không có chứa số chẵn");
    } else{
        printf("các phần tử là số chẵn trong mãng là: ");
        for(int i = 0; i< 5; i++){
        if(array[i] % 2 == 0){
            printf("%d, ", array[i]);
        }
    }
    }
    printf("\n");



    return 0;

}
