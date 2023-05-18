#include<iostream>
#include<fstream>
#include "Disc_Scheduling_Headers\pagescan.h"
using namespace std;

int scanmenu(){
    int n;
    cout << "-----------------------------------------------------------------------------------------------------------" << endl;
    cout << "-----------------------------------------------SCAN Menu--------------------------------------------------" << endl;
    cout << "-----------------------------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t\t\tChoose any one of the following" << endl;
    cout << "\t\t\t\t\t1. SCAN Description" << endl;
    // cout << "\t\t\t\t\t2. SCAN Example" << endl;
    cout << "\t\t\t\t\t2. SCAN Code" << endl;
    cout << "\t\t\t\t\t3. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> n;
    fstream myfile;
    string line;
    system("cls");
    switch (n)
    {
    case 1:
        myfile.open("SCAN_Description.txt", ios::in);
        while (getline(myfile, line))
        {
            cout << line << endl;
        }
        myfile.close();
        break;
    // case 2:
    //     myfile.open("SCAN_Example.txt", ios::in);
    //     while (getline(myfile, line))
    //     {
    //         cout << line << endl;
    //     }
    //     myfile.close();
    //     break;
    case 2:
        dopagescan();
        break;
    case 3:
        exit(0);
    default:
        cout << "Invalid choice" << endl;
        break;
    }
}