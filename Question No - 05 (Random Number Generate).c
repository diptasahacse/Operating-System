#include<stdio.h>

int random(int number_of_gift)
{
  int c, n,sum=0;
  for (c = 1; c <= number_of_gift; c++)
    {
    n = rand() % 100 + 1;
    sum+=n;
    }
  return sum;
}



int main()
{


    int sum_1,it1;
    int sum_2,it2;
    int sum_3,it3;
    int sum_4,it4;
    int sum_5,it5;
    int sum_6,it6;
    int sum_7,it7;
    int sum_8,it8;
    int sum_9,it9;


    printf("Enter Number Of Gift For S1:");
    scanf("%d",&it1);
    printf("Enter Number Of Gift For S2:");
    scanf("%d",&it2);
    printf("Enter Number Of Gift For S3:");
    scanf("%d",&it3);
    printf("Enter Number Of Gift For S4:");
    scanf("%d",&it4);
    printf("Enter Number Of Gift For S5:");
    scanf("%d",&it5);
    printf("Enter Number Of Gift For S6:");
    scanf("%d",&it6);
    printf("Enter Number Of Gift For S7:");
    scanf("%d",&it7);
    printf("Enter Number Of Gift For S8:");
    scanf("%d",&it8);
    printf("Enter Number Of Gift For S9:");
    scanf("%d",&it9);



    sum_1 = random(it1);
    sum_2 = random(it2);
    sum_3 = random(it3);
    sum_4 = random(it4);
    sum_5 = random(it5);
    sum_6 = random(it6);
    sum_7 = random(it7);
    sum_8 = random(it8);
    sum_9 = random(it9);


     if(sum_1 > sum_2 || sum_1 > sum_3 || sum_1 > sum_4 || sum_1 > sum_5 || sum_1 > sum_6 || sum_1 > sum_7 || sum_1 > sum_8|| sum_1 > sum_9 )
     {
         printf("S1's Gift Bill Is Maximum");
     }else if(sum_2 > sum_1 || sum_2 > sum_3 || sum_2 > sum_4 || sum_2 > sum_5 || sum_2 > sum_6 || sum_2 > sum_7 || sum_2 > sum_8|| sum_2 > sum_9 )
     {
         printf("S2's Gift Bill Is Maximum");
     }
     else if(sum_3 > sum_1 || sum_3 > sum_2 || sum_3 > sum_4 || sum_3 > sum_5 || sum_3 > sum_6 || sum_3 > sum_7 || sum_3 > sum_8|| sum_3 > sum_9 )
     {
         printf("S3's Gift Bill Is Maximum");
     }
     else if(sum_4 > sum_1 || sum_4 > sum_2 || sum_4 > sum_3 || sum_4 > sum_5 || sum_4 > sum_6 || sum_4 > sum_7 || sum_4 > sum_8|| sum_4 > sum_9 )
     {
         printf("S4's Gift Bill Is Maximum");
     }
     else if(sum_5 > sum_1 || sum_5 > sum_2 || sum_5 > sum_3 || sum_5 > sum_4 || sum_5 > sum_6 || sum_5 > sum_7 || sum_5 > sum_8|| sum_5 > sum_9 )
     {
         printf("S5's Gift Bill Is Maximum");
     }
     else if(sum_6 > sum_1 || sum_6 > sum_2 || sum_6 > sum_3 || sum_6 > sum_4 || sum_6 > sum_5 || sum_6 > sum_7 || sum_6 > sum_8|| sum_6 > sum_9 )
     {
         printf("S6's Gift Bill Is Maximum");
     }
     else if(sum_7 > sum_1 || sum_7 > sum_2 || sum_7 > sum_3 || sum_7 > sum_4 || sum_7 > sum_5 || sum_7 > sum_6 || sum_7 > sum_8|| sum_7 > sum_9 )
     {
         printf("S7's Gift Bill Is Maximum");
     }
     else if(sum_8 > sum_1 || sum_8 > sum_2 || sum_8 > sum_3 || sum_8 > sum_4 || sum_8 > sum_5 || sum_8 > sum_6 || sum_8 > sum_7|| sum_8 > sum_9 )
     {
         printf("S8's Gift Bill Is Maximum");
     }
     else
     {
         printf("S9's Gift Bill Is Maximum");
     }



    getch();

    return 0;
}
