#include<stdio.h>

int main()
{
    int I,J,N,T,Ara[50];
    printf("Enter Total Numbers Of Element : ");
    scanf("%d", &N);
    printf("Enter %d Elements : ",N);
    for(I=0; I<N; I++)
        scanf("%d", &Ara[I]);
    for(I=N-2;I>=0;I--){
      for(J=0;J<=I;J++){
           if(Ara[J]>Ara[J+1]){
               T=Ara[J];
              Ara[J]=Ara[J+1];
              Ara[J+1]=T;
           }
      }
  }

  printf("After Sorting: ");
  for(I=0;I<N;I++)
      printf(" %d",Ara[I]);

  return 0;
}
