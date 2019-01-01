#include<stdio.h>
#include<conio.h>
int main()
{
   int date,ch;
   printf("This Program will Let you know about your Zodiac Sign, Your Lucky Birthstone and your Zodiac Element....!!");
   printf("\nEnter your Birthdate and then the Month Number:  ");
   scanf("%d%d",&date,&ch);

      printf("\n\n");
      if(((date>=21)&&(ch==3))||((date<=20)&&(ch==4)))
        printf("\n You are an Aries, Your Birthstone is Bloodstone and Your Zodiac Element is FIRE.");
      if(((date>=21)&&(ch==4))||((date<=21)&&(ch==5)))
        printf("\n You are a Taurus & your birthstone is Sapphire and Your Zodiac Element is EARTH.");
      if(((date>=22)&&(ch==5))||((date<=21)&&(ch==6)))
        printf("\n You are a Gemini & your birthstone is Agate and Your Zodiac Element is AIR.");
      if(((date>=22)&&(ch==6))||((date<=22)&&(ch==7)))
        printf("\n You are a Cancer & your birthstone is Emerald and Your Zodiac Element is WATER.");
      if(((date>=23)&&(ch==7))||((date<=22)&&(ch==8)))
        printf("\n You are a Leo & your birthstone is Onyx and Your Zodiac Element is FIRE.");
      if(((date>=23)&&(ch==8))||((date<=22)&&(ch==9)))
        printf("\n You are a Virgo & your birthstone is Carnelian and Your Zodiac Element is EARTH.");
      if(((date>=23)&&(ch==9))||((date<=23)&&(ch==10)))
        printf("\n You are a Libra & your birthstone is Chrysolite and Your Zodiac Element is AIR.");
      if(((date>=24)&&(ch==10))||((date<=21)&&(ch==11)))
        printf("\n You are a Scorpio & your birthstone is Beryl and Your Zodiac Element is WATER.");
      if(((date>=22)&&(ch==11))||((date<=21)&&(ch==12)))
        printf("\n You are a Sagittarus & your birthstone is Topaz and Your Zodiac Element is FIRE.");
      if(((date>=22)&&(ch==12))||((date<=21)&&(ch==1)))
        printf("\n You are a Capricon & your birthstone is Ruby and Your Zodiac Element is EARTH.");
      if(((date>=22)&&(ch==1))||((date<=18)&&(ch==2)))
        printf("\n You are a Aquarius & your birthstone is Garnet and Your Zodiac Element is AIR.");
      if(((date>=19)&&(ch==2))||((date<=20)&&(ch==3)))
        printf("\n You are a Pisces & your birthstone is Amethyst and Your Zodiac Element is WATER.");

      printf("\n\n\n\n\n");
  return 0;
}

