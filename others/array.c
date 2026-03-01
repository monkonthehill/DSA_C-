#include <libc.h>
#include <stdio.h>
int main() {
  int arr[10];
  int key = 0; 
  boolean_t  found = 0; 
 printf("enter the element in array :");
  for (int i = 0; i < 10; i++) {
    scanf("%d", &arr[i]);
  }
  printf("the element in array are :");
  for (int i = 0; i < 10; i++) {
    printf("%d", arr[i]);
}
printf("enter the value of key :");
scanf("%d",&key);

  for (int i = 0;i<10; i ++){
    if(arr[i]==key){
        printf("Element found!!);
        found = 1;
    }else{
        found = 0;
    }
  }
  
}
