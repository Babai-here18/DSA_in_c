#include<stdio.h>
void shell_sort(int arr[],int size);





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

    shell_sort(arr,num);
    return 0;
}




void shell_sort(int arr[],int size)
{
  int i,j,temp;
    for(int gap=size/2; gap>0; gap/=2)
    {
        for(i=gap; i<size; i++)
        {
            temp = arr[i];
            j=i;
            while(j>=gap && arr[j-gap]>temp)
            {
                arr[j] = arr[j-gap];
                j=j-gap;
            }
            arr[j] = temp;
        }
    }
printf("\n Shell Sort in Ascending Order :--> ");
for(i=0;i<size-1;i++)
{
printf(" %d < ",arr[i]);
}
printf("%d",arr[i]);
printf("\n===========================================================================================================");
}