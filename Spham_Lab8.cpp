/* Lab 8
 * Sarah Pham 
 * 11/30/17
 * Course: COP2334
 */

#include <iostream>
#include <fstream>

using namespace std; 


int main()
{

	ifstream fin; 
	ofstream fout; 
	
	
	fin.open("days.txt");
	fout.open("totals.txt");
	
	char next;
	int Sunny = 0;
	int Rainy = 0; 
	int Cloudy = 0; 
	
	while(!fin.eof())
	{
		
		fin >> next;
		
		if (next == 'S')
		{
			Sunny++;
		}
		
		
		if (next == 'R')
		{
			Rainy++;
		}
		
		
		if (next == 'C')
		{
			Cloudy++;
		}
		
	}
	
		fout << "Sunny days: "
		  << Sunny
		  << endl
		  << "Cloudy days: "
		  << Cloudy
		  << endl
		  << "Rainy days: "
		  << Rainy
		  << endl; 
	
	cout << "This month we had "<< Sunny << " sunny days, " << Cloudy << " cloudy days, and " << Rainy << " rainy days" << endl; 
	
	return 0; 
	
}

