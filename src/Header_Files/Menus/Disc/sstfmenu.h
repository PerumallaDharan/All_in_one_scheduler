#include <iostream>
#include "Disc_Scheduling_Headers\pagesstf.h"
using namespace std;

int sstfmenu()
{
    int n;
    cout << "-----------------------------------------------------------------------------------------------------------" << endl;
    cout << "-----------------------------------------------SSTF Menu--------------------------------------------------" << endl;
    cout << "-----------------------------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t\t\tChoose any one of the following" << endl;
    cout << "\t\t\t\t\t1. SSTF Description" << endl;
    cout << "\t\t\t\t\t2. SSTF Code" << endl;
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
        cout << "SSTF (Shortest Seek Time First):" << endl;
        cout << "" << endl;
        cout << "In SSTF, requests that are closest to the present pointer will" << endl;
        cout << "execute first." << endl;
        cout << "So, the seek time of the requests are calculated in advance and " << endl;
        cout << "then scheduled" << endl;
        cout << "" << endl;
        cout << "example:" << endl;
        cout << "	let the order of the request be 82,170,43,140,24,16,190" << endl;
        cout << "	let the current position be at 50" << endl;
        cout << "" << endl;
        cout << "	the SSTF will schedule as 43,24,16,82,140,170,190" << endl;
        break;
    case 2:
        dopagesstf();
        break;
    case 3:
        exit(0);
    default:
        cout << "Invalid choice" << endl;
        break;
    }
}