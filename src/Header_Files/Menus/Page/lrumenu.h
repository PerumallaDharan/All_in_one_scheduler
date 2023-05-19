#include <iostream>
#include "Page_Replacement_Headers\lru.h"
using namespace std;

int lrumenu()
{
    int n;
    cout << "-----------------------------------------------------------------------------------------------------------" << endl;
    cout << "-----------------------------------------------LRU Menu--------------------------------------------------" << endl;
    cout << "-----------------------------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t\t\tChoose any one of the following" << endl;
    cout << "\t\t\t\t\t1. LRU Description" << endl;
    cout << "\t\t\t\t\t2. LRU Code" << endl;
    cout << "\t\t\t\t\t3. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> n;
    system("cls");
    switch (n)
    {
    case 1:
        cout << "PAGE REPLACEMENT ALGORITHMS : " << endl;
        cout << "" << endl;
        cout << "-> As the name suggests , Page Replacement Algorithms tell us which page to replace to get optimal results." << endl;
        cout << "" << endl;
        cout << "-> The need to replace pages arises when page fault occurs ( page is loaded into secondary memory but not loaded into physical memory)." << endl;
        cout << "" << endl;
        cout << "-> Since CPU tried to call that specific page , but it is not available , it tries to store the page in the physical memory to access it." << endl;
        cout << "" << endl;
        cout << "-> Since there is no space the main memory , it tries to remove a page from the main memory to accomodate the page it requires." << endl;
        cout << "" << endl;
        cout << "-> Some Page Replacement Algorithms are : FIFO , LRU,LFU,Optimal." << endl;
        cout << "" << endl;
        cout << "-> These Algorithms are used when there is a new page request , and there is not enouch space in the main memory to allocate the new page." << endl;
        cout << "------------------------------------------------------------------------------------------" << endl;
        cout << "LEAST RECENTLY USED PAGE REPLACEMENT ALGORITHM:" << endl;
        cout << "" << endl;
        cout << "-> LRU stands for Least Recently Used." << endl;
        cout << "" << endl;
        cout << "-> Least Recently Used algorithm is a greedy algorithm where the page to be replaced is the page which was recently used." << endl;
        cout << "" << endl;
        cout << "-> Therefore, in memory, any page that has been unused for a longer period of time than the others is replaced." << endl;
        cout << "" << endl;
        cout << "-> It is most widely used algorithm because it provides fewer page faults than the other methods." << endl;
        cout << "" << endl;
        cout << "-------------------------------------------------------------------------------------------" << endl;
        cout << "" << endl;
        cout << "EXAMPLE:" << endl;
        cout << "" << endl;
        cout << "Let us take Number of pages as 10." << endl;
        cout << "They are : 4,7,6,1,7,6,1,2,7,2 Respectively." << endl;
        cout << "The Capacity of frames is 3." << endl;
        cout << "" << endl;
        cout << "--------------------------------------------------------------" << endl;
        cout << "| 4| 7 |  1 |   6 |  1  |  7  |  6  |   1 |   2 |   7 |  2    |" << endl;
        cout << "|--|---|----|-----|-----|-----|-----|-----|-----|-----|-------|" << endl;
        cout << "|  |	 |  	|   6	|  6	|  6	|  6	|  6	|  6	|  7	|  7    |" << endl;
        cout << "|  |	 |	|	|	|	|	|	|	|	|	  |" << endl;
        cout << "|  | 7 | 7	|   7	|  7	|  7	|  7	|  7	|  2	|  2	|  2    |" << endl;
        cout << "|  |	 |	|	|	|	|	|	|	|	|	  |" << endl;
        cout << "| 4| 4 |  4	|   4	|  4	|  4	|  4	|  4	|  1	|  1	|  1    |" << endl;
        cout << "---------------------------------------------------------------" << endl;
        cout << " M   M    M     M    H     H     H     H     M     M     H" << endl;
        cout << "" << endl;
        cout << "Here M = Page Miss" << endl;
        cout << "     H = Page Hit" << endl;
        cout << "Through the Table , we can Observe that Total Page Fault is 6." << endl;
        cout << "The Total Page Hit is 4." << endl;
        cout << "" << endl;
        break;
    case 2:
        dolru();
        break;
    case 3:
        exit(0);
    default:
        cout << "Invalid choice" << endl;
        break;
    }
}