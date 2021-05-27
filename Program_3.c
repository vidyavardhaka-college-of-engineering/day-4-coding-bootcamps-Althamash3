//Write a C program to get two rows and columns of integers from the user and print them in matrix fashion.

//Example:
//Input:
//1 2 3 4
//Output:
//1   2
//3   4
#include<stdio.h>
int main()
{
    //Declare all the variables[row, col, array a(2D array), i] used in the code
    int row, col ;
    //Read the Value of row and coloumn of the matrix (i.e size of matrix) using scanf statement
    printf("Enter the number of rows and columns\n");
    scanf("%d%d",&row,&col);
    int arraya[row][col];

    //Read the elements of matrix a using nested for loop and scanf statment
        for (int i = 0; i <row ; ++i) {

        for (int j = 0; j < col; ++j) {
            int k = i+1,l = j+1;

            printf("Enter the value of element with index %d %d\n",k,l);
            scanf("%d",&arraya[i][j]);
        }
    }
     //Print the elements of matrix a using nested for loop and printf statment as per the above specified format
     for (int i = 0; i < row ; ++i) {
        for (int j = 0; j < col ; ++j) {
            printf("%d\t",arraya[i][j]);

        }
        printf("\n");

    }
    return 0;
}