#include <stdio.h>
 
int main()
{
    int Arr[4] = {11, 21, 51, 101};

    printf("Base address of array : %d\n", Arr);
    printf("Base address of first elemet of array : %d\n", &(Arr[0]));
    printf("Base address of second elemet of array : %d\n", &(Arr[1]));
    printf("First element is : %d\n", Arr[0]);
    printf("Size os whole Array is : %d\n", sizeof(Arr));
    printf("Size of second element of array : %d\n", sizeof(Arr[1]));

    return 0;
} 