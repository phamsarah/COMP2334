/* Lab 4 Part 1 
 * Sarah Pham 
 * 09-23-2017
 * Course: COP2334
 */

#include <iostream>
using namespace std;
int main ()
{
    char end; 
    
    do 
    
    {
    int answer;
    
    cout << "How many states do we have?\n";
    cin >> answer;
     
        while (answer < 50 )
        {
             char grade; 
    
                cout << "Enter a letter grade to find out the number range\n";
                cin >> grade; 
    
                    switch (grade)
                     {
                        case 'A':
                        case 'a':
                        {
                            cout << "The number range for grade A is 90-100\n";
                            cout << "Press N to quit the program" << end; 
                            cin >> end;
            
                            ((end =='n') && (end == 'N'));
        
                             return 0; 
            
                        }
                         break;
        
                        case 'B':
                        case 'b':
                        { 
                             cout << "The number range for grade B is 80-89\n";
                             cout << "Press N to quit the program" << end << endl; 
                             cin >> end; 
             
                             ((end =='n') && (end == 'N'));
        
                              return 0; 
                        }
        
                         break;
        
                        case 'C':
                        case 'c':
                        {
                            cout << "The number range for grade C is 70-79\n";
                            cout << "Press N to quit the program" << end << endl; 
                            cin >> end; 
            
                            ((end =='n') && (end == 'N'));
        
                             return 0; 
            
                         }
            
                         break;
        
                        case 'D':
                        case 'd':
                        {
                             cout << "The number range for grade D is 60-69\n";
                             cout << "Press N to quit the program" << end << endl; 
                             cin >> end;
                
                             ((end =='n') && (end == 'N'));
        
                             return 0; 
        
                        } 
        
                         break; 
        
                        case 'F':
                        case 'f':
                        {
                             cout << "The number range for grade F is 0-59\n";
                             cout << "Press N to quit the program" << end << endl; 
                             cin >> end;
                
                             ((end =='n') && (end == 'N'));
        
                              return 0; 
            
                         }
                         break;
        
                         default:
                            cout << "Invalid, reenter letter grade\n";
                            break;
        
                         ((end =='n') && (end == 'N'));
        
                        return 0; 
                                    }
    }
    
            cout << "Press N to quit\n";
            cin >> end; 
    } while ((end == 'n') && (end == 'N'));
    return 0; 
}


