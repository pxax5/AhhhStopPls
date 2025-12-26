#include<iostream>
using namespace std;

int main(){
	int count[5] = {0}; 
	cout << "Please input grade of each student (A-F) or input 0 to exit." << endl;
	char grade;
    int students = 1;
    int totals = 0;
	do{
		cout << "Student [" << students << "]: ";
		cin >> grade; 
		
		if(grade == '0') {
		    break;
		    } 
		if(grade == 'A'){
		    count[0]++;
		    totals++;
			students++;
		}else if(grade == 'B'){ 
		    count[1]++;
		    totals++;
			students++;
		}else if(grade == 'C'){ 
		    count[2]++;
		    totals++;
			students++;
		}else if(grade == 'D'){ 
		    count[3]++;
		    totals++;
			students++;
		}else if(grade == 'F'){ 
		    count[4]++;
		    totals++;
			students++;
		}
		else{ 
            cout << "Wrong input. Please input again." << endl;
		} 
	}while(true);
	
	
	cout << "In total " << totals << " students." << endl;
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[2] <<", ";	
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4] ;
	
	
	return 0;
}