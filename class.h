#include<iostream>
#include<fstream>
#include<iomanip>
#include<cmath>
#include<cstring>
using namespace std;
class BMI
{
	public:
		void setRecord(int h,int m);		
		float getBmi();	
		string getCotegory();
	
	private:
		int height,mass;
};
