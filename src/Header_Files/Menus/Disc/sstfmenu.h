#include <iostream>
#include <fstream>
#include"Disc_Scheduling_Headers\pagesstf.h"
using namespace std;

int sstfmenu(){
    int n;
    cout << "-----------------------------------------------------------------------------------------------------------" << endl;
    cout << "-----------------------------------------------SSTF Menu--------------------------------------------------" << endl;
    cout << "-----------------------------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t\t\tChoose any one of the following" << endl;
    cout << "\t\t\t\t\t1. SSTF Description" << endl;
    cout << "\t\t\t\t\t2. SSTF Example" << endl;
    cout << "\t\t\t\t\t3. SSTF Code" << endl;
    cout << "\t\t\t\t\t4. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> n;
    fstream myfile;
    string line;
    system("cls");
    switch (n)
    {
    case 1:
        myfile.open("SSTF_Description.txt", ios::in);
        while (getline(myfile, line))
        {
            cout << line << endl;
        }
        myfile.close();
        break;
    case 2:
        myfile.open("SSTF_Example.txt", ios::in);
        while (getline(myfile, line))
        {
            cout << line << endl;
        }
        myfile.close();
        break;
    case 3:
        dopagesstf();
        break;
    default:
        cout << "Invalid choice" << endl;
        break;
    }
}