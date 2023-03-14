// Honor Pledge:
//
// I pledge that I have neither given nor 
// received any help on this assignment.
//
// magordon 

#include <fstream> 
#include <iostream> 
#include <string>
#include <sstream> 



void calculateLetterGrade (double percent, char & letter); 

int main ()
{  // Delcaring Variables 
	std::string fileName(" ");
	std::string outputName(" ");  
	double total(0), assignmentAvg(0), particitpationAvg(0),midtermAvg(0), finalAvg(0); 
	char grade(' '); 
	
	std::cout << "Welcome to Mychael's Grade Calculator!" << std::endl << std::endl; 
	
	std::cout << "Please enter the file you wish to open: "; 
	std::cin >> fileName; 
	
	// Open file to read 
	std::ifstream inputFile(fileName); 
	
	std::cout << std::endl;  
		
	
	//Display file on console 
	if(inputFile.is_open()) //Checking if file is open 
	{
		std::cout << "Reading from file " << fileName << "..." << std::endl;
		
		// Grade Category String Variable 
		std::string gradeCategory(""); 
		
		std::stringstream converter; 
		std::stringstream parser; 
		
		while(!inputFile.eof()) //Used to read things in 
		{
			std::string x(" "); 
			std::string y(" "); 
			double sum(0);
			parser.clear(); 
			parser.str(""); 
			
			 
			
			
			std::getline(inputFile, gradeCategory); 
			std::getline(inputFile, x); 
			
			
			parser << x; 
			
			
			int track(0.0);
			
				while(std::getline(parser, y, ',')) // Reading in the first line with multiple things in it 
				{
					converter.clear(); 
					converter.str(""); 
					
					
					
					double numb(0.0); 
					//Changing string to int 
					converter << y; 
					converter >> numb; 
				
					sum = sum + numb;
					track++;  
				
				}
				//Calculating Stuff 
				
			
			if(gradeCategory == "Assignments")
			{
			
				assignmentAvg = sum / track;
				total = total + (assignmentAvg *.5);
			}
			else if(gradeCategory == "Participation")
			{
				particitpationAvg = sum / track;
				total = total + (particitpationAvg * .1);
			}
			else if(gradeCategory == "Midterm")
			{
				midtermAvg = sum / track;
				total = total + (midtermAvg * .2) ;
			}
			else if(gradeCategory == "Final")
			{
				finalAvg = ( sum / track); 
				total = total + (finalAvg * .2); 
			}
			else 
			{
				//Nothing! 
			}
			
			
		} // End of While statement from line 43 
			
		
		
			
	calculateLetterGrade(total, grade); 
	std::cout << std::endl; 
	std::cout << "Save To (Filename): "; 
	std::cin >> outputName; 
		
	std::ofstream outputFile(outputName); 
		
	if(outputFile.is_open())
		{
				
			outputFile << total << " " << grade << std::endl;
			std::cout << std::endl; 
			std::cout << "Score & Letter Grade written to file: " << outputName << std::endl; 
		}
		else 
		{
			std::cout << "Unable to open file" << std::endl;
		} 	
			
		std::cout << std::endl; 	
		std::cout << "Thank you for running my program -  good bye!" << std::endl; 
			
			 
		}  // End of if statement 
 
	inputFile.close(); //Closing file 
	return 0; 

} // End of Main 

//Calculate Letter grade function 
void calculateLetterGrade (double percent, char & letter)
{
	
	std::cout << std::endl << "Calculating grades..." << std::endl; 
	
	if(percent>=90)
	{
		letter='A'; 
	}
	else if(percent>=80 && percent < 90)
	{
		letter = 'B';
	}
	else if(percent>=70 && percent < 80)
	{
		letter = 'C';
	}
	else if(percent>=60 && percent < 70)
	{
		letter = 'D';
	}
	else
	{
		letter = 'F';
	}
}


