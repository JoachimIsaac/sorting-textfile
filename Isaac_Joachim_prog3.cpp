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
    double student_average;

    
    
    
public:
    
    
    
    
    // default constructor.
    Student(){
        student_firstname = "######";
        student_lastname = "######";
        student_grade = 0;
        student_average = 0.0;
        
       
        
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
        
        
        return student_grades[num_inarray];
    }
    
    
    
    double get_averages(){
        
        
        
        return student_average;
    }
    
    
    
    void set_firstname(string &firstname){
     
            student_firstname = firstname;
        
    }
    
    
    
    void set_lastname(string &lastname){
        
        student_lastname = lastname;
    }
    
    
    void set_grades(int gradenum ,int grade ){
        
        student_grades[gradenum] = grade;
        
    }
    
    
    void set_averages(){
        int total =0;
        for (int i =0; i < NUM_OF_GRADES; i++){
            total += student_grades[i];
            student_average = total/double(NUM_OF_GRADES);
            
        }
            
            
    
        }
        /*
        if(student_grade > 100 || student_grade < 0){
            
            student_grade = 0;
        }
        
           */
        
    
    
    
     void calculate_student_average(Student stud_infoObject[], int averages[]) {
         
       
         
         
         
        for(int j = 0; j < SIZE; j++){
            
                
                 
                 
                 
            
             
             stud_infoObject[j].set_averages();
             
             outfile << stud_infoObject[j].get_firstname()<< " ";
             
             outfile << stud_infoObject[j].get_lastname() << " ";
             
             outfile  <<  stud_infoObject[j].get_averages()<<" ";
             
             
             
             outfile <<"\n";
             }
             
             
                 
             }
             
             
         
             
             
            
         
             
         
    
    
     
    
    
     
    
    
    
    
    
    void sort_studentname(){
    }
    
    void sort_student_average(Student stud_infoObject[],int grades[]){
        
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
               stud_infoObject[j].set_grades(i, grades[i]);
               
               
               
           }
    
       }
        
    }
        
    
    

    void print_info(Student stud_infoObject[],string &firstname,string &lastname,int grades[]){
        for(int j = 0; j < SIZE; j++){
            
            
            outfile << stud_infoObject[j].get_firstname()<< " ";
            
            outfile << stud_infoObject[j].get_lastname() << " ";
            
            for(int i = 0; i < NUM_OF_GRADES; i++){
                
                outfile << stud_infoObject[j].get_grade(i) << " ";
                
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
    int averages[SIZE];
    int grade = 0;
    
    
    
    infile.open("students.dat");
    outfile.open("Isaac_Joachim_prog3.txt");
    
    
    
    if(infile){
    
    Student  stud;
    Student stud3;
    
    
    Student stud2(firstname,lastname,grade);
    stud.read_student_info(Stud_info, firstname,lastname, grades);
    //stud.print_info(Stud_info, firstname, lastname, grades);
    stud.calculate_student_average(Stud_info,averages);
    
    
    
    
    
}
    else
        outfile << "could not open file";
    
    
    
    return 0;
}
