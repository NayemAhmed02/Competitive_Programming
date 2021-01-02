#include<stdio.h>

int main()
{
    int temp[31],i,max=0,min=200,avg=0;
    int days;

    printf("How many days in the month? ");
    scanf("%d",&days);

    for(i=0; i<days; i++)
    {
        printf("Enter noonday temperature for day %d: ",i+1);
        scanf("%d",&temp[i]);
        avg = avg + temp[i];
         if(min>temp[i])min = temp[i];
        if(max<temp[i])max = temp[i];
    }
    printf("Average Temperature : %d\n",avg/days);
    printf("Minimum Temperature : %d\n",min);
    printf("Maximum Temperature : %d\n",max);

    return 0;

}
