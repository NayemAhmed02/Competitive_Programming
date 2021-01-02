#include<stdio.h>

struct College
{
    int Students;
    char Name[500];
    double Marks;
};

int main(){

  struct College *P = 0;

  *P++;
  printf("Size of the structure College:  %d",P);

  return 0;
}
