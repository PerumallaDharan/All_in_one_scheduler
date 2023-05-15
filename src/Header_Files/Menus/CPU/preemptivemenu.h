#include<iostream>
#include<fstream>
#include "CPU_Scheduling_Headers\preemptive.h"
using namespace std;

int preemptivemenu(){
    int n;
    cout << "-----------------------------------------------------------------------------------------------------------" << endl;
    cout << "----------------------------------------Preemptive Priority Menu--------------------------------------------" << endl;
    cout << "-----------------------------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t\t\tChoose any one of the following" << endl;
    cout << "\t\t\t\t\t1. Preemptive Priority Description" << endl;
    cout << "\t\t\t\t\t2. Preemptive Priority Example" << endl;
    cout << "\t\t\t\t\t3. Preemptive Priority Code" << endl;
    cout << "\t\t\t\t\t4. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> n;
    fstream myfile;
    string line;
    system("cls");
    switch (n)
    {
    case 1:
        myfile.open("Preemptive_Priority_Description.txt", ios::in);
        while (getline(myfile, line))
        {
            cout << line << endl;
        }
        myfile.close();
        break;
    case 2:
        myfile.open("Preemptive_Priority_Example.txt", ios::in);
        while (getline(myfile, line))
        {
            cout << line << endl;
        }
        myfile.close();
        break;
    case 3:
        doprepriority();
        break;
    default:
        cout << "Invalid choice" << endl;
        break;
    }
}