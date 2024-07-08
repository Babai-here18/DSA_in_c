#include<stdio.h>
void bubble_sort(int arr[],int size);





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
    bubble_sort(arr,num);

    return 0;
}





void bubble_sort(int arr[],int size)
{
    int i,j,temp,flag;
    for(i=0; i<size-1; i++)
    {
        flag = 0;
        for(j=0; j<size-1-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 1;
            }
        }
        if(flag == 0)
        break;
    }
    printf("\n Bubble Sort in Ascending Order :--> ");
for(i=0;i<size-1;i++)
{
printf(" %d < ",arr[i]);
}
printf("%d",arr[i]);
printf("\n===========================================================================================================");
}