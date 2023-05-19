#include <iostream>
#include "Page_Replacement_Headers\lfu.h"
using namespace std;

int lfumenu()
{
    int n;
    cout << "-----------------------------------------------------------------------------------------------------------" << endl;
    cout << "-----------------------------------------------LFU Menu--------------------------------------------------" << endl;
    cout << "-----------------------------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t\t\tChoose any one of the following" << endl;
    cout << "\t\t\t\t\t1. LFU Description" << endl;
    cout << "\t\t\t\t\t2. LFU Code" << endl;
    cout << "\t\t\t\t\t3. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> n;
    system("cls");
    switch (n)
    {
    case 1:
        cout << "PAGE REPLACEMENT ALGORITHMS:" << endl;
        cout << " " << endl;
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
        cout << "-------------------------------------------------------------------------------------------" << endl;
        cout << "LEAST FREQUENTLY USED:" << endl;
        cout << "" << endl;
        cout << "-> LFU stands for Least Frequently Used." << endl;
        cout << "" << endl;
        cout << "-> The LFU works on the logic that the page with the least visits in a given period of time is removed from the main memory." << endl;
        cout << "" << endl;
        cout << "-> LFU works on the principle of replacing the least frequently used pages." << endl;
        cout << "" << endl;
        cout << "-> LFU is a type of cache algorithm used to manage memoriy within a computer." << endl;
        cout << "" << endl;
        cout << "-> It can be implemented using single linked list,doubly linked list,hash map." << endl;
        cout << "" << endl;
        cout << "-------------------------------------------------------------------------------------------" << endl;
        cout << "" << endl;
        cout << "EXAMPLE:" << endl;
        cout << "" << endl;
        cout << "Let us take Number of pages as 20." << endl;
        cout << "" << endl;
        cout << "They are : 5,3,6,9,6,2,3,5,2,1,3,6,2,6,5,3,6,5,2,1 Respectively." << endl;
        cout << "" << endl;
        cout << "The Capacity of frames is 3." << endl;
        cout << "" << endl;
        cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
        cout << "| 5| 3 |  6 |   9 |  6  |  2  |  3  |   5 |   2 |   1 |  3  |   6 |  2  |  6  |	5 |	3  |	6  |	5  |	2   |	1   |" << endl;
        cout << "|--|---|----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-------|------|-----|-----|------|-----|" << endl;
        cout << "| 5| 5 |  5	|   9	|  9	|  9	|  3	|  3	|  2	|  2	|  3	|   3	|  3	|  3	|    5  |   5  |  5  |  5  |  5   | 5   |" << endl;
        cout << "|  |	 |	|	|	|	|	|	|	|	|	|	|	|	|       |      |     |     |      |     |" << endl;
        cout << "|  | 3 |  3	|   3	|  3	|  2	|  2	|  5	|  5	|  1	|  1	|   1	|  2	|  2	|    2  |   3  |  3  |  3  |  2   | 1   |" << endl;
        cout << "|  |	 |	|	|	|	|	|	|	|	|	|	|	|	|       |      |     |     |      |     |" << endl;
        cout << "|  |   |  6	|   6	|  6	|  6	|  6	|  6	|  6	|  6	|  6	|   6	|  6	|  6	|    6  |   6  |  6  |  6  |  6   | 6   |" << endl;
        cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
        cout << " M   M    M     M    H     M     M     M     M     M     M      H    M     H       M      M     H     H     M     M" << endl;
        cout << "" << endl;
        cout << "Here M = Page Miss" << endl;
        cout << "     H = Page Hit" << endl;
        cout << "Through the Table , we can Observe that Total Page Fault is 15." << endl;
        cout << "The Total Page Hit is 5." << endl;
        break;
    case 2:
        dolfu();
        break;
    case 3:
        exit(0);
    default:
        cout << "Invalid choice" << endl;
        break;
    }
}