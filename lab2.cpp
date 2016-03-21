#include<iostream>
#include<fstream>
#include<iomanip>
#include<cmath>
#include<string>
#include"class.h" 
using namespace std;

int main()
{
	int h,m;
	ifstream file_in("file.in",ios::in);
	ofstream file_out("file.out",ios::out);
	if(!file_in || !file_out)
		cout<<"failed to open file."<<endl;
	else
	{
		while((file_in>>h>>m)&&(h!=0 && m!=0))
		{
			BMI value;
			value.setRecord(h,m);
			file_out<<fixed<<setprecision(2)<<value.getBmi()<<"\t";
			file_out<<value.getCotegory()<<endl; 
		
		}	
	}
	file_in.close();
	file_out.close();
	return 0;
}
