#include<iostream>
#include<fstream>
#include "Page_Replacement_Headers\fifo.h"
using namespace std;

int fifomenu(){
    int n;
    cout << "-----------------------------------------------------------------------------------------------------------" << endl;
    cout << "-----------------------------------------------FIFO Menu--------------------------------------------------" << endl;
    cout << "-----------------------------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t\t\tChoose any one of the following" << endl;
    cout << "\t\t\t\t\t1. FIFO Description" << endl;
    cout << "\t\t\t\t\t2. FIFO Example" << endl;
    cout << "\t\t\t\t\t3. FIFO Code" << endl;
    cout << "\t\t\t\t\t4. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> n;
    fstream myfile;
    string line;
    system("cls");
    switch (n)
    {
    case 1:
        myfile.open("FIFO_Description.txt", ios::in);
        while (getline(myfile, line))
        {
            cout << line << endl;
        }
        myfile.close();
        break;
    case 2:
        myfile.open("FIFO_Example.txt", ios::in);
        while (getline(myfile, line))
        {
            cout << line << endl;
        }
        myfile.close();
        break;
    case 3:
        dofifo();
        break;
    default:
        cout << "Invalid choice" << endl;
        break;
    }
}