//-------------------------------------------------------------------------------------------
//
//   Name:Joachim Isaac
//
//   Course: CMPS-1044-102, Fall 18, Dr.Tina Johnson
//
//   Purpose:
//
//
//
//
//-------------------------------------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

ifstream infile;
ofstream outfile;



int const SIZE = 20;
int const NUM_OF_GRADES = 7;

class Student{
    
private:
   
    string student_firstname;
    string student_lastname;
    int student_grade;
    int student_grades[NUM_OF_GRADES];
    
    
public:
    
    
    
    
    // default constructor.
    Student(){
        student_firstname = "######";
        student_lastname = "######";
        student_grade = 0;
       
        
    }
    
    
    //parameterized consturctor.
    Student(string first_name,string last_name, int grades){
        
        student_firstname = first_name;
        student_lastname = last_name;
        student_grade = grades;
    }
    
    
    string get_firstname() const{
        
        return student_firstname;
    }
    
    
    string get_lastname() const{
        
        return student_lastname;
    }
    
    int get_grade( int num_inarray){
        
        
        return num_inarray; //student_grades[num_inarray] ;
    }
    
    
    
    void set_firstname(string &firstname){
     
            student_firstname = firstname;
        
    }
    
    
    
    void set_lastname(string &lastname){
        
        student_lastname = lastname;
    }
    
    
    void set_grades( int num_in_array,int grade ){
        
        
        student_grades[num_in_array] = grade;
        
        /*
        if(student_grade > 100 || student_grade < 0){
            
            student_grade = 0;
        }
        
           */
        
    }
    
    /*
     double calculate_student_average(Student grade_object[], int grades[]) {
     
     int average = 0;
     int total = 0;
     
     for(int x = 0; x < SIZE; x++){
     for (int i = 0; i < 7; i++){
     
     total += grade_object[i].;
     average = total / NUM_OF_GRADES;
     }
     
     }
     
     }
     */
    
    
    
    
    
    void sort_studentname(){
    }
    
    void sort_student_average(int grade[]){
        
        
        
        
        
    }
    
    
    void display_student_results(){
        
        
        
        
    }
    
    
    
    
    
    
   void read_student_info(Student stud_infoObject[],string &firstname,string &lastname,int grades[]){
        
        
       for(int j = 0; j < SIZE; j++){
           
           infile >> firstname;
           stud_infoObject[j].set_firstname(firstname);
           infile >> lastname;
           stud_infoObject[j].set_lastname(lastname);
           for(int i = 0; i < NUM_OF_GRADES; i++){
               infile >> grades[i];
               stud_infoObject[j].set_grades(i,grades[i]);
               
               
           }
    
       }
        
    }
        
    
    

    void print_info(Student stud_infoObject[],string &firstname,string &lastname,int grades[]){
        for(int j = 0; j < SIZE; j++){
            
           
            outfile << stud_infoObject[j].get_firstname()<< " ";
            
            outfile << stud_infoObject[j].get_lastname() << " ";
            
            for(int i = 0; i < NUM_OF_GRADES; i++){
             
            outfile << stud_infoObject[j].get_grade(grades[i]) << " ";
            
        }
            
            outfile <<"\n";
    }
    
    
    
}
};











int main()
{
    string firstname = "Joe";
    string lastname = "Brown";
    Student Stud_info[SIZE];
    
    int grades[NUM_OF_GRADES];
    int grade = 0;
    
    
    
    infile.open("students.dat");
    outfile.open("Isaac_Joachim_prog3.txt");
    
    
    
    if(infile){
    
    Student  stud;
    
    
    Student stud2(firstname,lastname,grade);
    stud.read_student_info(Stud_info, firstname, lastname, grades);
    stud.print_info(Stud_info, firstname, lastname, grades);
  
    
    
    
    
    
}
    else
        outfile << "could not open file";
    
    
    
    return 0;
}
