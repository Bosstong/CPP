#include <iostream>
using namespace std;
int main()
{
	int cash , paper1 , paper2 , paper3 , paper4 , paper5 ;
	cin >> cash ;
	paper1 = cash/50;
	cash = cash-(paper1*50); 
	paper2 = cash/20; 
	cash = cash-(paper2*20);
	paper3 = cash/10; 
	cash = cash-(paper3*10); 
	paper4 = cash/5; 
	cash = cash-(paper4*5); 
	paper5 = cash; 
	cout <<paper1<<" "<<paper2<<" "<<paper3<<" "<<paper4<<" "<<paper5<<endl; 
	return 0;
}