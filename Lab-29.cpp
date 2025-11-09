// Include necessary headers for file handling, data structures, etc.
//Kyawt Thinzar Min
//lab-31
//IDE: VS Code

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
        // If file does not open, print an error and exit, and openning an external file
    ifstream infile("tasks.txt");//this is to open the file, specifically, tasks.txt
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
        int comma = line.find(','); //so that we don't count in the commas when we are tkaing in data from the file
        if (comma != -1){
            string name = line.substr(0, comma);
            string task = line.substr(comma +1);
            employees [name][0].push_back(task);
        }
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
            if(!lista[0].empty() && rand()%2){
                lista[1].push_back(lista[0].front());
                lista[0].popfront();
            }
            cout << name << ": " << endl;
            cout << "Task Assigned: " << lista[0].size() << endl;
            cout << "Task Progress: " << lista[1].size() << endl;
            cout << "Task Completed: " << lista[2].size() << endl;
        }
    }
}







