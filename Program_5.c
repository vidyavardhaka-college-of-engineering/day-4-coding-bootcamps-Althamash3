//You will be given an integer array 'arr'. Your task is to print the largest and smallest element in 'arr'.


#include<stdio.h>

int main()
{
    int row, col;
    int largest = -32768;
    int smallest = 32767;

    printf("Enter the number of rows and columns\n");
    scanf("%d%d",&row,&col);


    int arraya[row][col];


    for (int i = 0; i <row ; ++i) {

        for (int j = 0; j < col; ++j) {
            int k = i+1,l = j+1;

            printf("Enter the value of element with index %d %d\n",k,l);
            scanf("%d",&arraya[i][j]);
            largest = arraya[i][j]>largest ? arraya[i][j] :largest;
            smallest =  arraya[i][j]<smallest ? arraya[i][j] :largest;
        }
    }
    printf("The largest number is %d and the smallest number in the array is %d",largest,smallest);

    return 0;
}
