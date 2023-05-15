
// CPU scheduling algorithms
// • First Come First Serve
// • Shortest Job First
// • Priority
// • Preemptive Priority
// • Round Robin


#include <iostream>
#include <fstream>
#include "Menus\CPU\fcfsmenu.h"
#include "Menus\CPU\sjfmenu.h"
#include "Menus\CPU\prioritymenu.h"
#include "Menus\CPU\preemptivemenu.h"
#include "Menus\CPU\roundrobinmenu.h"
using namespace std;

int cpu_menu()
{
    int n;
    cout << "-----------------------------------------------------------------------------------------------------------" << endl;
    cout << "-----------------------------------------CPU Scheduling Algorithms-----------------------------------------" << endl;
    cout << "-----------------------------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t\t\tChoose any one of the following" << endl;
    cout << "\t\t\t\t\t1. FCFS" << endl;
    cout << "\t\t\t\t\t2. SJF" << endl;
    cout << "\t\t\t\t\t3. Priority" << endl;
    cout << "\t\t\t\t\t4. Preemptive Priority (Priority is assigned randomly)" << endl;
    cout << "\t\t\t\t\t5. Round Robin" << endl;
    cout << "\t\t\t\t\t6. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> n;
    system("cls");
    switch (n)
    { 
    case 1:
        fcfsmenu();
        break;
    case 2:
        sjfmenu();
        break;
    case 3:
        prioritymenu();
        break;
    case 4:
        preemptivemenu();
        break;
    case 5:
        roundrobinmenu();
        break;
    case 6:
        exit(0);
    default:
        cout << "Invalid choice" << endl;
        break;
    }
}
