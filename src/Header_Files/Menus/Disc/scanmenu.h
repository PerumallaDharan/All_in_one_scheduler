#include <iostream>
#include "Disc_Scheduling_Headers\pagescan.h"
using namespace std;

int scanmenu()
{
    int n;
    cout << "-----------------------------------------------------------------------------------------------------------" << endl;
    cout << "-----------------------------------------------SCAN Menu--------------------------------------------------" << endl;
    cout << "-----------------------------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t\t\tChoose any one of the following" << endl;
    cout << "\t\t\t\t\t1. SCAN Description" << endl;
    cout << "\t\t\t\t\t2. SCAN Code" << endl;
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
        cout << "SCAN (Seeking,Consecutive,Arrival and Non-preemptive:" << endl;
        cout << "" << endl;
        cout << "In Scan, the pointer moves in mentioned direction and schedule all " << endl;
        cout << "requests that are in that direction until it reaches end, it moves" << endl;
        cout << "in the opposite direction and schedule the requests that are " << endl;
        cout << "in that direction which are not accepted previously" << endl;
        cout << "" << endl;
        cout << "example:" << endl;
        cout << "	let the order of request be 82,170,43,140,24,16,190" << endl;
        cout << "	let the size of the disk be (0 to 250)" << endl;
        cout << "	let the pointer be on 50 and it moves towards the larger value" << endl;
        cout << "" << endl;
        cout << "	in the above example, the pointer start from 50 and moves" << endl;
        cout << "	to the end(i.e 250) and moves in opposite direction until" << endl;
        cout << "	it reaches 0." << endl;
        cout << "" << endl;
        cout << "	the scan algorithm will schedule as 82,140,170,190,43,24,16" << endl;
        break;
    case 2:
        dopagescan();
        break;
    case 3:
        exit(0);
    default:
        cout << "Invalid choice" << endl;
        break;
    }
}