#include<stdio.h>
int main(){

    // Muhamad Ahmadin | CAP172 Programming Methodologies
    int m,n,a[100][100],i,j;
    int sum_of_odd = 0;
    printf("enter number of rows: ");
    scanf("%d",&m);
    printf("enter number of columns: ");
    scanf("%d",&n);
    for(i=0;i<m;i++)
        // loop based on the input rows and cols to create matrix m x n
        for(j=0;j<n;j++){
            printf("Enter Element at %d%d position: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                printf(" %d ",a[i][j]);

                //check if its odd, then add to sum total
                if(a[i][j] % 2 == 1) {
                  sum_of_odd += a[i][j];
                }
            }
            printf("\n");
        }

    printf("Total Sum of odd elements: %d ", sum_of_odd);
    return 0;
}
