#ifndef STRINGS_H
#define STRINGS_H

#include "DATATYPES.h"

U_int strlen(char* String)
{
U_int length=1;
	
	while(String[length++]);

  return --length;
}

/*
*Compare Strings as usual
*Return 1 if equal
*Return 0 if not equal
*/

int strcmp(char* StringA,char* StringB)
{
U_int lenA=strlen(StringA),cnt,LENMOD=(lenA-1);
int rtval;
if (lenA>strlen(StringB)){
	rtval=-1; //Return -1 if A is bigger
}else if (strlen(StringB)==lenA){ //Strings are equal in length
/***********************************
Distinguish similar or not
***********************************/
	for(cnt=0;cnt<=LENMOD;cnt++)
	{
		if(StringA[cnt]==StringB[cnt])
			rtval=1;	// Strings are equal
		else
			rtval=0;	// Strings are not equal
	}
/***********************************/
}else{
	rtval=2; //Return 2 if B is bigger
}
  return rtval;
}

/*******************************************/
//Here we concanate strings like they were never separate
void strjoin(char *StringA, char *StringB)
{
U_int LenA=strlen(StringA),LenB=strlen(StringB);
U_int Start=(LenA),End=(LenA+(LenB-1)),cnt=0;
	for(Start;Start<=End;Start++){
		StringA[Start]=StringB[cnt];
		cnt += 1;
	}
StringA[End+1]='\0';
}

/*******************************************/
//Here we fuck up a string with another one
void strcopy(char *StringA, char *StringB)
{
U_int LenA=strlen(StringA);
U_int Start=0, End=(LenA-1);
	for(Start;Start<=End;Start++){
		StringA[Start]=StringB[Start];
	}
}

/*******************************************/
//This is where strings start hating us 
void strfcopy(char *StringA, char *StringB)
{
U_int LenB=strlen(StringB);
U_int LenA=strlen(StringA);
U_int Start=0, End=((LenA+LenB)-1);
	for(Start;Start<=End;Start++){
		StringA[Start]=StringB[Start];
	}
}

#endif
