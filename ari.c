#include <cs50.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

string ari (string s)
{
 string ret;
 int wc=1;
 int lc=0;
 int sc=1;
 for(int i=0;i<strlen(s);i++)
  {
   if(isalpha(s[i]))
   {
    lc=lc+1;
   }
   if(s[i]==' ')
   {
    wc=wc+1;
   }
   if((s[i]=='.' && s[i+1]==' ') || s[i]=='?' || s[i] == '!')
   {
    sc=sc+1;
   }
}

float wcal = ((float)lc/wc)*4.71;
float ccal = ((float)wc/sc)*0.5;
float lev = wcal + ccal - 21.43;
int ari = (int)ceil(lev);
switch (ari)
{
 
        case 1: 
            ret="Kindergarten";
            break;
        case 2: 
            ret="First/Second Grade";
            break;
        case 3: 
            ret="Third Grade";
            break;
        case 4: 
            ret="Fourth Grade";
            break;
        case 5: 
            ret="Fifth Grade";
            break;
        case 6: 
            ret="Sixth Grade";
            break;
        case 7: 
            ret="Seventh Grade";
            break;
        case 8: 
            ret="Eighth Grade";
            break;
        case 9: 
            ret="Ninth Grade";
            break;
        case 10: 
            ret="Tenth Grade";
            break;
        case 11: 
            ret="Eleventh Grade";
            break;
        case 12: 
            ret="Twelfth Grade";
            break;
        case 13: 
            ret="College student";
            break;
        case 14: 
            ret="Professor";
            break;
        default:
            ret="Professor";
            break;
    }
    return ret;
    }
    
    
 
