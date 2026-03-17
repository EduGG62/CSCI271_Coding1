#include <iostream>
#include <limits>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;


const int MAX = 5;
const int COURSE_COUNT = 3;


// Function prototypes
void calculateStudent(int i, double Score[][3], double &total, double &average);
void displayAll(int n, string NameArr[], double Score[][3]);
int findTopStudent(int n, double Score[][3]);

int main()
{
    // Test data stored directly in main()
    int n = 3;
    string NameArr[MAX] = {"Alice", "Bob", "Carl"};
    double Score[MAX][3] = {
        {90, 85, 95},
        {70, 80, 75},
        {88, 92, 84}
    };
   


    cout << fixed << setprecision(2);
    cout << "======= Student Grade Report =======" << endl;
    displayAll(n,NameArr,Score);
    
    int topIndex = findTopStudent(n,Score);
    
    double total = 0;
    double average = 0;
    calculateStudent(topIndex,Score,total,average);
    
    cout << "\nTop Student: " << NameArr[topIndex] << " | Total: " << total<< "  | Average: " << average << endl;
    
    
    // TODO:
    // 1. print the title
    // 2. call displayAll(...)
    // 3. find the top student index
    // 4. call calculateStudent(...) for the top student
    // 5. print the top student's name and total

    return 0;
}

// Calculate total and average for one student
void calculateStudent(int i, double Score[][3], double &total, double &average)
{
    total = 0;
    for ( int j = 0; j < 3; j++) {
        total = total + Score[i][j];
    }
    average = total/3;
    // TODO:
    // 1. calculate the total of the 3 courses for student i
    // 2. calculate the average
}

// Display all students' information
void displayAll(int n, string NameArr[], double Score[][3])
{
    string course[3] = {"Math","C Programing","Operating Systems"};
    
    
    for (int i = 0; i < n; i++) {
        double total = 0;
        double average = 0;
        
        calculateStudent(i,Score,total,average);
        
        cout << NameArr[i] << " | ";
        
        for (int j = 0; j < 3; j++){
            cout << course[j] << " = " << Score[i][j] << " | ";
        }
        cout << "Total: " << total << " | ";
        cout << "Average: " << average << " | " << endl;
    }
    // TODO:
    // 1. loop through each student
    // 2. call calculateStudent(...) for each student
    // 3. print name, 3 grades, total, and average
    // Hint: do not repeat the total/average logic here
}

// Find the index of the student with the highest total score
int findTopStudent(int n, double Score[][3])
{
   int topStudent = 0;
    double maxTotal = -1;
    
    for (int i = 0; i < n; i++) {
        double total = 0;
        double average = 0;
        
        calculateStudent(i,Score,total,average);
        
        if (total > maxTotal ) {
            maxTotal = total;
            topStudent = i;
        }
    }
    return topStudent;
    // TODO:
    // Hint: reuse calculateStudent(...) instead of recalculating totals here
}
