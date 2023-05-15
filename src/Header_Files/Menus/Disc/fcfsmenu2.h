#include<iostream>
#include<fstream>
#include "Disc_Scheduling_Headers\pagefcfs.h"
using namespace std;

int fcfsmenu2(){
    int n;
    cout << "-----------------------------------------------------------------------------------------------------------" << endl;
    cout << "-----------------------------------------------FCFS Menu--------------------------------------------------" << endl;
    cout << "-----------------------------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t\t\tChoose any one of the following" << endl;
    cout << "\t\t\t\t\t1. FCFS Description" << endl;
    cout << "\t\t\t\t\t2. FCFS Example" << endl;
    cout << "\t\t\t\t\t3. FCFS Code" << endl;
    cout << "\t\t\t\t\t4. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> n;
    fstream myfile;
    string line;
    system("cls");
    switch (n)
    {
    case 1:
        myfile.open("FCFS_Description.txt", ios::in);
        while (getline(myfile, line))
        {
            cout << line << endl;
        }
        myfile.close();
        break;
    case 2:
        myfile.open("FCFS_Example.txt", ios::in);
        while (getline(myfile, line))
        {
            cout << line << endl;
        }
        myfile.close();
        break;
    case 3:
        dopagefcfs();
        break;
    default:
        cout << "Invalid choice" << endl;
        break;
    }
}
