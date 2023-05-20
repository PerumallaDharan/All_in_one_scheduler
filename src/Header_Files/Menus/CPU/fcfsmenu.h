#include <iostream>
#include "CPU_Scheduling_Headers\fcfs.h"
using namespace std;

int fcfsmenu()
{
    int n;
    cout << "-----------------------------------------------------------------------------------------------------------" << endl;
    cout << "-----------------------------------------------FCFS Menu--------------------------------------------------" << endl;
    cout << "-----------------------------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t\t\tChoose any one of the following" << endl;
    cout << "\t\t\t\t\t1. FCFS Description" << endl;
    cout << "\t\t\t\t\t2. FCFS Code" << endl;
    cout << "\t\t\t\t\t3. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> n;
    system("cls");
    switch (n)
    {
    case 1:
        cout << "First-Come First-Serve" << endl;
        cout << "" << endl;
        cout << "First-Come, First-Served is a scheduling algorithm used in operating systems. It is a non-preemptive " << endl;
        cout << "scheduling algorithm, meaning that once a process or task is allocated the CPU , it will continue to " << endl;
        cout << "run until it completes or voluntarily gives up the CPU.In the FCFS algorithm, the processes are " << endl;
        cout << "executed in the order they arrive in the system. When a process finishes its execution, the next " << endl;
        cout << "process in the queue gets the CPU." << endl;
        cout << "" << endl;
        cout << "Advantage:-" << endl;
        cout << "The main advantage of the FCFS algorithm is its simplicity. It is easy to understand and implement. " << endl;
        cout << "" << endl;
        cout << "" << endl;
        cout << "Disadvantage:-" << endl;
        cout << "It can suffer from the  convoy effect  where a long process may hold up other shorter processes that " << endl;
        cout << "arrive later which increse in wait time" << endl;
        cout << "" << endl;
        cout << "" << endl;
        cout << "Example:-" << endl;
        cout << "       Process id            arrival time" << endl;
        cout << "       1                         3" << endl;
        cout << "       2                         2" << endl;
        cout << "       3                         1" << endl;
        cout << "       4                         0" << endl;
        cout << "       5                         6" << endl;
        cout << "" << endl;
        cout << "solution:-" << endl;
        cout << "" << endl;
        cout << "4->3->2->1->6" << endl;
        break;
    case 2:
        dofcfs();
        break;
    case 3:
        exit(0);
    default:
        cout << "Invalid choice" << endl;
        break;
    }
}