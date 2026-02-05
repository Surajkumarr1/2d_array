#include<stdio.h>
int main(){
    int r;
    printf("enter the no of row : ");
    scanf("%d",r);
    int c;
    printf("enter the no of columns : ");\
    scanf("%d",c);
    
    int arr1[r][c];

    for(int i=0;i<=r;i++){
    for(int j=0;j<=c;j++){
        scanf("%d",arr1[i][j]);}}

    for(int i=0;i<=r;i++){
    for(int j=0;j<=c;j++){
       printf("%d",arr1[i][j]);}
       printf("\n");}

    int arr2[r][c];
    
    for(int i=0;i<=r;i++){
    for(int j=0;j<=c;j++){
        scanf("%d",arr2[i][j]);}}

    for(int i=0;i<=r;i++){
    for(int j=0;j<=c;j++){
       printf("%d",arr2[i][j]);}
       printf("\n");}


        return 0;
}
