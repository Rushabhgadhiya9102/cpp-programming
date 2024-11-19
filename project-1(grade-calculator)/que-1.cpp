// ----------------------------------- SIMPLE GRADE CALCUALTOR -------------------------------

#include <iostream>
using namespace std;

int main () {

    float fmarks;  // fmarks = FLOAT VARIABLE
    int marks;     // marks = INTEGER VARIABLE
    char grade;    // grade = CHARACTER VARIABLE
  
     cout << "Enter your score: ";  // ENTER FLOATING VALUE
     cin >> fmarks;
    
     marks=(int)fmarks; // FLOAT CONVERT INTO INTEGER
    
     grade = (marks<=100 && marks>=90)?'A' : (marks<=89 && marks>=80)? 'B' : (marks<=79 && marks>=70)? 'C' : (marks<=69 && marks>=60)? 'D' : (marks<=59 && marks>=40)? 'E' : (marks<=39 && marks>=20)? 'F' : 'F';
    
     cout << "Your grade is: "<< grade << endl; // PRINT THE GRADE BASED ON MARKS
    
     switch(grade){
    
     	case'A':
     	cout << "Excellent Work" << endl; // PRINT THE MESSAGE BASED ON GRADE
     	break;
    
     	case'B':
     	cout << "Well Done" << endl;  // PRINT THE MESSAGE BASED ON GRADE
     	break;
    
     	case'C':
     	cout << "Good Work" << endl;  // PRINT THE MESSAGE BASED ON GRADE
     	break;
    
     	case'D':
     	cout << "You Passed,but you could do better" << endl;  // PRINT THE MESSAGE BASED ON GRADE
     	break;
    
     	case'E':
     	cout << "Need to work hard" << endl;  // PRINT THE MESSAGE BASED ON GRADE
     	break;
    
     	case'F':
     	cout << "You have failed the examination" << endl;  // PRINT THE MESSAGE BASED ON GRADE
     	break;
    
     	default:
     	cout << "invalid grade" << endl;  // PRINT THE MESSAGE BASED ON GRADE
     	break;
     } 
    
     // ELIGIBILITY CHECK BASED ON GRADE (A TO D)
    
     if(grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D'){
     	cout << "Congratulations! You are eligible for the next level";
     }else{
     	cout << "Please try your luck next time";
     }

}