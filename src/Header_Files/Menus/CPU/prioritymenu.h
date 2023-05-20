#include <iostream>
#include "CPU_Scheduling_Headers\priority.h"
using namespace std;

int prioritymenu()
{
    int n;
    cout << "-----------------------------------------------------------------------------------------------------------" << endl;
    cout << "---------------------------------------------Priority Menu-------------------------------------------------" << endl;
    cout << "-----------------------------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t\t\tChoose any one of the following" << endl;
    cout << "\t\t\t\t\t1. Priority Description" << endl;
    cout << "\t\t\t\t\t3. Priority Code" << endl;
    cout << "\t\t\t\t\t4. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> n;
    system("cls");
    switch (n)
    {
    case 1:
        cout << "Non-preemptive priority" << endl;
        cout << "" << endl;
        cout << "Non-preemptive priority scheduling is a scheduling algorithm used in " << endl;
        cout << "operating systems where each process is assigned a priority value and " << endl;
        cout << "the process with the highest priority is selected for execution first. " << endl;
        cout << "When a process arrives or becomes ready, its priority is compared to " << endl;
        cout << "the priorities of the processes already in the ready queue." << endl;
        cout << "If the process has a higher priority than the processes in the queue, " << endl;
        cout << "it is placed ahead of them. Non-preemptive priority scheduling is " << endl;
        cout << "suitable for situations where prioritization is critical, such as " << endl;
        cout << "real-time systems or environments where meeting deadlines is crucial. " << endl;
        cout << "However, it may not be suitable in scenarios where shorter processes with " << endl;
        cout << "lower priority might get delayed excessively by long-running processes " << endl;
        cout << "with higher priority." << endl;
        cout << "" << endl;
        cout << "" << endl;
        cout << "Example:-" << endl;
        cout << "" << endl;
        cout << "Process id       priority        Arrival Time" << endl;
        cout << "1                 2                 0" << endl;
        cout << "2                 6                 2" << endl;
        cout << "3                 3                 1" << endl;
        cout << "4                 5                 4" << endl;
        cout << "5                 7                 6" << endl;
        cout << "6                 4                 5" << endl;
        cout << "7                 10                7" << endl;
        cout << "" << endl;
        cout << "Solution:-" << endl;
        cout << "     1-> 3-> 6-> 4-> 2-> 5-> 7" << endl;
        break;
    case 2:
        dopriority();
        break;
    case 3:
        exit(0);
    default:
        cout << "Invalid choice" << endl;
        break;
    }
}