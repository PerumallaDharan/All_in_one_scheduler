
// Disk Scheduling Algorithms
// • FCFS
// • SSTF
// • SCAN
// • LOOK


#include <iostream>
#include "Menus\Disc\fcfsmenu2.h"
#include "Menus\Disc\sstfmenu.h"
#include "Menus\Disc\scanmenu.h"
#include "Menus\Disc\lookmenu.h"
using namespace std;

int disc_menu()
{
    int n;
    cout << "------------------------------------------------------------------------------------------------------------" << endl;
    cout << "-----------------------------------------Disk Scheduling Algorithms-----------------------------------------" << endl;
    cout << "------------------------------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t\t\tChoose any one of the following" << endl;
    cout << "\t\t\t\t\t1. FCFS" << endl;
    cout << "\t\t\t\t\t2. SSTF" << endl;
    cout << "\t\t\t\t\t3. SCAN" << endl;
    cout << "\t\t\t\t\t4. LOOK" << endl;
    cout << "\t\t\t\t\t5. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> n;
    system("cls");
    switch (n)
    {
    case 1:
        fcfsmenu2();
        break;
    case 2:
        sstfmenu();
        break;
    case 3:
        scanmenu();
        break;
    case 4:
        lookmenu();
        break;
    case 5:
        exit(0);
        break;
    default:
        break;
    }
}