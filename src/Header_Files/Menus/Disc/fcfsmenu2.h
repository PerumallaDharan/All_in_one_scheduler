#include <iostream>
#include "Disc_Scheduling_Headers\pagefcfs.h"
using namespace std;

int fcfsmenu2()
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
        cout << "Disk scheduling Algorithm:" << endl;
        cout << "" << endl;
        cout << "It is done by Operating System to schedule the I/O requests" << endl;
        cout << "arriving to the disk" << endl;
        cout << "" << endl;
        cout << "It is important as there will be multiple I/O requests and cpu " << endl;
        cout << "can complete only one request and disk algorithms will take " << endl;
        cout << "care to decide which task to be done" << endl;
        cout << "" << endl;
        cout << "There are mainly 4 types:" << endl;
        cout << "	> FCFS" << endl;
        cout << "	> SSTF" << endl;
        cout << "	> SCAN" << endl;
        cout << "	> LOOK" << endl;
        cout << "" << endl;
        cout << "---------------------------------------------------------------" << endl;
        cout << "" << endl;
        cout << "FCFS (First Come First Serve):" << endl;
        cout << "" << endl;
        cout << "FCFS is the simplest of all the Disk algorithms. The request are" << endl;
        cout << "addressed in the order they arrive in the disk" << endl;
        cout << "" << endl;
        cout << "example:" << endl;
        cout << "	the order of the request be 1,5,3,7,9,4" << endl;
        cout << "	the FCFS will schedule as 1,5,3,7,9,4" << endl;
        cout << "" << endl;
        cout << "It's disadvatange is that it will not give the optimal seek time" << endl;
        break;
    case 2:
        dopagefcfs();
        break;
    case 3:
        exit(0);
    default:
        cout << "Invalid choice" << endl;
        break;
    }
}
