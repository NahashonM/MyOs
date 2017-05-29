#ifndef DISPLAY_H
#define DISPLAY_H
#include "DATATYPES.h"
#include "STRINGS.h"
/*
*Defining screen functions and such shit
*/

int CursorX=0, CursorY=0;
const U_int Screen_Width=80, Screen_Height=25, Screen_Depth=2;
char* SCREEN=(char*) 0xB8000;	//Pointer to Special Screen Memory

/*
*Determine Character index -> Position in screen
*/
U_int CharacterPos(U_int Linenumber,U_int PositionInLine)
{
	U_int Charp=(((Linenumber-1) * Screen_Width) + (PositionInLine-1))*Screen_Depth;
	return Charp;
}

/*
*Determine Character color index -> screen color
*/
U_int CharacterColor(U_int Linenumber,U_int PositionInLine)
{
	U_int Charc=((((Linenumber-1) * Screen_Width) + (PositionInLine-1))*Screen_Depth)+1;
	return Charc;
}

/*
*Determine Character Position in screen
*/
void ClearCharacter(U_int Linenumber,U_int PositionInLine,U_int Direction)
{
	U_int CharPos=CharacterPos(Linenumber,PositionInLine);
	if(Direction==1) //Right
		SCREEN[CharPos+1]=' ';SCREEN[CharPos+2]=0x0;
	if(Direction==2) //Left
		SCREEN[CharPos-1]=' ';SCREEN[CharPos-2]=0x0;
}

/*
*Delay character printing
*/
void PrintDelay(U_int counter)
{
U_int con=0;
	for(con;con<=counter;con++);
}

/*
*Print a single character on screen
*/
void printch(char Chartoprint)
{


}
 
#endif
