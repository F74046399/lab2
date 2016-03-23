#include<iostream>
#include<fstream>
#include<iomanip>
#include<cmath>
#include<cstring>
#include"class.h"
using namespace std;

		void BMI::setRecord(int h,int m)
		{
			height=h;
			mass=m;
		}
				
		float BMI::getBmi()
		{			
			return mass/pow((float)height/100,2);
		}
		string BMI::getCotegory()
		{
			float bmi;
			bmi=getBmi();

			if(bmi<15)
			{
				return "Very severely underweight";
				
			}
			if(bmi>=15 && bmi<16)
			{
				return "Severely underweight";
				
			}
			if(bmi>=16 && bmi<18.5)
			{
				return "Underweight";
				
			}
			if(bmi>=18.5 && bmi<25)
			{
				return "Normal";
				
			}
			if(bmi>=25 && bmi<30)
			{
				return "Overweight";
			
			}
			if(bmi>=30 && bmi<35)
			{
				return "Obese Class I(moderately obese)";
				
			}
			if(bmi>=35 && bmi<40)
			{
				return "Obese Class II(severely obese)";
				
			}
			else
			{
				return "Obese Class III(very severely obese)";
					
			}
		}
	
	

