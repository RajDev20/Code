#include<stdio.h>
#include<string.h>
int main()
{ 
  int i;
  
  int arr1[5]={10,20,30,40,50};
  char arr2[10]={'R','A','J','M','K'};

  for(i=0;i<5;i++)
{
  printf("arr1[%d]=%d\t",i,arr1[i]);
  printf("arr2[%d]=%c\n",i,arr2[i]);
} 

   
  return 0;
}