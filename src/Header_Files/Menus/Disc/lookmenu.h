#include <iostream>
#include "Disc_Scheduling_Headers\pagelook.h"
using namespace std;

int lookmenu()
{
    int n;
    cout << "-----------------------------------------------------------------------------------------------------------" << endl;
    cout << "-----------------------------------------------LOOK Menu--------------------------------------------------" << endl;
    cout << "-----------------------------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t\t\tChoose any one of the following" << endl;
    cout << "\t\t\t\t\t1. LOOK Description" << endl;
    cout << "\t\t\t\t\t2. LOOK Code" << endl;
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
        cout << "Look:" << endl;
        cout << "" << endl;
        cout << "In Look, the pointer moves in mentioned direction and schedule all" << endl;
        cout << "requests that are in that direction until it schedules the last " << endl;
        cout << "request that is present in that direction and then, it moves in" << endl;
        cout << "opposite direction and schedule remaining requests that are not" << endl;
        cout << "accepted previously" << endl;
        cout << "" << endl;
        cout << "example:" << endl;
        cout << "	let the order of request be 82,170,43,140,24,16,190" << endl;
        cout << "	let the size of the disk be (0 to 250)" << endl;
        cout << "	let the pointer be on 50 and it moves towards the larger value" << endl;
        cout << "" << endl;
        cout << "	in the above example, the pointer starts at 50 and moves" << endl;
        cout << "	towards the large values until it reaches 190 as it is last" << endl;
        cout << "	value of requests in that direction and then, it changes to" << endl;
        cout << "	opposite direction and moves until 16 as it is the last " << endl;
        cout << "	value in that direction." << endl;
        cout << "" << endl;
        cout << "	the look algorithm will schedule as 82,140,170,190,43,24,16" << endl;
        break;
    case 2:
        dopagelook();
        break;
    case 3:
        exit(0);
    default:
        cout << "Invalid choice" << endl;
        break;
    }
}