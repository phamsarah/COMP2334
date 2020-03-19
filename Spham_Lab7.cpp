/* Lab 7 
 * Sarah Pham 
 * 10-30-17
 * Course: COP2334
 */
 
#include <iostream>
using namespace std; 

void get_Numbers(int& a, int& b, int& c);
void get_answer(int& a, int& b, int& c, int& highest, int& lowest, int& middle);
void outputNumbers(int highest, int lowest, int middle);


int main ()
{
    int highest, lowest, middle; // totally not global 
    
    int first = 0, second = 0, third = 0; 
    
    get_Numbers(first, second, third);
    get_answer(first, second, third, highest, lowest, middle);
    outputNumbers(highest, lowest, middle);
    
    return 0; 
}

void get_Numbers(int& a, int& b, int& c)
{
    using namespace std; 
    cout << "Please input 3 different numbers separated by spaces \n";
    cin >> a 
        >> b 
        >> c;
        
}

void get_answer(int& a, int& b, int& c, int& highest, int& lowest, int& middle) 
{
    // highest 
      
    if ((a > b) && (a > c)) 
    highest = a;
    
    else if ((b > a) && (b >c))
    highest = b; 
    
    else
    highest = c; 
    
    // lowest 
    
     
    if ((a < b) && (a < c)) 
    lowest = a;
    
    else if ((b < a) && (b < c))
    lowest = b; 
    
    else
    lowest = c;
    
    // middle 
    
     
    if (((a > b) && (a < c)) || ((b > a) && (a > c)))
    middle = a;
    
    else if (((b > a) && (b < c)) || ((b < a) && (b > c)))
    middle = b; 
    
    else
    middle = c;
    
}

void outputNumbers(int highest, int lowest, int middle)
{
    using namespace std; 
    cout << "The highest number is " << highest << endl
         << "The lowest number is " << lowest << endl
         << "The middle number is " << middle << endl;
         
}


