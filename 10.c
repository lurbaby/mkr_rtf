#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>

int find_max(int *arr, int size);
int find_min(int *arr, int size);


int main(){

    setlocale(LC_ALL, "ukr");
    const int size = 10;
    int arr[size];
    srand(time(NULL));


    for (int i = 0; i < size ; i++){
        arr[i] = (rand() % 101) + 100;
        printf("%d ", arr[i]);
    }


    printf("\nНайбільший елемент: %d", find_max(arr,size));
    printf("\nНайменший елемент: %d", find_min(arr,size));

    printf("\nСумма найбільшого та найменшого: %d", find_max(arr,size) + find_min(arr,size));


    return 0;
}

int find_max(int *arr, int size){
    int max= arr[0];

    for (int i = 0; i < size ; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}


int find_min(int *arr, int size){
    int min= arr[0];

    for (int i = 0; i < size ; i++) {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}