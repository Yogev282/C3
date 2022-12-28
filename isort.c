#include <stdio.h>

void shift_element(int* arr, int i){

    int tmp = *(arr + i);
    for ( int* j = arr+i ; j > arr ; j--){
        *j = *(j-1);
    }
    *arr = tmp;
}

void insertion_sort(int* arr , int len){
    int key, j;
    int i = 1;
    int flag;
    while(i < len){
        flag = 0;
        key = *(arr+i);
        j = i;
        while(j > 0  && *(arr+j-1) > key){
            flag=1;
            j--;
        }
        if(flag){
            shift_element((arr+j) , i-j);
        }
        i++;
    }
}



int main(){
    int arr[15] = {5,6,2,8,2,1,5,6,8,4,47,24,3,12,19};
    int* k = arr;
    insertion_sort(k,15);
    for(int loop = 0; loop < 15; loop++)
        printf("%d ", arr[loop]);
}
