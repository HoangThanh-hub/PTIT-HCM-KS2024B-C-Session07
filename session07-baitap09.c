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
    printf("các phần tử nằm trên đường biên là: ");
    for(int i = 0; i < a ; i++){

        for(int j=0; j<b; j++){
            if(array[i][j] == array [0][j]){
                printf("%d, ", array[i][j]);
            }else {
           
            if(array[i][j] == array [i][0]){
                printf("%d, ", array[i][j]);
                if(i==(a-1)){
                    continue;
                }
            }
             if(array[i][j] == array [i][b-1]){       
                printf("%d, ", array[i][j]);
                 if(i==(a-1)){
                    continue;
                }
            }

            }
           
            if(array[i][j] == array [a-1][j]){
                printf("%d, ", array[i][j]);
            }
        }
    }

    printf("\n");
    


    return 0;
}