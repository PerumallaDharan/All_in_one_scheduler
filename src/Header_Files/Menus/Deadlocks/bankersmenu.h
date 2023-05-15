#include<iostream>
#include<fstream>
#include "Deadlocks_Headers\banker.h"
using namespace std;

int bankers_menu(){
    int n;
    cout << "-----------------------------------------------------------------------------------------------------------" << endl;
    cout << "--------------------------------------------Bankers Algorithm----------------------------------------------" << endl;
    cout << "-----------------------------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t\t\tChoose any one of the following" << endl;
    cout << "\t\t\t\t\t1. Bankers Algorithm Description" << endl;
    cout << "\t\t\t\t\t2. Bankers Algorithm Example" << endl;
    cout << "\t\t\t\t\t3. Bankers Algorithm Code" << endl;
    cout << "\t\t\t\t\t4. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> n;
    fstream myfile;
    string line;
    system("cls");
    switch (n)
    {
    case 1:
        myfile.open("Bankers_Description.txt", ios::in);
        while (getline(myfile, line))
        {
            cout << line << endl;
        }
        myfile.close();
        break;
    case 2:
        myfile.open("Bankers_Example.txt", ios::in);
        while (getline(myfile, line))
        {
            cout << line << endl;
        }
        myfile.close();
        break;
    case 3:
        banker();
        break;
    default:
        cout << "Invalid choice" << endl;
        break;
    }
}