/* the question asks us to create a simulation with 70 steps between the archer and the enemy
 .According to the simulation, an archer can go two steps forward(%50 possibility) or one step back
%50 possibility  in each move.if archer reaches the enemy he will stab him if he can not reach him he will shoot him
arrow have %35 killrate and knife have %80 kill rate what is the possibility of archer killing the enemy 
*/

#include<iostream>
#include<cstdlib>
#include<iostream>

using namespace std;

int main(){
	srand((int) time(0));
	float possibility=1.0;
	int list [2] = {2,-1}};
	int distance =70;7
	for(int i=0;i<100;i++){
		int randNum=rand() % 2;
		distance_distance-list[randNum];
		possibility=possibility*0.5;
	}
	cout << "distance between archer and enemy" << distance ;
	if(distance==0){
		cout << "\n he will stab him";
		possibility=possibility*0.5;
		cout << "possibility" << possibility ;
	}
	
	else{
		cout << "\n he will take him with arrow";
		possibility=possibility*0.5;
		cout << "possibility" << possibility ;
	}
	return 0;
} 
