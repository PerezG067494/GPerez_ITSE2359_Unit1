#include <iostream>
#include <fstream> 
 using namespace std;

 ifstream inFile("student_data.txt");
   int Size = 52;
   float GPA[52]; 
   int Age[52]; 
   string line;
   string Names[52];
   float TOTALGPA;
   float AVERAGEGPA;
   float HIGHEST;
   string HighestGPA;
   int youngest = -100;
   int oldest = 100;
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
            for (int x = 0; x<52; ++x)
               {
                 TOTALGPA = TOTALGPA + GPA [x];  
                 AVERAGEGPA = TOTALGPA / 53;               
               }
            
            //Age High and Low
            for (int x = 0; x < 52; ++x)
               {
                 if (Age[x] <= youngest || Age[x] >= youngest)
                     {
                        Young = Names[x];
                      

                 if (Age[x] <= oldest || Age[x] >= oldest)
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

inFile.close();

              for(int x = 0; x < 52; ++x)
              {
               cout << Names[x] << " ";
               cout <<" " << Age[x];
               cout << " "<< GPA[x] << endl;
              }

              cout << "The Average GPA between all the students is " << AVERAGEGPA << endl;
              cout << "The Youngest student is " << Young << endl;
              cout << "The Oldest student is " << Old << endl;

              cout << "Highest GPA: " << HighestGPA << endl;

            return 0;
      } 
      
   }  
