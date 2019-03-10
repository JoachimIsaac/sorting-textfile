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
             
             outfile  << setprecision(3)<< stud_infoObject[j].get_averages()<<" ";
            
             outfile <<"\n";
             }
                 
             }
    
    
    
    void sort_studentname(){
    }
    
    void Bubble_sort_student_average(Student stud_infoObject[],int grades[]){
       
        Student temp;
        bool swap;

        do {
            swap = false;
            for (int count = 0; count < (19); count++){
                stud_infoObject[count].set_averages();
                if(stud_infoObject[count].get_averages() > stud_infoObject[count + 1].get_averages())
                {
                    temp = stud_infoObject[count];
                    stud_infoObject[count] = stud_infoObject[count +1];
                    stud_infoObject[count + 1] = temp;
                    swap = true;
                    
                    
                }
            }
            
            
        }while(swap);
        
        
        for(int j = 0; j < SIZE; j++){
            
            
            outfile << stud_infoObject[j].get_lastname() << " ";
            
            outfile << stud_infoObject[j].get_firstname()<< " ";
            
            outfile  << setprecision(3)<< stud_infoObject[j].get_averages()<<" ";
            
            outfile <<"\n";
        }
    }
    void Bubble_sort_names(Student stud_infoObject[],string firstname,string lastname){
        
        Student temp;
        bool swap;
        
        do {
            swap = false;
            for (int count = 0; count < (19); count++){
                
                stud_infoObject[count].set_averages();
            if(stud_infoObject[count].get_lastname() > stud_infoObject[count+1].get_lastname())
                {
                    temp = stud_infoObject[count];
                    stud_infoObject[count] = stud_infoObject[count +1];
                    stud_infoObject[count + 1] = temp;
                    swap = true;
                    
                    
                }
            }
            
            
        }while(swap);
        
        
        for(int j = 0; j < SIZE; j++){
            
            
            outfile << stud_infoObject[j].get_lastname() << " ";
            
            outfile << stud_infoObject[j].get_firstname()<< " ";
            
            outfile  << setprecision(3)<< stud_infoObject[j].get_averages()<<" ";
            
            outfile <<"\n";
        }
    }
    
    
    void selection_Sort_student_average(Student stud_infoObject[], int grades[]){
        
        
 
        int startScan,minIndex,minValue1;
        Student  minValue2;
        
        for(startScan = 0; startScan < (19); startScan++){
            
            stud_infoObject[startScan].set_averages();
            minIndex = startScan;
            minValue1 = stud_infoObject[startScan].get_averages();
            
            for(int index = startScan + 1; index < SIZE; index++){
            if(stud_infoObject[index].get_averages() < stud_infoObject[startScan].get_averages()){
                    stud_infoObject[startScan] = stud_infoObject[index];
                    minIndex = index;
            
        }
            else{
                stud_infoObject[minIndex] = stud_infoObject[startScan].get_averages();
                stud_infoObject[startScan] = stud_infoObject[startScan];
                
            }
    }
            
            
        }
        
        
        for(int t = 0; t < SIZE; t++){
            
            
            outfile << stud_infoObject[t].get_lastname() << " ";
            
            outfile << stud_infoObject[t].get_firstname()<< " ";
            
            outfile  << setprecision(3)<< stud_infoObject[t].get_averages()<<" ";
            
            outfile <<"\n";
        
    }
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
    
   //stud.Bubble_sort_student_average(Stud_info, averages);
        
    
    //stud.calculate_student_average(Stud_info,averages);
    
    //stud.Insertion_sort_student_name(Stud_info,firstname,lastname);
    
    //stud.Bubble_sort_names(Stud_info, firstname, lastname);
    
        stud.selection_Sort_student_average(Stud_info, averages);
    
}
    else
        outfile << "could not open file";
    
    
    
    return 0;
}
