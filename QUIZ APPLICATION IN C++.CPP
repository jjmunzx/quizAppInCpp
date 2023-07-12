#include<iostream>
using namespace std;

int main(){
//	CREATE ARRAY AND SOME VARIABLES
	int marks = 0;
	string answer;
	string country[3]={"USA","RWANDA","INDIA"};
	
//	DISPLAY ARRAYS AF COUNTRY
	for(int i=0; i<3; i++ ){
		cout<<country[i]<<endl;
	}
//	ASK FIRST QUESTION
	cout<<"WHICH IS THE RICHEST COUNTRY IN THE WORLD.....";
	cin>>answer;
	
	if(answer == "USA"){
		marks += 1;
		cout<<"Correct"<<endl;
		cout<< marks<<" / "<< 2<<" Marks"<<endl;
	}
	else{
		cout<<"Incorrect Answer...Please";
		cout<< marks<<" / "<<2 <<"Marks";
	}
	cout<<"------------------------------------------------------------------"<<endl;
	
	string country2[3] = {"USA","VATICAN","GHANA"};
	
//	DISPLAY ARRAYS AF COUNTRY2
	
	for(int i=0; i<3; i++ ){
		cout<<country2[i]<<endl;
	}
	
//	ASK SECOND QUESTION

	cout<<"WHICH IS THE SMALLEST COUNTRY IN THE WORLD.....";
	cin>>answer;
	if(answer == "VATICAN"){
		cout<<"Correct"<<endl;
		marks += 1;
		cout<< marks<<" / "<<2 << "Marks"<<endl;
	}
	else{
		cout<< marks<<"/ "<<2;
		cout<<"Incorrect please";
	}
	
	return 0;
}
