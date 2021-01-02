#include<stdio.h>

int main()
{
    int testcase,num,arr[100009];
    int sum,result,i,con,con2;

    scanf("%d", &testcase);

    while(testcase--)
    {
        scanf("%d", &num);

        for(i=1; i<=num; i++)
            scanf("%d", &arr[i]);

        sum = arr[1];
        con = sum+1;
        con2 = con;
        result = 1;

        for(i=2; i<=num; i++)
        {
            sum += arr[i];
            if(i == con)
            {
                con = sum;
                result++;
                con2 = sum + i;
            }

            if(con2 >= num) break;

            //printf("sum = %d\nsum1 = %d\n con = %d\ni = %d\nresult= %d\n",sum,sum1,con,i,result);
        }
        printf("%d\n",result);
    }
    return 0;
}
