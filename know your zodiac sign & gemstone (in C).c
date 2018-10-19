#include<stdio.h>
#include<conio.h>
int main()
{
   int date,ch;

   printf("\nEnter Date of Birth & Then Month No. :  ");
   scanf("%d%d",&date,&ch);

      printf("\n\n");
      if(((date>=21)&&(ch==3))||((date<=20)&&(ch==4)))
        printf("\n You are a Aries & your birthstone is Bloodstone.");
      if(((date>=21)&&(ch==4))||((date<=21)&&(ch==5)))
        printf("\n You are a Taurus & your birthstone is Sapphire.");
      if(((date>=22)&&(ch==5))||((date<=21)&&(ch==6)))
        printf("\n You are a Gemini & your birthstone is Agate.");
      if(((date>=22)&&(ch==6))||((date<=22)&&(ch==7)))
        printf("\n You are a Cancer & your birthstone is Emerald.");
      if(((date>=23)&&(ch==7))||((date<=22)&&(ch==8)))
        printf("\n You are a Leo & your birthstone is Onyx.");
      if(((date>=23)&&(ch==8))||((date<=22)&&(ch==9)))
        printf("\n You are a Virgo & your birthstone is Carmelian.");
      if(((date>=23)&&(ch==9))||((date<=23)&&(ch==10)))
        printf("\n You are a Libra & your birthstone is Chrysolite.");
      if(((date>=24)&&(ch==10))||((date<=21)&&(ch==11)))
        printf("\n You are a Scorpio & your birthstone is Beryl.");
      if(((date>=22)&&(ch==11))||((date<=21)&&(ch==12)))
        printf("\n You are a Sagittarus & your birthstone is Topaz.");
      if(((date>=22)&&(ch==12))||((date<=21)&&(ch==1)))
        printf("\n You are a Capricon & your birthstone is Ruby.");
      if(((date>=22)&&(ch==1))||((date<=18)&&(ch==2)))
        printf("\n You are a Aquarius & your birthstone is Garnet.");
      if(((date>=19)&&(ch==2))||((date<=20)&&(ch==3)))
        printf("\n You are a Pisces & your birthstone is Amethyst.");

      printf("\n\n\n\n\n");
  return 0;
}

