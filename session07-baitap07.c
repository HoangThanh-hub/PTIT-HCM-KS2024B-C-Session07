#include<stdio.h>


int main(){
    

    int n;
    printf("nhập n: ");
    scanf("%d", &n);
    int array[n];
    for(int i = 0;i < n; i++){

        
        do{
        printf("array [%d] = ", i);
        scanf("%d", &array[i]);
        } while(array[i] % 2 ==0);
    }





    return 0;
}