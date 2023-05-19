#include <iostream>
#include "Page_Replacement_Headers\optimal.h"
using namespace std;

int optimalmenu()
{
    int n;
    cout << "-----------------------------------------------------------------------------------------------------------" << endl;
    cout << "-----------------------------------------------Optimal Menu--------------------------------------------------" << endl;
    cout << "-----------------------------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t\t\tChoose any one of the following" << endl;
    cout << "\t\t\t\t\t1. Optimal Description" << endl;
    cout << "\t\t\t\t\t2. Optimal Code" << endl;
    cout << "\t\t\t\t\t3. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> n;
    system("cls");
    switch (n)
    {
    case 1:
        cout << "PAGE REPLACEMENT ALGORITHM : " << endl;
        cout << "" << endl;
        cout << "-> As the name suggests , Page Replacement Algorithms tell us which page to replace to get optimal results." << endl;
        cout << "" << endl;
        cout << "-> The need to replace pages arises when page fault occurs ( page is loaded into secondary memory but not loaded into physical memory)." << endl;
        cout << "-> Since CPU tried to call that specific page , but it is not available , it tries to store the page in the physical memory to access it." << endl;
        cout << "" << endl;
        cout << "-> Since there is no space the main memory , it tries to remove a page from the main memory to accomodate the page it requires." << endl;
        cout << "" << endl;
        cout << "-> Some Page Replacement Algorithms are : FIFO , LRU,LFU,Optimal." << endl;
        cout << "" << endl;
        cout << "-> These Algorithms are used when there is a new page request , and there is not enouch space in the main memory to allocate the new page." << endl;
        cout << "" << endl;
        cout << "" << endl;
        cout << "---------------------------------------------------------------------------------------" << endl;
        cout << "OPTIMAL PAGE REPLACEMENT ALGORITHM: " << endl;
        cout << "" << endl;
        cout << "-> Optimal Page Replacement Algorithm is the most desirable page replacement algorithm that we can use to replace pages." << endl;
        cout << "" << endl;
        cout << "-> The purpose of this optimal page replacement algorithm is to reduce(minimize) the number of page faults." << endl;
        cout << "" << endl;
        cout << "-> This Algorithm replaces the page whose demand in the future is least as compared to other pages from frames. i.e secondary memory." << endl;
        cout << "" << endl;
        cout << "-> This replacement occurs when page fault appears." << endl;
        cout << "" << endl;
        cout << "----------------------------------------------------------------------------------------" << endl;
        cout << "EXAMPLE:" << endl;
        cout << "Let us take Number of pages as 14." << endl;
        cout << "They are : 7,0,1,2,0,3,0,4,2,3,0,3,2,3 Respectively." << endl;
        cout << "The Capacity of frames is 4." << endl;
        cout << "" << endl;
        cout << "--------------------------------------------------------------------------------" << endl;
        cout << "| 7| 0 |  1 |   2 |  0  |  3  |  0  |   4 |   2 |   3 |  0  |   3 |  2  |  3  |" << endl;
        cout << "|--|---|----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|" << endl;
        cout << "|  |	|	 |  2  |  2	 |  2  |  2	 |  2  |  2	 |  2  |  2	 |   2 |  2	 |  2  |" << endl;
        cout << "|  |	|  1 |   1 |  1	 |  1  |  1	 |  4  |  4	 |  4  |  4	 |   4 |  4	 |  4  |" << endl;
        cout << "|  |	|	 |	   |	 |	   |	 |	   |	 |	   |     |	   |	 |	   |" << endl;
        cout << "|  | 0 |  0 |  0  |  0	 |  0  |  0	 |  0  |  0	 |  0  |  0	 |   0 |  0	 |  0  |" << endl;
        cout << "|  |	|	 |     |	 |	   |	 |	   |	 |	   |	 |	   |	 |	   |" << endl;
        cout << "| 7| 7 |  7 |  7  |  7	 |  3  |  3	 |  3  |  3	 |  3  |  3	 |  3  |  3	 |  3  |" << endl;
        cout << "-------------------------------------------------------------------------------" << endl;
        cout << " M   M   M      M    H     M     H     M     H     H     H      H    H     H" << endl;
        cout << "" << endl;
        cout << "Here M = Page Miss" << endl;
        cout << "     H = Page Hit" << endl;
        cout << "Through the Table , we can Observe that Total Page Fault is 6." << endl;
        cout << "The Total Page Hit is 8." << endl;
        cout << "" << endl;
        break;
    case 2:
        dooptimal();
        break;
    case 3:
        exit(0);
    default:
        cout << "Invalid choice" << endl;
        break;
    }
}