#include <iostream>
#include <stdlib.h>   
#include <time.h>    
#include <conio.h>
using namespace std;
int main(){
	srand (time(NULL));
	int secim,dusmancan=100,can=100,hit,sayac=0,olasilik, canavarolasiligi;
	cout<<"Hi guys,Welcome my program, do you want to play a game ? Lets go  "<<endl;
    cout<<"Hi my bro we can begin to game lets go :))))))))))))"<<endl;
    cout <<"Do yout want to hit to enemy? Normal hit for chose 1 , power hit or 0 hit chose 2 (luck)(1,2) "<<endl;
    cin>>secim;
    while(secim <1 || secim>2){
    	
    	cout<<"Ohh no , We can very fun with you but you choise undefined character...  You can chose only'1 or 2'"<<endl;
    	cin>>secim;
    	
	}
 while(dusmancan>=0 && can >=0){
 	if(sayac >=1){
 		cout <<"Do yout want to hit to enemy? Normal hit for chose 1 , power hit or 0 hit chose 2 (luck)(1,2) "<<endl;

	 }
	 cin>>secim;
 	
 	if(secim == 1 ){
 		hit= rand() %10 +1;
 		dusmancan = dusmancan - hit;
 		cout<<"damage to the enemy ="<<hit<<" dusman can ="<<dusmancan<<endl;
 		
	 }
	 else{
	 	olasilik= rand()%20 +1;
	 	if(olasilik % 2 == 0){
	 		hit=25;
	 		dusmancan = dusmancan - hit;
            cout<<"damage to the enemy ="<<hit<<" dusman can ="<<dusmancan<<endl;
			}
			else{
				hit=0;
				dusmancan = dusmancan - hit;
                cout<<"damage to the enemy ="<<hit<<" dusman can ="<<dusmancan<<endl;

			}
		 
	 }
	 canavarolasiligi= rand()%3 +1;
	 if(canavarolasiligi == 1){
	 	cout<<"Enemy hit to you !!"<<endl;
	 	hit= rand()&5 +1;
	 	can=can-hit;
	 	cout<<"enemy damage to the you ="<<hit<<" can ="<<can<<endl;

	 }
	 else if(canavarolasiligi == 2){
	 	hit= rand() %7 +1;
	 	can=can-hit;
	 	cout<<"enemy damage to the you ="<<hit<<" can ="<<can<<endl;

	 }
	 else
	 {
	 	hit=rand() %14 +1;
	 	can=can-hit;
	 	cout<<"enemy damage to the you ="<<hit<<" can ="<<can<<endl;

	 }
	 if(dusmancan<=0){
	 	cout<<"You win the game CONGRATULATIONS :)))"<<endl;
	 }
 	else
 	{
 		cout<<"You lose the game !!!!!!"<<endl;
 		
	 }
 	sayac ++;
 }   
    
}
