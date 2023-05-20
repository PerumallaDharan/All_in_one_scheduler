#include <iostream>
#include "CPU_Scheduling_Headers\roundrobin.h"
using namespace std;

int roundrobinmenu()
{
    int n;
    cout << "-----------------------------------------------------------------------------------------------------------" << endl;
    cout << "-------------------------------------------Round Robin Menu------------------------------------------------" << endl;
    cout << "-----------------------------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t\t\tChoose any one of the following" << endl;
    cout << "\t\t\t\t\t1. Round Robin Description" << endl;
    cout << "\t\t\t\t\t3. Round Robin Code" << endl;
    cout << "\t\t\t\t\t4. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> n;
    system("cls");
    switch (n)
    {
    case 1:
        cout << "Round Robin" << endl;
        cout << "" << endl;
        cout << "Operating systems frequently use the CPU scheduling algorithm " << endl;
        cout << "known as round robin. It is made to ensure equitable CPU " << endl;
        cout << "distribution among various processes. " << endl;
        cout << "Each process is given a fixed time quantum or time slice during " << endl;
        cout << "Round Robin (RR) scheduling, and the processes are carried out " << endl;
        cout << "in a cyclical fashion." << endl;
        cout << "Because processes are carried out in a round-robin fashion, round " << endl;
        cout << "robin scheduling guarantees that every process has an equal chance " << endl;
        cout << "to run. " << endl;
        cout << "Since no process must wait for a long time, it offers an appropriate " << endl;
        cout << "response time for interactive tasks. Additionally, it stops one " << endl;
        cout << "process from using the CPU exclusively for an extended period of time." << endl;
        cout << "Round Robin scheduling, however, might not be appropriate in situations " << endl;
        cout << "where there are numerous lengthy processes. " << endl;
        cout << " " << endl;
        cout << "" << endl;
        cout << "Example:-" << endl;
        cout << "" << endl;
        cout << "process id       Arival time         Burst time" << endl;
        cout << "1                   0                   5" << endl;
        cout << "2                   1                   3" << endl;
        cout << "3                   2                   1" << endl;
        cout << "4                   3                   2" << endl;
        cout << "5                   4                   3" << endl;
        cout << "Solution:-" << endl;
        cout << "" << endl;
        cout << "1->2->3->1->4->5->2->1->5" << endl;
        cout << "" << endl;
        break;
    case 2:
        doroundrobin();
        break;
    case 3:
        exit(0);
    default:
        cout << "Invalid choice" << endl;
        break;
    }
}