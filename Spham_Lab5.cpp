/* Lab 5
 * Sarah Pham 
 * 10-5-17
 * Course: COP2334
 */
 
#include <iostream> 
using namespace std; 
int main ()
{
    
    // Prints Even Numbers Only 
    for (int x= 1; x <=20; x ++ )
    {   
        if (x % 2 == 0)
        cout << "Even X's are:  " << x << endl; 
    }
    
    // Prints Odd Numbers Only 
    for (int x = 1; x <= 20; x++)
    {
        if (x % 2 != 0)
        cout << "Odd X's are:  " << x << endl; 
    }
    
    // Prints off multiples of 3 
    for (int x = 3; x <= 30; x++)
    {
        if (x % 3 == 0)
        cout << "Multiples of 3 are :  "<< x << endl; 
        
    }
 // Prints off in descending order 
   for (int x = 30; x <= 30 && x > 0 ; x--)
    {
        if (x % 3 == 0)
        cout << "In descending order :  "<< x << endl;
}

// User input 

    int i = 1; 
    int x = 0; 
    int b; 
    for (i = 1; i <= 5 ; i++ )
    {
        cout << "\nEnter the same number: \n";
        
        cin >> x; 
         b = x * i; 
        cout << "Your number " << x << " x " << i << " = " << b;
    }
    
    return 0; 
}



