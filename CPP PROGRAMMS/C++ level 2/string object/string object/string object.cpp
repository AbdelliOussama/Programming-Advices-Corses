#include<iostream>
#include<string>
using namespace std;
int main()  
{
	string S1= "My Name is Oussama abdelli, I Love Programming.";
	//Prints the length of the string   
	 cout << S1.length() << endl;
	 //Returns the letter at position 3 
     cout << S1.at(3) << endl;
	 //Adds @ProgrammingAdvices to the end of string    
	 S1.append(" @ProgrammingAdvices"); 
	 cout << S1 << endl; 
	 //inserts Ali at position 7    
	 S1.insert(47, "And Medical imaging   ");     
	 cout << S1 << endl; 
	 //Prints all the next 8 letters from position 16.   
	 cout << S1.substr(16,8) << endl; 
	 //Adds one character to the end of the string    
	 S1.push_back('X');     
	 cout << S1 << endl; 
	 //Removes one character from the end of the string    
	 S1.pop_back();  
	 cout << S1 << endl;
	 //Finds Ali in the string   
	 cout << S1.find("Oussama") << endl; 
	 //Finds ali in the string    
	 cout << S1.find("PHd") << endl; 
	 if (S1.find("PHD") == S1.npos)  
	 {      
		 cout << "PHD is not found";    
	 } //clears all string letters.    
	 S1.clear();     
	 cout << S1 << endl; 
	 return 0;
} 