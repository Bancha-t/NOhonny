#include<iostream>
using namespace std;

int main(){
	int count[5] = {0,0,0,0,0};
	char grade ;
	int i = 1 ;
	cout << "Please input grade of each student (A-F) or input 0 to exit." << "\n" ;
	do{
		cout << "Student [" << i << "]: ";
		cin >> grade; 
		if(grade == 'A') count[0] += 1 ;
		else if(grade == 'B') count[1] += 1 ;
		else if(grade == 'C') count[2] += 1 ;
		else if(grade == 'D') count[3] += 1 ;
		else if(grade == 'F') count[4] += 1 ;
		else{
			cout << "Wrong input. Please input again." ;
		} 
		i++ ;
	}while(grade != '0');
	
	
	cout << "In total ? students.";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4] <<", ";
		
	return 0;
}