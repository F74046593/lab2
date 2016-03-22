#include<iostream>
#include<cstdlib>
#include<fstream>
#include"BMI.h"
using namespace std;
int main(){

ifstream infile("file.in",ios::in);
ofstream outfile("file.out",ios::out);

if(!infile ||!outfile){
cerr<<"Failed opening"<<endl;
exit(1);
}

float height,weight;
string number;
Timer tmr;

while(infile >> height >> weight){
	outfile << tmr.BMI(weight,height) << " ";
	tmr.appear(&number);
	outfile << number << endl;
}
return 0;
}
