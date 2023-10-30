#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*#define n 2*/

struct stud
{
char im[20];
char fam[20];
char god[5];
int score[32];
};
typedef struct stud Stud;
void show(Stud c);
struct stud inpstud(void);
int main()
{
  int *n;
  printf("How many new students profiles you need? \n");
  scanf("%d",n);
  Stud st[*n];
 for (int i = 0; i<(*n); i++)
 {
   printf("Enter new student profile: \n");
   printf("Name: ");
   scanf("%s",st[i].im);
   printf("Surname: ");
   scanf("%s",st[i].fam);
   printf("Year of birth: ");
   scanf("%s",st[i].god);
   printf("Grade: ");
   scanf("%d",st[i].score);
   printf("%20s %20s %10s %d\n", st[i].im, st[i].fam, st[i].god, *st[i].score);
 }
 return 0;
}
