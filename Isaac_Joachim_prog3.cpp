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
    
    int get_grade(){
    
        
        return student_grade ;
    }
    
    
    
    void set_firstname(string firstname){
        if(firstname.length() > 12 ||  firstname.length() <= 1 ){
            
            student_firstname = "#######";
        }
        else
            student_firstname = firstname;
        
    }
    
    
    
    void set_lastname(string lastname)const{
    }
    
    
    void set_grades( int grade ){
        if(grade > 100 || grade < 0){
            
            student_grade = 0;
        }
        else
            student_grade = grade;
        
        
        
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
    
    
    
    
    
    
    void read_names(Student name_object[],string firstname, string lastname){
       
        for(int i = 0; i < SIZE; i++){
            infile >> student_firstname;
            infile >> student_lastname;
            name_object[i].set_firstname(firstname);
            name_object[i].set_lastname(lastname);
        }
        
        }

    
   
    
    void read_grades( Student grade_object[], int grades[]){
    
        
        for(int i = 0; i < SIZE; i++){
            for(int x = 0; x < NUM_OF_GRADES; x++){
            infile >> grades[x];
                
            grade_object[i].set_grades(grades[x]);
            
            
            
            }
           
        }
        
       

        
                
                
            
        }

    
    





void print_name(Student name_object[]){
    for(int i = 0; i < SIZE; i++){
        outfile << name_object[i].get_firstname() << " ";
        outfile << name_object[i].get_lastname()<<"\n";
        

    }
}



};











int main()
{
    string firstname = "Joe";
    string lastname = "Brown";
    Student names[SIZE];
    Student gradesobj[SIZE];
    int grades[NUM_OF_GRADES];
    int grade = 0;
    
    
    
    infile.open("students.dat");
    outfile.open("Isaac_Joachim_prog3.txt");
    
    
    Student  stud;
    
    
    Student stud2(firstname,lastname,grade);
    stud.read_names(names, firstname, lastname);
    stud.read_grades(gradesobj, grades);
    stud.print_name(names);
  
    
    
    
    
    
    
    
    

    return 0;
}
