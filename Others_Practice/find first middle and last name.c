#include<stdio.h>

int main()
{
   char name[50],fname[10],mname[20],lname[20];
   int i=0,j=0,k,n,l=0,m=0;
   printf("Enter your name : ");
   gets(name);
   while(name[i] != '\0') i++;
   while(name[j] != ' ')
   {
       fname[j] = name[j];
       j++;
   }
   k = i-1;
   while(name[k] != ' ') k--;
   for(n=k+1; n<i; n++)
   {
       lname[l] = name[n];
       l++;
   }
   for(i=j+1; i<k; i++)
   {
       mname[m] = name[i];
       m++;
   }
   fname[j] = '\0';
   lname[l] = '\0';
   mname[m] = '\0';
   printf("First name = %s\n",fname);
   printf("Middle name = %s\n",mname);
   printf("Last name = %s\n",lname);

   return 0;
}
