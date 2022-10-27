#include<iostream>
#include <cstdlib> 
#include <ctime>  
using namespace std;

int random(){
	
		
	srand( time(NULL) );
	
	int min = 0;
	int max = 100;
				
	int x = rand() % (max - min + 1) + min;

  
  	return x;
}

int main(){
	int guess = 0;
	int answer = random();
	
	while(guess!= answer){
		cout<<"please enter:";
		cin>>guess;

		if(guess == -1){
			cout<<answer<<endl;
			break;
		}

		if(guess > answer){
			cout<<"too high"<<endl;
		}
		else if(guess < answer){
			cout<<"too low"<<endl;
		}
		
		else if(guess == answer){
			cout<<"you win"<<endl;
			break;
		}
	}
	
	return 0;
}
