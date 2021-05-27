//Write a program in C to copy the elements of one array into another array.
//Input Format: Input consist of Two lines. First Line contains the number of elements N and the next contains array elements (space separated).
//Output Format: Output consist of a single line, display the array elements( first and second(copied array) array) in the given order with space separated with appropriate statement
//Example
//Input:
//3
//15 10 12
//Output:
//The elements stored in the first array are :
//15 10 12
//The elements copied into the second array are :
//15 10 12

#include<stdio.h>

int main()
{
    //Declare all the variables[N, array a & array b, i] used in the code
    int N,arraya[10],arrayb[10];
    //Read the Value of N using scanf statement
    printf("Enter the value of N\n");
    scanf("%d",&N);
    //Read the array elements using for loop and scanf statment
    printf("Enter the values of Array arraya\n");
    for (int i = 0; i < N ; ++i) {
        scanf("%d",&arraya[i]);


    }
    //Copy the elements of array 'a'[first array] to  array 'b'[second array] using for loop
    for (int i = 0; i < N; ++i) {
        arrayb[i]  = arraya[i];

    }
    //Print the both array elements in using printf statement in the above specified format
    printf("The values in arraya are\n");
    for (int i = 0; i < N ; ++i) {

        printf("%d\t",arraya[i]);
    }
    printf("\n");
    printf("The values in arrayb are\n");
    for (int i = 0; i < N ; ++i) {

        printf("%d\t",arrayb[i]);
    }
    return 0;
}