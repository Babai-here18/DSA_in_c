#include<stdio.h>
void merge(int arr[],int mid,int low,int high);
void merging_sort(int arr[],int low, int high);





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
merging_sort(arr,0,num-1);
printf("\n Merge Sort in Asending Oreder----> ");
for(i=0;i<num-1;i++)
{
printf(" %d < ",arr[i]);
}
printf("%d",arr[i]);
printf("\n===========================================================================================================");
return 0;
}





void merge(int arr[],int mid,int low,int high)
{
    int Temp_arr[high];
    int i = low, j = mid+1, k = low;
    while(i<=mid && j<=high)
    {
        if(arr[i] < arr[j])
        {
            Temp_arr[k] = arr[i];
            i++;
            k++;
        }
        else{
            Temp_arr[k] = arr[j];
            j++;
            k++;
        }
    }

while(i<=mid)
{
    Temp_arr[k] = arr[i];
    i++;
    k++;
}

while(j<=high)
{
    Temp_arr[k] = arr[j];
    k++;
    j++;
}

for(i = low; i<=high; i++)
{
    arr[i] = Temp_arr[i];
}
}





void merging_sort(int arr[],int low, int high)
{
    int mid;
    if(low < high)
    {
        mid = (low + high) / 2;
        merging_sort(arr,low,mid);
        merging_sort(arr,mid+1,high);
        merge(arr,mid,low,high);
    }
}
