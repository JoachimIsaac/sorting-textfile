//--------------------------------------------------------------------------------------------------
//
///  Name: Joachim Isaac (joe).
//
//   Course: CS 1063-202, Spring 19, Cerise, Wuthrich.
//
//   Purpose: This program reads from a file the first-name, last-name and grades of 20 students.
//            The program calculates each student's average and then sorts the students
//            by last-name, and displays the student's last-name, first-name and then their average.
//            After this is done the program then sorts the student's by averages in descending
//            order and then it displays the student's last-name, first-name and average in
//            descending order.
//
//
//
//--------------------------------------------------------------------------------------------------


#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

ifstream infile;
ofstream outfile;


int const NUM_OF_STUDENTS = 20;
//Golbal constant for number of students being read in.
int const NUM_OF_GRADES = 7;
//Global constant for the number of grades each student has.

class Student{
    
private:
    string student_firstname;
    string student_lastname;
    int student_grades[NUM_OF_GRADES];
    double student_average;

    
    
    
public:
    
    
    //Default constructor.
    Student(){
        student_firstname = "######";
        student_lastname = "######";
        student_average = 0.0;
    }
    
    //FIGURE OUT HOW TO USE THIS.0
    //Parameterized consturctor.
    Student(string first_name,string last_name, int average){
        student_firstname = first_name;
        student_lastname = last_name;
        student_average = average;
    }
    
    //Getter function for first-name.
    string get_firstname() const{
        return student_firstname;
    }
    
    //Getter function for last-name.
    string get_lastname() const{
        return student_lastname;
    }
    
    //Getter function for student's average.
    double get_averages(){
        return student_average;
    }
    
    
    //Setter functiion for first-name.
    void set_firstname(string firstname){
            student_firstname = firstname;
    }
    
    
    //Setter functiion for last-name.
    void set_lastname(string lastname){
        student_lastname = lastname;
    }
    
    
    
    //Setter function that sets students' grades that are read through
    //the read_student_info function.It takes in an integer that act's
    //as the index value and another integer that is the grade that needs
    //to be set into the student_grades array.
    void set_grades(int grade_position_in_array, int grade){
        student_grades[grade_position_in_array] = grade;
    }
    
    
    //This function totals the grades stored in student_grades array
    // and then divides them by the number of grades to calculate the
    //students'average. Then sets the result in the student_average variable.
    void set_averages(){
        int total =0;
        for (int i =0; i < NUM_OF_GRADES; i++){
            total += student_grades[i];
            student_average = total/double(NUM_OF_GRADES);
            }
        }
    
    
    
    // This function reads in the student's first-name,last-name and all their grades;
    void read_student_info(Student student_info_Object [],string firstname,string lastname,int grades[]){
        
        for(int j = 0; j < NUM_OF_STUDENTS; j++){
            
            infile >> firstname;
            //sets each first-name into object array each time it reads in that value.
            student_info_Object[j].set_firstname(firstname);
            
            infile >> lastname;
            //sets each last-name into object array each time it reads in that value.
            student_info_Object[j].set_lastname(lastname);
            
            
            for(int i = 0; i < NUM_OF_GRADES; i++){
                infile >> grades[i];
                student_info_Object[j].set_grades(i, grades[i]);
                //This is where the set grades function is unitilized to
                //set the grades in the student_grades array and then
                //set that array within the student_info_Object array.
                
            }
        }
    }
    
    //This is the bubble sort function that sorts the students by last name.
    //After sorting it prints out the sorted result.
    void Bubble_sort_names(Student student_info_Object[]){
        
        Student temp;
        bool swap;
        
        do {
            swap = false;
            for (int count = 0; count < (NUM_OF_STUDENTS - 1); count++){
                
            student_info_Object[count].set_averages();//This sets all the averages into the object array
                
                
            if(student_info_Object[count].get_lastname() > student_info_Object[count+1].get_lastname())
                {//If the lastname in the first position based on index value (count)
                //is more than the last-name in the next position base on index (count+1).
                //Then the following is executed and this sorts the names in alphabetical order.
    
                    temp = student_info_Object[count];
                    student_info_Object[count] = student_info_Object [count +1];
                    student_info_Object[count + 1] = temp;
                    swap = true;
                    
                }
            }
        }while(swap);
        
        outfile<<"Sorted by last name:"<<"\n"<<"\n";
        //This loop prints out the sorted result after the sorting has finished.
        for(int j = 0; j < NUM_OF_STUDENTS; j++){
            
        outfile<<setprecision(1)<<fixed;
            outfile<<student_info_Object[j].get_lastname()<<", ";
            outfile<<left<<setw(20)<<student_info_Object[j].get_firstname();
            
           outfile<<right<<setw(5)<<student_info_Object[j].get_averages();
            
           
            
            
            
            outfile <<"\n";
        }
    }
    
    
    //This is the selection sort function that sorts the student's by average.
    void selection_Sort_student_average(Student student_info_Object[]){
        
        //This loop sets all the averages into the student_info_Object array.
        for(int y = 0 ; y < NUM_OF_STUDENTS;y++)
        student_info_Object[y].set_averages();
        
        
        for(int i = 0; i < NUM_OF_STUDENTS - 1; ++i){
           
            int min = i;
            for(int j = i+1; j < NUM_OF_STUDENTS; ++j)
                if(student_info_Object[j].get_averages() < student_info_Object[min].get_averages())
                    min = j;
            //If the average in position [j] of the student_info_object is less that the
            //average in position [i] then a swap is done using swap function and two
            //student_info_Object positions --- [min] and [i].
           swap( student_info_Object[min], student_info_Object[i]);
            
        }
    
        
        
        //This loop prints out the sorted result after the sorting has finished.
        for(int t = 0; t < NUM_OF_STUDENTS; t++){
        
            outfile << student_info_Object[t].get_lastname() << " ";
            
            outfile << student_info_Object[t].get_firstname()<< " ";
            
            outfile  << setprecision(3)<< student_info_Object[t].get_averages()<<" ";
            
            outfile <<"\n";
        
        }
    }
    
   };
        
    


int main()
{
    string firstname = "Joe";
    string lastname = "Brown";
    
    //This is an object array that is initialized to hold 20 students
    Student Student_Info[NUM_OF_STUDENTS];
    
    int grades[NUM_OF_GRADES];
    int average = 0;
    
    
    
    infile.open("students.dat");
    outfile.open("Isaac_Joachim_prog3.txt");
    
    
    
    if(infile){

    Student  stud;
    
    Student stud2(firstname,lastname,average);
    
        
    stud.read_student_info(Student_Info,firstname,lastname,grades);
    
    outfile << "Joachim Isaac"<<"\n"<<"\n";
        
    stud.Bubble_sort_names(Student_Info);
    
    //stud.selection_Sort_student_average(Student_Info);
    
}
    else
        outfile << "could not open file";
    
    
    
    return 0;
    
}
