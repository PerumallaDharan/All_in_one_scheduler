#include<iostream>
#include<fstream>
#include "Deadlocks_Headers\producer_consumer.h"
using namespace std;

int producer_consumer_menu(){
    int n;
    cout << "-----------------------------------------------------------------------------------------------------------" << endl;
    cout << "--------------------------------Producer Consumer Problem using Semaphores--------------------------------" << endl;
    cout << "-----------------------------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t\t\tChoose any one of the following" << endl;
    cout << "\t\t\t\t\t1. Producer Consumer Problem using Semaphores Description" << endl;
    cout << "\t\t\t\t\t2. Producer Consumer Problem using Semaphores Example" << endl;
    cout << "\t\t\t\t\t3. Producer Consumer Problem using Semaphores Code" << endl;
    cout << "\t\t\t\t\t4. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> n;
    fstream myfile;
    string line;
    system("cls");
    switch (n)
    {
    case 1:
        myfile.open("Producer_Consumer_Description.txt", ios::in);
        while (getline(myfile, line))
        {
            cout << line << endl;
        }
        myfile.close();
        break;
    case 2:
        myfile.open("Producer_Consumer_Example.txt", ios::in);
        while (getline(myfile, line))
        {
            cout << line << endl;
        }
        myfile.close();
        break;
    case 3:
        producer_consumer();
        break;
    default:
        cout << "Invalid choice" << endl;
        break;
    }
}
