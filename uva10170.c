#include <stdlib.h>
#include <stdio.h>

int main(){
	unsigned long long int S,D,input,output,i,j,onDay;	
	int isS = 1;
	while(scanf("%d",&input)!=EOF){
		//get input		
		if(isS)
			S = (int)input;		
		else
			D = (int)input;		
		
		//data ready
		if(!isS){
			onDay=1;
			while(onDay <= D){
				for(i=0;i<S;i++){
					//printf("%d",S);
					output = S;
					onDay++;
				}
				S++;
			}
			printf("%d\n",output);
			//printf("\n");
		}
		
		//
		if(isS)
			isS = 0;
		else
			isS = 1;
	}
}
