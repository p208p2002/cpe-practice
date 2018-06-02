#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//反推算得2011/01/01是星期一	
//一 二 三 四 五 六 日		
//3  4  5  6  0  1  2	

int main(){
	int i,j;
	int dataCount,d,m,dayLong,mapToWeekDay;
	bool isM = true;
	int mday[12] = {31,28,31,30,31,
					30,31,31,30,31,
					30,31};	
	
	scanf("%d",&dataCount);
	
	
	for(i=0;i<dataCount*2;i++){
		//月
		if(isM){			
			scanf("%d",&m);
			//printf("M:%d ",m);
		}
		//日
		else{
			scanf("%d",&d);
			//printf("D:%d\n",d);
		}
		
		if(!isM){
			dayLong = 0;
			for(j=0;j<(m-1);j++){
				dayLong = dayLong + mday[j];
			}
			dayLong = dayLong + d;				
			//printf("dl:%d\n",dayLong);
			
			mapToWeekDay = dayLong%7;
			switch(mapToWeekDay){
				case 0:
					printf("Friday\n");
					break;
				case 1:
					printf("Saturday\n");
					break;
				case 2:
					printf("Sunday\n");
					break;
				case 3:
					printf("Monday\n");
					break;
				case 4:
					printf("Tuesday\n");
					break;
				case 5:
					printf("Wednesday\n");
					break;
				case 6:
					printf("Thursday\n");
					break;
			}
			
		}
		
		//switch
		isM = !isM;
	}
}
