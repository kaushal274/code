#include<stdio.h>
 int main() {
 int arr[7] = {1,200,4,80,19,5,12};
  int max =arr[0]; int min=arr[0];
   for(int i=0;i<=6;i++){
    if(max<arr[i]){
        max=arr[i];
    }
    elseif(min>min[i]){
        min=arr[i];
    }
   }
   printf("%d",max);
   printf("\n%d",min);
   return 0;
 }