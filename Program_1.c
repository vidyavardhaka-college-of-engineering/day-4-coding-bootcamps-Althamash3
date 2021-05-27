//Write a C program to get the integer array from the user and print it in the given order.
//Input Format: Input consist of Two lines. First Line contains the number of elements N and the next contains array elements (space separated).
//Output Format: Output consist of a single line, display the array elements in the given order with space separated.
//Example:
//Input:
//5
//1 5 10 50 123
//Output:
//1 5 10 50 123
#include<stdio.h>

int main()
{
    //Declare all the variables[N, array a, i] used in the code
    int N,i;
    int a[6];
    //Read the Value of N using scanf statement
    printf("Enter the value of N\n");
    scanf("%d",&N);
    //Read the array elements using for loop and scanf statment
    printf("Enter the values of Array\n");
    for (int j = 0; j < N ; ++j)
    {
        scanf("%d",&a[j]);

    }

    //Print the array elements in using printf statement
    for (int j = 0; j < N ; ++j) {
        printf("%d\t",a[j]);

    }
    return 0;
}
