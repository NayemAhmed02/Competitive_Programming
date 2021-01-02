#include<stdio.h>
#include<string.h>
using namespace std;

char stdio[]="stdio.h";
char string[]="string.h";
char algo[]="algorithm";
char math[]="math.h";
char stdlib[]="stdlib.h";
char conio[]="conio.h";
char ctype[]="ctype.h";
char inc[]="include";
char defin[] ="define";

void inclu(char str[],int n)
{
    int i=0,j;
    while(str[i]==' ')
    {
        i++;
    }
    i++;
    while(str[i]==' ')
    {
        i++;
    }
    char st[10];
    for(j=0; j<7; j++)
    {
        st[j]=str[i++];
    }
    st[j]='\0';
/// printf("%s", st);
    if(strcmp(st,inc)!=0)
    {
        printf("Error!!!   include expected at %d line\n\n",n);
        return ;
    }
    while(str[i]==' ')
    {
        i++;
    }
    if(str[i]!='<')
    {
        printf("Error Error!!!  ' < ' expected at %d line\n\n",n);
        return ;
    }
    i++;
    while(str[i]==' ')
    {
        i++;
    }
    int c=0;
    for(j=0; ; j++)
    {
        if(str[i]=='.')
            c++;
        if(str[i]==' ' || str[i]=='>' || c>=2)
            break;
        st[j]=str[i++];
    }
    st[j]='\0';
    if((strcmp(st,stdio)!=0) &&  (strcmp(st,string)!=0) && (strcmp(st,algo)!=0) && (strcmp(st,math)!=0) && (strcmp(st,stdio)!=0) && (strcmp(st,stdlib)!=0))
    {
        printf("Error!!!  valid header file expected at %d line\n\n",n);
        return ;
    }
    while(str[i]==' ')
    {
        i++;
    }
    /// printf("%c\n", str[i]);
    if(str[i]=='>')
    {
        //printf("success");
    }
    else
    {
        printf("Error!!!  ' > ' expected at %d line\n\n",n);
        return ;
    }
    i++;
    while(str[i]==' ')
    {
        i++;
    }
    if(str[i]==';')
    {
        printf("syntax error  in %d line\n\n",n);
        return ;
    }
}
/// #define function
char ss[1000];
void def(char str[],int n)
{
    int i=0,j=0;
    while(str[i]==' ')
    {
        i++;
    }
    i++;
    while(str[i]==' ')
    {
        i++;
    }
    char st[100];
    for(j=0; j<6; j++)
    {
        st[j]=str[i++];
    }
    st[j]='\0';
    if(strcmp(st,defin)!=0)
    {
        printf("syntax error in %d line \n",n);
        return ;
    }
    while(str[i]==' ')
    {
        i++;
    }
    int ln = strlen(str);
    for(j=0; str[i]!=' ' ; j++)
    {
        ss[j]=str[i++];
    }
    ss[j]='\0';
    while(str[i]==' ')
    {
        i++;
    }
    int jj=0;
    int num=0;
    char nu[100];
    for(jj=0; str[i]!=' ' && str[i]!=';' && str[i]!='\0'; jj++)
    {
        nu[jj]=str[i++];
    }
    nu[jj]='\0';
    for(jj=0; nu[jj]!='\0'; jj++)
    {
        if(nu[jj]>='0' &&  nu[jj]<='9') {}
        else
        {
            printf("there is not define number in %d line \n",n);
            return ;
        }
    }
    while(str[i]==' ')
    {
        i++;
    }
    if( str[i]==';')
    {
        printf("Syntax error at %d line \n",n);
        return ;
    }
    printf("value of %s = ",ss);
    printf("%s\n",nu);
}
int main()
{
    char str[100][1000];
    int i=0;
    printf("%d ",i+1) ;
    while(gets(str[i]))
    {
        i++;
        printf("%d ",i+1) ;
    }
    int j=0,k=0;
    for(j=0; j<i; j++)
    {
        int k=0;
        if(str[j][0]=='\0' || str[j][0]=='\n')
            continue;
        while(str[j][k]==' ')
        {
            k++;
        }
        if(str[j][k]!='#')
        {
            printf("Error!!! ' # ' missing at %d line\n\n",j+1);
            return 0;
        }
        k++;
        while(str[j][k]==' ')
        {
            k++;
        }
        if(str[j][k]=='i')
        {
            inclu(str[j],j+1);
        }
        else if(str[j][k]=='d')
        {
            def(str[j],j+1);
        }
        else
        {
            printf("Error!!! wrong syntax at %d line\n",j+1);
            return 0;
        }
    }
    return 0;
}
