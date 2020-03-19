/* Lab 3
 * Sarah Pham
 * 09-17-17
 * Course: COP2334
 */


#include <iostream>
using namespace std;
int main ()
{
	int counter = 10;
	char q;
	int a;
	
	// Step 1 - Set counter variable to 10
	
	while (counter < 20)
	{
    	cout << "1 Less than 20 and starts at 10:  " << counter << endl;
    	counter++;
	}
	
	// Step 2 - Set counter variable to 5
	
	counter = 5;
	
	do
	{
    	cout << "2 Less than 20 and starts at 5:  " << counter << endl;
    	counter++;
	}
	while (counter < 20);
	
	// Step 3 - Repeat #1
	
	while (counter < 20)
	{
    	cout << "3 Less than 20 and starts at 10:  " << counter << endl;
    	counter++;
	}
	
	// Step 4 - Repeat #2
	
	
	do
	{
    	cout << "4 Less than 20 and starts at 5:  " << counter << endl;
    	counter++;
	}
	while (counter < 20);
	
	// Step 5 - User Can End
	
	
	do
	{   
	    cout << "Press Any Number"
	         << endl; 
	         a++;
	    cin >> a; 
	         
	  if (a % 2 == 0)
	   {
	    cout << "Even Number - Repeat!\n";
	   }
	   
	  else 
	  {
	      cout << "Odd Number - Press 'Q' to Quit\n";
	      cin >> q; 
	  }
    	
	}
	while ((q != 'q') && (q != 'Q'));
	

    return 0;
}







