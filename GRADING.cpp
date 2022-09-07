#include<iostream>
#include<cmath>
using namespace std;
int main(){
int grade;

cout<< "ENTER MARKS; ";
cin >> grade;
if (grade>=90){cout<< "YOUR GRADE IS: A+";}
else if(grade>=80){cout<< "YOUR GRADE IS: A";}
else if(grade>=70){cout<< "YOUR GRADE IS: A-";}
else if(grade>=60){cout<< "YOUR GRADE IS: B+";}
else if(grade>=50){cout<< "YOUR GRADE IS: C+";}
else if(grade>=40){cout<< "YOUR GRADE IS: D+ "; }
else {"MARKS IS E";}

return 0;
}
