#include<stdio.h>
void insertion_sort(int arr[],int size);





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

    insertion_sort(arr,num);
    return 0;
}





void insertion_sort(int arr[],int size)
{
    int temp,i,j;
    for(i=1;i<size;i++)
    {
        temp = arr[i];
        j=i-1;
    while (j>=0 && arr[j]>temp)
    {
        arr[j+1] = arr[j];
        j=j-1;
    }
    arr[j+1] = temp;
    }
    printf("\n Insertion Sort in Ascending Order :--> ");
for(i=0;i<size-1;i++)
{
printf(" %d < ",arr[i]);
}
printf("%d",arr[i]);
printf("\n===========================================================================================================");
}