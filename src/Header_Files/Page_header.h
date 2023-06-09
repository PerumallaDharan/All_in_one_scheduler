
// Page Replacement Algorithms
// • First In First Out
// • Least Recently Used
// • Optimal
// • Least Frequently Used

#include <iostream>
#include "Menus\Page\lrumenu.h"
#include "Menus\Page\optimalmenu.h"
#include "Menus\Page\lfumenu.h"
#include "Menus\Page\fifomenu.h"
using namespace std;

int page_menu()
{
    int n;
    cout << "-------------------------------------------------------------------------------------------------------------" << endl;
    cout << "-----------------------------------------Page Replacement Algorithms-----------------------------------------" << endl;
    cout << "-------------------------------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t\t\tChoose any one of the following" << endl;
    cout << "\t\t\t\t\t1. First In First Out" << endl;
    cout << "\t\t\t\t\t2. Least Recently Used" << endl;
    cout << "\t\t\t\t\t3. Optimal" << endl;
    cout << "\t\t\t\t\t4. Least Frequently Used" << endl;
    cout << "\t\t\t\t\t5. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> n;
    system("cls");
    switch (n)
    {
    case 1:
        fifomenu();
        break;
    case 2:
        lrumenu();
        break;
    case 3:
        optimalmenu();
        break;
    case 4:
        lfumenu();
        break;
    case 5:
        exit(0);
        break;
    default:
        cout << "Invalid Choice" << endl;
        break;
    }
}