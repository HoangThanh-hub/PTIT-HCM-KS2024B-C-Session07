#include<stdio.h>


int main(){
    

    int n;
    printf("nhập n: ");
    scanf("%d", &n);
    int array[n];
    for(int i = 0;i < n; i++){

        printf("array [%d] = ", i);
        scanf("%d", &array[i]);
    }





    return 0;
}