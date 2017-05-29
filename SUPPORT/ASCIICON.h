#ifndef ASKEY_H
#define ASKEY_H
char select(U_int X)
{
U_int rtval;
U_int base=48;	//AS-KEEY 0 EQUIVALENT
rtval=base+X;
return rtval;
}

//SIZE OF NUMBER
U_int NumSize(U_int num)
{
U_int NUM=0,test=10,result=num;
	while(result)
	{
	result = num/test;
	test *= 10;
	NUM += 1;
	}
return (NUM);
}

//CONVERTERS
char* AskeyCon(U_int num)
{
char *nump;
U_int SIZE=NumSize(num);
U_int counter=(SIZE),counter2;
U_int plset,offset = 0,temp = 0;

for(counter; counter>=1; counter--){
	plset=1;
	for(counter2=1 ; counter2<=counter-1 ; counter2++)
		plset *= 10;

	temp = num / plset;
	nump[offset] = select(temp);
	offset = offset + 1;

	temp = temp * plset;
	num = num - temp;
}
nump[offset] ='\0';

return nump;
}

char* Toaskey(int num)
{
char *Outtahere;
	if(num < 0){	//-Ve Integer
		num=num*(-1);
		Outtahere[0]='-';
		strjoin(Outtahere,AskeyCon(num));
	}else{ //+Ve integers and fence seaters
		Outtahere = AskeyCon(num);	
	}
return Outtahere;
}

#endif
