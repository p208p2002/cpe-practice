#include <stdlib.h>
#include <stdio.h>

int main(){
	unsigned long long int S,D,input,output,onDay;	
	int isS = 1;
	while(scanf("%lld",&input)!=EOF){
		//get input		
		if(isS)
			S = (long long int)input;		
		else
			D = (long long int)input;		
		
		//data ready
		if(!isS){			
			onDay = 0;
			while(1){
				onDay = onDay + S;				
				if(onDay >= D)
					break;
				S++;
			}
			printf("%d\n",S);
		}
		
		//
		if(isS)
			isS = 0;
		else
			isS = 1;
	}
}
