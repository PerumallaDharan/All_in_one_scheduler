#include<iostream>
#include<fstream>
#include "Disc_Scheduling_Headers\pagelook.h"
using namespace std;

int lookmenu(){
    int n;
    cout << "-----------------------------------------------------------------------------------------------------------" << endl;
    cout << "-----------------------------------------------LOOK Menu--------------------------------------------------" << endl;
    cout << "-----------------------------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t\t\tChoose any one of the following" << endl;
    cout << "\t\t\t\t\t1. LOOK Description" << endl;
    // cout << "\t\t\t\t\t2. LOOK Example" << endl;
    cout << "\t\t\t\t\t2. LOOK Code" << endl;
    cout << "\t\t\t\t\t3. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> n;
    fstream myfile;
    string line;
    system("cls");
    switch (n)
    {
    case 1:
        myfile.open("LOOK_Description.txt", ios::in);
        while (getline(myfile, line))
        {
            cout << line << endl;
        }
        myfile.close();
        break;
    // case 2:
    //     myfile.open("LOOK_Example.txt", ios::in);
    //     while (getline(myfile, line))
    //     {
    //         cout << line << endl;
    //     }
    //     myfile.close();
    //     break;
    case 2:
        dopagelook();
        break;
    case 3:
        exit(0);
    default:
        cout << "Invalid choice" << endl;
        break;
    }
}