#include<stdio.h>
int main(){
    
    int n; // no of rows
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int m;  //no of columns 
    printf("Enter the value of m : ");
    scanf("%d",&m);
    
    int arr[n][m];
    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("1st matrix is : \n");
    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",arr[i][j]);
        }printf("\n");
    }
 int arr1[n][m];
    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d ",&arr1[i][j]);
        }
    }
    printf("2nd matrix  is : \n");
    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",arr1[i][j]);
        }printf("\n");
    }
    int sum[n][m];
      for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum[i][j]=arr[i][j]+arr1[i][j];
        }
    }
    printf("the sum of given matrix is ");
    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",sum[i][j]);
        }printf("\n");
    }
    return 0;
}
