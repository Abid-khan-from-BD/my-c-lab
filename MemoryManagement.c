#include<stdio.h>
#include<stdlin.h>

void nolead(){
    int *arr = malloc(5 * sizeof(int));
    if(arr == NULL){
        printf("Memory allocation failed");
        return 0;
    } 
    for(int i=0; i<5; i++){
        arr[i] = i * 10;
        printf("%d", arr[i]);
    }
    free(arr);
    arr = NULL;
}
int main(){
    for (int i = 0; i<100; i++){
        nolead();
    }
    printf("Finished without memory leak");
    return 0;
}