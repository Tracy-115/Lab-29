// Include necessary headers for file handling, data structures, etc.
#include <iostream>
#include <fstream>
#include <map>
#include <array>
#include <list>
#include <string>
using namespace std;
// Define a function to simulate environmental changes over time
    // Parameters: employees, time period
void workForTheDay(map<string, array<list<string>, 3>>& employees, int Time;

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
        // For each line, extract climate zone and species data
        // Insert species into the appropriate list in the array for their climate zone
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
        for (auto& employ : employee){
            string name = emplo.first;
            auto& lista = employ.second; // it will start from 0, and 0 being assigned task, 1, the emoloyee is working on it, and 2 is saying completed
            //in random, the employees will be moved around
            //in another time, the employee will be moved along the process of assigned to progress to complete
        cout << name << ": " << endl;
        cout << "Task Assigned: "
