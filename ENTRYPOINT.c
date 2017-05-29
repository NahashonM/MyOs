#include "SUPPORT/DISPLAY.h"
#include "SUPPORT/STRINGS.h"
#include "SUPPORT/ASCIICON.h"

void ENTRYPOINT()
{
int kl=2,kp=1;
U_int len;
char *video=(char *)0xB8000;char *pc;
char *Name="Sp1d3r_Z3r0";
char *name2="James Gordon\0";
int co,pin;	
	video[CharacterPos(kl,kp)]='M';
	video[CharacterColor(kl,kp)]=0x5;
strfcopy(Name,"I AM NAHASHON");
	len=strlen(Name);
	for(co=0;co<=len;co++)
	{
		video[CharacterPos(1,kp)]=Name[co];
		video[CharacterColor(1,kp)]=0x5;
		kp++;
	}
	pc=Toaskey(-6789);
	len=strlen(pc);
	kp=2;
	for(co=0;co<=len-1;co++)
	{
		video[CharacterPos(2,kp)]=pc[co];
		video[CharacterColor(2,kp)]=0x9;
		PrintDelay(1000);
		kp++;
	}
	pin=strcmp(Name,name2);
		video[CharacterPos(3,kp)]=pc[co];
		video[CharacterColor(3,kp)]=0x4;

	//ClearCharacter(kl,2,1);
}
