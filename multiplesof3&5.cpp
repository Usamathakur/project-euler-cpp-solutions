#include<iostream>

using namespace std;

int main(){
	int multsOfThreeSum = 0;
	int multsOfFiveSum = 0;
	int multsOfFifteenSum = 0;
	
	for(int i=3;i<1000;i=i+3){
		multsOfThreeSum = multsOfThreeSum + i;
	}
	for(int i=5;i<1000;i=i+5){
		multsOfFiveSum = multsOfFiveSum + i;
	}
	for(int i=15;i<1000;i=i+15){
		multsOfFifteenSum = multsOfFifteenSum + i;
	}
	cout<<multsOfThreeSum + multsOfFiveSum - multsOfFifteenSum<<endl;
	
	return 0;
} 
