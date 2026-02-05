#include<stdio.h>
int main()
{
int n,c,r,i,j;
printf("enter the value of r and c ");
scanf("%d %d",&r,&c);

int a[c][r];
for(i=0;i<c;i++){
for(j=0;j<r;j++){
scanf("%d",&a[i][j]);}}

for(i=0;i<c;i++){
for(j=0;j<r;j++){
printf("%d ",a[i][j]);}
printf("\n");}

int b[c][r];
for(i=0;i<c;i++){
for(j=0;j<r;j++){
scanf("%d",&b[i][j]);}}

for(i=0;i<c;i++){
for(j=0;j<r;j++){
printf("%d ",b[i][j]);}
printf("\n");}

int d[i][j];
for(i=0;i<c;i++){
for(j=0;j<r;j++){
d[i][j]=(a[i][j]+b[i][j]);
printf("%d",d[i][j]);}
printf("\n ");}

return 0;



}
