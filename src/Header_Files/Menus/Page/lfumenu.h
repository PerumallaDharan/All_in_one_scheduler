#include<iostream>
#include<fstream>
#include "Page_Replacement_Headers\lfu.h"
using namespace std;

int lfumenu(){
    int n;
    cout << "-----------------------------------------------------------------------------------------------------------" << endl;
    cout << "-----------------------------------------------LFU Menu--------------------------------------------------" << endl;
    cout << "-----------------------------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t\t\tChoose any one of the following" << endl;
    cout << "\t\t\t\t\t1. LFU Description" << endl;
    // cout << "\t\t\t\t\t2. LFU Example" << endl;
    cout << "\t\t\t\t\t2. LFU Code" << endl;
    cout << "\t\t\t\t\t3. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> n;
    fstream myfile;
    string line;
    system("cls");
    switch (n)
    {
    case 1:
        myfile.open("LFU_Description.txt", ios::in);
        while (getline(myfile, line))
        {
            cout << line << endl;
        }
        myfile.close();
        break;
    // case 2:
    //     myfile.open("LFU_Example.txt", ios::in);
    //     while (getline(myfile, line))
    //     {
    //         cout << line << endl;
    //     }
    //     myfile.close();
    //     break;
    case 2:
        dolfu();
        break;
    case 3:
        exit(0);
    default:
        cout << "Invalid choice" << endl;
        break;
    }
}