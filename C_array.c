#include<stdlib.h>
#include<stdio.h>
int main()
{
    system("cls");
    int arr[3][3];
    int sum=0;
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\nElement - [%d],[%d] : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    //print the matrix
    printf("\nThe matrix is : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
    //sum of diagonal elements :
    for(i=0;i<3;i++)
    {
        for(j=0;j=i;j++)
        {
            sum=sum+arr[i][j];
        }
    }
    printf("\nDiagonal elements are %d %d %d ",arr[0][0],arr[1][1],arr[2][2]);
    printf("\nSum of diagonal elements is : ",sum);
	return 10;
}

