#include<iostream>
#include<fstream>
#include "CPU_Scheduling_Headers\sjf.h"
using namespace std;

int sjfmenu(){
    int n;
    cout << "-----------------------------------------------------------------------------------------------------------" << endl;
    cout << "-----------------------------------------------SJF Menu---------------------------------------------------" << endl;
    cout << "-----------------------------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t\t\tChoose any one of the following" << endl;
    cout << "\t\t\t\t\t1. SJF Description" << endl;
    cout << "\t\t\t\t\t2. SJF Example" << endl;
    cout << "\t\t\t\t\t3. SJF Code" << endl;
    cout << "\t\t\t\t\t4. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> n;
    fstream myfile;
    string line;
    system("cls");
    switch (n)
    {
    case 1:
        myfile.open("SJF_Description.txt", ios::in);
        while (getline(myfile, line))
        {
            cout << line << endl;
        }
        myfile.close();
        break;
    case 2:
        myfile.open("SJF_Example.txt", ios::in);
        while (getline(myfile, line))
        {
            cout << line << endl;
        }
        myfile.close();
        break;
    case 3:
        dosjf();
        break;
    default:
        cout << "Invalid choice" << endl;
        break;
    }
}