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
    int arr[50];
    for(int i = 0; i < 50; i++){
        scanf("%d", &arr[i]);
    }
    insertion_sort(arr, 50);
    for(int i = 0; i < 50; i++){
        printf("%d", arr[i]);
        if(i <49)
            printf(",");
    }

}
