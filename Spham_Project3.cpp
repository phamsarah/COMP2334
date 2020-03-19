#include <iostream>
#include <fstream>
using namespace std;

void get_plan(ifstream& fin);
bool validate_data(char, int, ofstream&);
void record_cost(char, int, ofstream&);
void record_options(char, int, ofstream&);

const int ARRAY_SIZE = 9;

char plans[9]; 
int comics[9];

   const double PACKAGE_A = 9.95;
   const double PACKAGE_B = 19.95;
   const double PACKAGE_C = 39.95;
   
   const int COMICS_A = 10;
   const int COMICS_B = 20;
   
   const double PACK_A_FEE = 2.00;
   const double PACK_B_FEE = 1.00;
   
   double total_A;
   double total_B;
   

int main()
{

   ifstream fin;
   ofstream fout; 
   
	fin.open("plans.dat");
   fout.open("options.dat"); 
	
	get_plan(fin);
   
   for(int i = 0; i < 9 ; i++)
   {
      if(validate_data(plans[i], comics[i], fout))
      {
         record_cost(plans[i], comics[i], fout);
	      record_options(plans[i], comics[i], fout);
      }
   }	
	
	return 0; 
}


void get_plan(ifstream& fin)
{
	int i = 0; 
	for (int i = 0; i < 9 ; i++)
	{
		fin >> plans[i];
      fin >> comics[i]; 
	}
	 
}

bool validate_data(char plan, int numComics, ofstream& fout)
{
   bool planValid = true;
   bool numComicsValid = true;
	if(plan == 'A' || plan == 'a' || plan == 'B' || plan == 'b' || plan == 'C' || plan == 'c')
   {
      planValid = true;
   }
   else
   {
      planValid = false;
      fout << plan << " is an invalid package. Must be A, a, B, b, C, or c" << endl; 
   }

   
   if (numComics > 0)
   {
      numComicsValid = true;
   }
   else
   {
      numComicsValid = false;
      fout << numComics << " is outside the allowable number of comics" << endl; 
   }
   
   if (planValid && numComicsValid)
   {
      return true;
   }
   else
   {
      return false;
   }
}


void record_cost(char plan, int numComics, ofstream& fout)
{

	 switch(plan){
               case 'A':
               case 'a':
                  
                  if(numComics <= COMICS_A)
                  {
                     fout << "The charges for package A amount to $" << PACKAGE_A << endl;
                  }
                 
                  else
                  {
                     
                     total_A = PACKAGE_A + (numComics - COMICS_A) * PACK_A_FEE;
                     fout << "The charges for package A amount to $" << total_A << endl;
                     
                     if(total_A > PACKAGE_B)
                     {
                        
                        if(numComics > COMICS_B)
                        {
                           total_B = PACKAGE_B + (numComics - COMICS_B) * PACK_B_FEE;
                        }
                        else{
                           total_B = PACKAGE_B;
                        }
                     }
                  }
                  break;   
                         
               case 'B':
                  if(numComics > COMICS_B)
                  {
                     total_B = PACKAGE_B + (numComics - COMICS_B) * PACK_B_FEE;
                  }
                  
                  else
                  {
                     total_B = PACKAGE_B;
                  }
                  fout << "The charges for package B would be $" << total_B << endl;
                  
                  if(numComics > COMICS_A)
                  {
                     total_A = PACKAGE_A + (numComics - COMICS_A) * PACK_A_FEE;
                  }
                  else
                  {
                     total_A = PACKAGE_A;
                  }
                  break; 
                  
               case 'b':
                  
                  if(numComics > COMICS_B)
                  {
                     total_B = PACKAGE_B + (numComics - COMICS_B) * PACK_B_FEE;
                  }
                  
                  else
                  {
                     total_B = PACKAGE_B;
                  }
                  fout << "The charges for package b would be $" << total_B << endl;
                  
                  if(numComics > COMICS_A)
                  {
                     total_A = PACKAGE_A + (numComics - COMICS_A) * PACK_A_FEE;
                  }
                  else
                  {
                     total_A = PACKAGE_A;
                  }
                 
                  break;
                  
               case 'C':
               case 'c':
                  fout << "The charges for package C would be $" << PACKAGE_C << endl;
                 
                  if(numComics > COMICS_A)
                  {
                     total_A = PACKAGE_A + (numComics - COMICS_A) * PACK_A_FEE;
                  }
                  else
                  {
                     total_A = PACKAGE_A;
                  }
                  if(numComics > COMICS_B)
                  {
                     total_B = PACKAGE_B + (numComics - COMICS_B) * PACK_B_FEE;
                  }
                  else
                  {
                     total_B = PACKAGE_B;
                  }
                  break;
                  
            }
    
}

void record_options(char plan, int numComics, ofstream& fout)
{
	 switch(plan){
               case 'A':
               case 'a':
      
                  if(total_A > total_B)
                        {
                           fout << "Package B would cost $" << PACKAGE_B 
                                << endl
                                << "The savings would be $" 
                                << total_A - total_B << endl << endl; 
                        }
                        
                        if(total_A > PACKAGE_C)
                        {
                           fout << "Package C would cost $" << PACKAGE_C 
                                << endl
                                << "The savings would be $" 
                                << total_A - PACKAGE_C << endl << endl; 
                        }
                     
                     
                  break;
                     
                         
               case 'B':
               case 'b':
               
                  if(total_A < total_B)
                  {
                     fout << "Package A would cost $" << total_A
                          << endl
                          << "The savings would be $" 
                          << total_B - total_A << endl << endl; 
                  }
                                
                  if(total_B > PACKAGE_C)
                  {
                     fout << "Package C would cost $" << PACKAGE_C 
                          << endl
                          << "The savings would be $"  
                          << total_B - PACKAGE_C << endl << endl; 
                  }
                  break;
                  
               case 'C':
               case 'c':
                  
                  if(total_A < PACKAGE_C)
                  {
                     fout << "Package A would cost $" << total_A
                          << endl
                          << "The savings would be $"
                          << PACKAGE_C - total_A << endl << endl; 
                  }
                  
                  if(total_B < PACKAGE_C){
                     fout << "Package B would cost $" << PACKAGE_B 
                          << endl
                          << "The savings would be $" 
                          << PACKAGE_C - total_B << endl << endl; 
                  }
                  break;
}
}

