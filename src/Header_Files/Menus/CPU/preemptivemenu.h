#include <iostream>
#include "CPU_Scheduling_Headers\preemptive.h"
using namespace std;

int preemptivemenu()
{
    int n;
    cout << "-----------------------------------------------------------------------------------------------------------" << endl;
    cout << "----------------------------------------Preemptive Priority Menu--------------------------------------------" << endl;
    cout << "-----------------------------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t\t\tChoose any one of the following" << endl;
    cout << "\t\t\t\t\t1. Preemptive Priority Description" << endl;
    cout << "\t\t\t\t\t2. Preemptive Priority Code" << endl;
    cout << "\t\t\t\t\t3. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> n;
    system("cls");
    switch (n)
    {
    case 1:
        cout << "Preemptive scheduling" << endl;
        cout << "" << endl;
        cout << "Preemptive scheduling is a scheduling approach in computer science and " << endl;
        cout << "operating systems where a running process can be interrupted or preempted " << endl;
        cout << "by the scheduler to allow another process with higher priority or " << endl;
        cout << "shorter burst time to run. It offers advantages such as better " << endl;
        cout << "responsiveness and prioritization of processes, enabling the scheduling " << endl;
        cout << "algorithm to make more informed decisions, and improving fairness and " << endl;
        cout << "resource utilization. Common preemptive scheduling algorithms include " << endl;
        cout << "Shortest Remaining Time First and Round Robin. It is widely used in modern " << endl;
        cout << "operating systems and is particularly suited for time-sharing systems, " << endl;
        cout << "real-time systems, and environments where fairness, responsiveness, and " << endl;
        cout << "efficient resource utilization are important." << endl;
        cout << "" << endl;
        cout << "" << endl;
        cout << "Example:-" << endl;
        cout << "" << endl;
        cout << "Process id          priority        Arrival Time" << endl;
        cout << "1                      2                    0" << endl;
        cout << "2                      6                    1" << endl;
        cout << "3                      3                    2" << endl;
        cout << "4                      5                    3" << endl;
        cout << "5                      4                    4" << endl;
        cout << "6                     10                    5" << endl;
        cout << "7                      9                    6" << endl;
        cout << "Solution-:" << endl;
        cout << "1 ->2 ->3 ->5 ->4 ->2 ->7 ->6" << endl;
        break;
    case 2:
        doprepriority();
        break;
    case 3:
        exit(0);
    default:
        cout << "Invalid choice" << endl;
        break;
    }
}