#include<stdio.h>

 
int main(){
    int arrayInt[] = {1,2,3,4,5};
    int n = sizeof(arrayInt) / sizeof(arrayInt[0]);

    for(int i = 0; i < 5; i++) {
        printf("array [%d] = %d\n", i, arrayInt[i]);
    }
        printf("độ dài của mảng là: %d\n", n);



    return 0;
}