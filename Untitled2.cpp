#include<stdio.h>
#define n 7
int main()
{
 int arr[n]=1.{6,1.8,2.7,1.6,2.3,2.1,1.9};
  int temp;
  for(int i=0;i<n/2;i++){
  temp=arr[i];
  arr[i]=arr[n-i-1];
  arr[n-i-1]=temp;
}
for(int i=0;i<n;i++){
 printf("%d,",arr[i]);
}
}
