#include<stdio.h>
#include<string.h>
int main()
{
	char s[]="The aim of research work is to explore mining techniques applicable to big data that will be used for web analytics. This can be used for prediction of various possible future events like advancement in technology based on recent events. We can get information of recent events from various news websites with help of some APIs. Some of the relevant techniques in data mining process will be explored for their applicability to web recommendations. Further for big data, some popular distributed computing models will be analysed with main focus on map reduce model.";
	char *p;
	int count=0;
	for(p=s;*p!='\0';p++)
	{
		if(*p!=' ')
		{
			count++;
		}
	}
printf("%d\n",count);      
return 0;
}

/*
*Thapar University’s rank opener for the year 2011 
*Currently having Second position in CSE Branch 
*Awarded with Full Merit Scholarship for three consecutive years 2011-2013 
*Secured 100/100 marks in Maths in 10+2 CBSE Board Examination
*Qualified and participated in ACM-ICPC, Kanpur site – December 2013, at IIT Kanpur


The aim of research work is to explore mining techniques applicable to big data that will be used for web analytics. This can be used for prediction of various possible future events like advancement in technology. We can get information of recent inventions from various news websites with help of some APIs. Some of the relevant techniques in data mining process will be explored for their applicability to web recommendations. Further for big data, some popular distributed computing models will be analysed with main focus on map reduce model.

I would very much like to do Research in the area of "Web analytics for big data"*/
