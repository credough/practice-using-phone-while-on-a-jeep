#include <stdio.h>
#include <stdlib.h>

int second_highest(int arr[], int length){
    int max_1 = 0;
    int max_2 = 0;

    if (arr[0] > arr[1]){
        max_1 = arr[0];
        max_2 = arr[1];
    } else if (arr[0] < arr[1]){
        max_1 = arr[1];
        max_2 = arr[0];
    }
for (int i = 2; i < length; i++){
    if (arr[i] > max_1){
        max_2 = max_1;
        max_1 = arr[i];
    }
}
 return max_2;
}

int main()
{

    int arr [] = {2,4,6,8,10,12,14,16,18,20};
    int length = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < length; i++){
    printf("arr[%d] - %d\n", i, arr[i]);
    }

    printf("\n");

    int result = second_highest(arr, length);

    printf("The second highest number in an array is %d", result);

    printf("\n");

    return 0;
}
