#include<stdio.h>


int main(){
    int a,b;

    printf("nhập a: ");
    scanf("%d", &a);
    printf("nhập b: ");
    scanf("%d", &b);

    int array[a][b];

    for(int i = 0; i < a ; i++){

        for(int j=0; j<b; j++){
            printf("nhập phân tử thứ %d của mảng %d: ", j,i);
            scanf("%d", &array[i][j]);
        }
    }
    for(int i = 0; i < a ; i++){

        for(int j=0; j<b; j++){
            
            printf("%d, ",array[i][j]);
        }
        printf("\n");
    }
    


    return 0;
}