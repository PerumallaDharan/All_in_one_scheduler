#include<iostream>
#include<fstream>
#include "Page_Replacement_Headers\optimal.h"
using namespace std;

int optimalmenu(){
    int n;
    cout << "-----------------------------------------------------------------------------------------------------------" << endl;
    cout << "-----------------------------------------------Optimal Menu--------------------------------------------------" << endl;
    cout << "-----------------------------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t\t\tChoose any one of the following" << endl;
    cout << "\t\t\t\t\t1. Optimal Description" << endl;
    cout << "\t\t\t\t\t2. Optimal Example" << endl;
    cout << "\t\t\t\t\t3. Optimal Code" << endl;
    cout << "\t\t\t\t\t4. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> n;
    fstream myfile;
    string line;
    system("cls");
    switch (n)
    {
    case 1:
        myfile.open("Optimal_Description.txt", ios::in);
        while (getline(myfile, line))
        {
            cout << line << endl;
        }
        myfile.close();
        break;
    case 2:
        myfile.open("Optimal_Example.txt", ios::in);
        while (getline(myfile, line))
        {
            cout << line << endl;
        }
        myfile.close();
        break;
    case 3:
        dooptimal();
        break;
    default:
        cout << "Invalid choice" << endl;
        break;
    }
}