#include <string>
#include"BMI.h"
float Timer::BMI(float a,float b){
	x = a/b/b*10000;
	return x;
}
void Timer::appear(string* number){

if(x<15)
        *number = "Very severely underweight";
if(x>=15 && x<16)
        *number = "Severely underweight";
if(x>=16 && x<18.5)
        *number = "Underweight";
if(x>=18.5 && x<25)
        *number = "Normal";
if(x>=25 && x<30)
        *number = "Overweight";
if(x>=30 && x<35)
        *number = "Moderately obese";
if(x>=35 && x<40)
        *number = "Severely obese";
if(x>=40)
        *number = "Very severely obese";
}
