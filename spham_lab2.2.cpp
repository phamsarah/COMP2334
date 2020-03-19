/* Lab 2 Part 2 
 * Sarah Pham 
 * 09-11-2017
 * Course: COP2334 
 */

#include <iostream>
using namespace std; 

int main()

{ 
    int firstInt;
    int secondInt;
    int thirdInt; 
    
    cout << "Enter 3 Different Numbers - Separate With Spaces!\n";
    cin >> firstInt >> secondInt >> thirdInt; 
    
    // First if else 
    
    if ((firstInt > secondInt) && (firstInt > thirdInt))
     { cout << "First number is the highest\n"; 
     }
     
    else if ((firstInt > secondInt) && (firstInt < thirdInt))
    { cout << "First number is the middle\n";
    }
    
    else if ((firstInt < secondInt) && (firstInt > thirdInt))
    { cout << " First number is the middle\n";
    }
    
    else 
    { cout << "First Number is the lowest\n"; 
    }
    
    // Second if else 
    
    if ((secondInt > thirdInt) && (secondInt > firstInt))
    { cout << "Second number is the highest\n";
    }
    
    else if ((secondInt > thirdInt) && (secondInt < firstInt))
    { cout << "Second number is the middle\n";
    }
    
    else if ((secondInt < thirdInt) && (secondInt > firstInt))
    { cout << "Second number is the middle\n";
    }
    
    else 
    { cout << "Second number is the lowest\n";
    }
    
    // Third if else 
    
    if ((thirdInt > firstInt) && (thirdInt > secondInt))
    { cout << "Third number is the highest";
    }
    
    else if ((thirdInt > firstInt) && (thirdInt < secondInt))
    { cout << "Third number is the middle";
    }
    
    else if ((thirdInt < firstInt) && (thirdInt > secondInt))
    { cout << "Third number is the middle";
    }
    
    else
    { cout << "Third number is the lowest";
    }
    

    return 0;
}


