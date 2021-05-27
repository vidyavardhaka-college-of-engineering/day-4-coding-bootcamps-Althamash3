
#include <stdio.h>
int main()
{

   
    int row, col,sum=0 ;
    
    printf("Enter the number of rows and columns\n");
    scanf("%d%d",&row,&col);
    int arraya[row][col];

    for (int i = 0; i <row ; ++i) {

        for (int j = 0; j < col; ++j) {
            int k = i+1,l = j+1;

            printf("Enter the value of element with index %d %d\n",k,l);
            scanf("%d",&arraya[i][j]);
            sum = sum + arraya[i][j];
        }
    }

    printf("The sum is : %d",sum);
   

    return 0;
}

