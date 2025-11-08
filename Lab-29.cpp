// Include necessary headers for file handling, data structures, etc.
#include <iostream>
#include <fstream>
#include <map>
#include <array>
#include <list>
#include <string>
using namespace std;
// Define a function to simulate employee task progress over time
    // Parameters: employees, time period
void workForTheDay(map<string, array<list<string>, 3>>& employees, int Time);

// Define main function
int main() {
    // Initialize a map to employee 
    //key = name
    // value = progress
    map<string, array<list<string>, 3>> employees;
    // Open an external file to read initial data about climate zones and populate the map
        // If file does not open, print an error and exit
    ifstream infile("tasks.txt");
    if(!infile) {
        cout << "Could not open file!" << endl;
        return 1;
    }
    // Read data from file and populate map
    // while also taking out data
    string line;
    while (getline(infile, line)){
        //take in data like employee and task
        //add task to list
    }
    infile.close();
    // Close the file
    //going to start the output
    cout << "Starting to Assign" << endl; //this is my starting point for output
    workForTheDay(employees, 25);
    cout << "Completed" << endl;
    return 0;
}
void workForTheDay(map<string, array<list<string>, 3>>& employees, int Time){
    for (int t = 1; t <= Time ; ++t){
        cout << "Time: " << t << endl;
        for (auto& employ : employees){
            string name = employ.first;
            auto& lista = employ.second; // it will start from 0, and 0 being assigned task, 1, the emoloyee is working on it, and 2 is saying completed
            //in random, the employees will be moved around
            //in another time, the employee will be moved along the process of assigned to progress to complete
        cout << name << ": " << endl;
        cout << "Task Assigned: " << lista[0].size() << endl;
        cout << "Task Progress: " << lista[1].size() << endl;
        cout << "Task Completed: " << lista[2].size() << endl;
        }
    }
}
//for my dummys
int example(){
    map<string, array<list<string>, 3>> dummy;
    dummy ["Lily"][0].push_back("Task 1: Mopping the floor");
    dummy ["Lily"][1].push_back("Task 2: Opening Doors and Windows");
    dummy ["Lily"][2].push_back("Task 3: Checking to see if there were any overnight orders");

    cout <<"No.1 Employee Lily" << endl;
    cout << "Task Assigned: " << dummy ["Lily"][0].front() << endl;
    cout << "Task Assigned: " << dummy ["Lily"][1].front() << endl;
    cout << "Task Assigned: " << dummy ["Lily"][2].front() << endl;
    return 0;
}






