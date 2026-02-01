#include <iostream>
#include <fstream> 
 using namespace std;

 ifstream inFile("student_data.txt");
   string TopStudents[10];
   float GPA[52]; 
   int Age[52]; 
   string line;
   string Names[52];
   float TOTALGPA;
   float AVERAGEGPA;
   float HIGHEST;
   string HighestGPA;
   string Young;
   string Old;

int main () 
   {
            for(int x = 0; x < 52; ++x)
               {
                  getline(inFile, line);
                  inFile >> Names[x];
                  
                  inFile >> Age[x];
                
                  inFile >> GPA[x];
                
               }
inFile.close(); 
            for (int x = 0; x<52; ++x)
               {
                 TOTALGPA = TOTALGPA + GPA [x];  
                 AVERAGEGPA = TOTALGPA / 53;               
               }

            //Age High and Low
            for (int x = 0; x < 52; ++x)
               {
                  if (Age[x] = 19 && Age[x] < 20)
                     {
                        Young = Names[x];
                     }
               }
             for (int x = 0; x < 52; ++x)
               {  
                 if (Age[x] = 24 && Age[x] < 25)
                     {
                        Old = Names[x];
                     }
               } 

            //GPA High and Low ()
            for (int x = 0; x < 52; ++x)
               {
                  if (GPA[x] <= HIGHEST || GPA[x] >= HIGHEST)
                     {
                        HighestGPA = Names[x];
                     }
               }

              for(int x = 0; x < 52; ++x)
              {
               cout << Names[x] << " ";
               cout <<" " << Age[x];
               cout << " "<< GPA[x] << endl;
              }

              cout << "The Average GPA between all the students is " << AVERAGEGPA << endl;

              cout << "The Youngest students is:" << Young << endl;

              cout << "The Oldest students is: " << Old << endl;

              cout << "Highest GPA: " << HighestGPA << endl;

            return 0;
      } 
      
     
