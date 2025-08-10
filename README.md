# Second Highest Integer (quick jeepney practice from gent. to karuhatan)

This is a small and quick C programming practice I coded entirely on my phone while riding a jeep.  
The goal is to find the second highest number in a given integer array.

## Screenshot
![Screenshot](ss.jpeg)

## Code
```c
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
    int arr [] = {0,1,2,3,4,5,6,7,8,9};
    int length = sizeof(arr)/sizeof(arr[0]);

    int result = second_highest(arr, length);

    printf("The second highest number in an array is %d", result);

    return 0;
}
```

## The program
- Accepts a hardcoded array of integers
- Finds the second highest value
- Prints the result

## Reason

Just a casual praactice session to keep my coding reflexes sharp, even on the road ^^
