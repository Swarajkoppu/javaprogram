#include<stdio.h>
int main()
{
	int i,j,k,sum,arr1[100][100],row1,col1,*row_ptr1,*col_ptr1,arr2[100][100],*row_ptr2,*col_ptr2,row2,col2;
	row_ptr1=&row1;
	col_ptr1=&col1;
	printf("enter the numbers of rows of matrix 1\n");
	scanf("%d",row_ptr1);
	printf("enter the number of columns of matrix 1\n");
	scanf("%d",col_ptr1);
	printf("enter the data into the array \n");
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col1;j++)
		{
			scanf("%d",(*(arr1+i)+j));
		}
	}
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col1;j++)
		{
			printf("%d ",*(*(arr1+i)+j));
		}
		printf("\n");
	}
	row_ptr2=&row2;
	col_ptr2=&col2;
	printf("enter the numbers of rows of matrix 2\n");
	scanf("%d",row_ptr2);
	printf("enter the number of columns of matrix 2\n");
	scanf("%d",col_ptr2);
	printf("enter the data into the array \n");
	for(i=0;i<row2;i++)
	{
		for(j=0;j<col2;j++)
		{
			scanf("%d",(*(arr2+i)+j));
		}
	}
	for(i=0;i<row2;i++)
	{
		for(j=0;j<col2;j++)
		{
			printf("%d ",*(*(arr2+i)+j));
		}
		printf("\n");
	}
	if(row2==col1 && row1==col2)
	{
		int result[row1][col2];
    	for(int i=0;i<row1;i++) 
		{
        	for(int j=0;j<col2;j++) {
            {
            	*(*(result+i)+j)=0;
			}
			for(int k=0;k<row2;k++) 
			{
                *(*(result+i)+j)+=*(*(arr2+i)+k) * *(*(arr1+k)+j);
            }
 
            printf("%d ",*(*(result+i)+j));
        }
        	printf("\n");
    	}
	}
	else 
	{
		printf("multiplication not possible\n");
	}
	
}
