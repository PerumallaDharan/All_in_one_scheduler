#include<iostream>
#include<fstream>
#include "Page_Replacement_Headers\lru.h"
using namespace std;

int lrumenu(){
    int n;
    cout << "-----------------------------------------------------------------------------------------------------------" << endl;
    cout << "-----------------------------------------------LRU Menu--------------------------------------------------" << endl;
    cout << "-----------------------------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t\t\tChoose any one of the following" << endl;
    cout << "\t\t\t\t\t1. LRU Description" << endl;
    // cout << "\t\t\t\t\t2. LRU Example" << endl;
    cout << "\t\t\t\t\t2. LRU Code" << endl;
    cout << "\t\t\t\t\t3. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> n;
    fstream myfile;
    string line;
    system("cls");
    switch (n)
    {
    case 1:
        myfile.open("LRU_Description.txt", ios::in);
        while (getline(myfile, line))
        {
            cout << line << endl;
        }
        myfile.close();
        break;
    // case 2:
    //     myfile.open("LRU_Example.txt", ios::in);
    //     while (getline(myfile, line))
    //     {
    //         cout << line << endl;
    //     }
    //     myfile.close();
    //     break;
    case 2:
        dolru();
        break;
    case 3:
        exit(0);
    default:
        cout << "Invalid choice" << endl;
        break;
    }
}