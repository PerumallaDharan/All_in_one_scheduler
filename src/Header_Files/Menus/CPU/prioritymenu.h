#include<iostream>
#include<fstream>
#include "CPU_Scheduling_Headers\priority.h"
using namespace std;

int prioritymenu(){
    int n;
    cout << "-----------------------------------------------------------------------------------------------------------" << endl;
    cout << "---------------------------------------------Priority Menu-------------------------------------------------" << endl;
    cout << "-----------------------------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t\t\tChoose any one of the following" << endl;
    cout << "\t\t\t\t\t1. Priority Description" << endl;
    cout << "\t\t\t\t\t2. Priority Example" << endl;
    cout << "\t\t\t\t\t3. Priority Code" << endl;
    cout << "\t\t\t\t\t4. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> n;
    fstream myfile;
    string line;
    system("cls");
    switch (n)
    {
    case 1:
        myfile.open("Priority_Description.txt", ios::in);
        while (getline(myfile, line))
        {
            cout << line << endl;
        }
        myfile.close();
        break;
    case 2:
        myfile.open("Priority_Example.txt", ios::in);
        while (getline(myfile, line))
        {
            cout << line << endl;
        }
        myfile.close();
        break;
    case 3:
        dopriority();
        break;
    default:
        cout << "Invalid choice" << endl;
        break;
    }
}