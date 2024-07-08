#include<stdio.h>
void quick_sort(int arr[],int lb,int ub);
int partition(int arr[],int lb, int ub);
void swap(int *p,int *q)
{
  int temp;
  temp = *p;
  *p = *q;
  *q = temp;
}





int main()
{
    int arr[100],i,num;
    repeate: 
    printf("\n How many Elements You Want to Sorted in Ascending order : ");
    scanf("%d",&num);
    if(num>100 || num==0 || num<0)
    {
        printf("\n\tSorry!!....Please Enetr the Number (1 -> 100) \n");
        goto repeate;
    }
    printf("\n Please Enter the %d Elements----->\n",num);
    for(i=0;i<num;i++)
    {
        printf("\n%d.Enter the Number: ",i+1);
        scanf("%d",&arr[i]);
    }
  quick_sort(arr,0,num-1);
  printf("\n Quick Sort in Asending Oreder----> ");
for(i=0;i<num-1;i++)
{
printf(" %d < ",arr[i]);
}
printf("%d",arr[i]);
printf("\n===========================================================================================================");
  return 0;
}





int partition(int arr[],int lb, int ub)
{
  int pivot=arr[lb];
  int start=lb,end=ub;
  while(start<end)
  {
    while(arr[start] <= pivot)
    start++;
    while(arr[end]>pivot)
    end--;
    if(start<end)
    swap(&arr[start],&arr[end]);
  }
  swap(&arr[lb],&arr[end]);
  return end;
}





void quick_sort(int arr[],int lb,int ub)
{
  if(lb<ub)
  {
    int loc = partition(arr,lb,ub);
    quick_sort(arr,lb,loc-1);
    quick_sort(arr,loc+1,ub);
  }
}