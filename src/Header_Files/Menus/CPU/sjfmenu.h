#include <iostream>
#include "CPU_Scheduling_Headers\sjf.h"
using namespace std;

int sjfmenu()
{
    int n;
    cout << "-----------------------------------------------------------------------------------------------------------" << endl;
    cout << "-----------------------------------------------SJF Menu---------------------------------------------------" << endl;
    cout << "-----------------------------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t\t\tChoose any one of the following" << endl;
    cout << "\t\t\t\t\t1. SJF Description" << endl;
    cout << "\t\t\t\t\t2. SJF Code" << endl;
    cout << "\t\t\t\t\t3. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> n;
    system("cls");
    switch (n)
    {
    case 1:
        cout << "Shortest Job First " << endl;
        cout << "" << endl;
        cout << "The Shortest Job First (SJF) scheduling algorithm chooses to run " << endl;
        cout << "the process with the shortest total execution time or burst time first." << endl;
        cout << "By giving priority to shorter jobs, the SJF algorithm seeks to reduce the " << endl;
        cout << "typical waiting time and turnaround time of processes. Prior knowledge " << endl;
        cout << "of each process' burst time is necessary for SJF implementation to be " << endl;
        cout << "successful.sJF can be used in a non-preemptive manner, where the process " << endl;
        cout << "that arrived first is chosen first, if two processes have the same burst " << endl;
        cout << "time.Due to the need for precise burst time estimates, SJF is not " << endl;
        cout << "appropriate for real-time systems or circumstances where the burst time " << endl;
        cout << "is unknown beforehand.The SJF algorithm may experience starvation, in " << endl;
        cout << "which short processes frequently cause long processes to lag behind. The " << endl;
        cout << "use of ageing methods or other scheduling algorithms can be used to solve " << endl;
        cout << "this problem.As long as all processes are known ahead of time and there are " << endl;
        cout << "no incoming new processes while the SJF algorithm is running, it minimises " << endl;
        cout << "average waiting time to the best possible extent.SJF, a preemptive variant " << endl;
        cout << "of SJF, can serve as the foundation for more intricate scheduling algorithms " << endl;
        cout << "like Shortest Remaining Time First (SRTF)." << endl;
        cout << "" << endl;
        cout << "Advantage:-" << endl;
        cout << "       It gives least waiting time as compared to another process schedulers" << endl;
        cout << "" << endl;
        cout << "Disadvantage:-       " << endl;
        cout << "       It is not implementable because the exact Burst time for a process can't be known in advance." << endl;
        cout << "" << endl;
        cout << "" << endl;
        cout << "Example:-" << endl;
        cout << "" << endl;
        cout << "process id                   Arrival time                 Burst time" << endl;
        cout << "1                              1                             7" << endl;
        cout << "2                              3                             3" << endl;
        cout << "3                              6                             2" << endl;
        cout << "4                              7                            10" << endl;
        cout << "5                              9                             8" << endl;
        cout << "Solution:-" << endl;
        cout << "   *->1->3->2->5->4" << endl;
        break;
    case 2:
        dosjf();
        break;
    case 3:
        exit(0);
    default:
        cout << "Invalid choice" << endl;
        break;
    }
}