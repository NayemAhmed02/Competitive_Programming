#include<stdio.h>
#include<string.h>

#define SIZE 110

int main()
{
    int num,i,j,len,res[SIZE],max=0,index=0;
    char str[SIZE];

    memset(res,0,SIZE*sizeof(res[0]));

    scanf("%d", &num);
    getchar();
    gets(str);

    len = strlen(str);
    len--;

    for(i=0; i<len; i++)
    {
        for(j=0; j<len; j++)
        {
            if((str[i] == str[j]) && (str[i+1] == str[j+1]))
                res[i]++;
        }
    }

    for(i=0; i<len; i++)
    {
       if(res[i] > max)
       {
           max = res[i];
           index = i;
       }
    }

    printf("%c%c\n",str[index],str[index+1]);

    return 0;
}
