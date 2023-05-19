#include <iostream>
#include "Page_Replacement_Headers\fifo.h"
using namespace std;

int fifomenu()
{
    int n;
    cout << "-----------------------------------------------------------------------------------------------------------" << endl;
    cout << "-----------------------------------------------FIFO Menu--------------------------------------------------" << endl;
    cout << "-----------------------------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t\t\tChoose any one of the following" << endl;
    cout << "\t\t\t\t\t1. FIFO Description" << endl;
    cout << "\t\t\t\t\t2. FIFO Code" << endl;
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
        cout << "-----------------------------------------------------------------------------------------------------------------------------------------" << endl;
        cout << "FIRST IN FIRST OUT PAGE REPLACEMENT ALGORITHM:" << endl;
        cout << "" << endl;
        cout << "-> The Simplest Algorithm for replacing Pages." << endl;
        cout << "" << endl;
        cout << "-> First , We keep track of all the pages by using a queue in the main memory." << endl;
        cout << "" << endl;
        cout << "-> As soon as a page comes in , we put in the queue and continue." << endl;
        cout << "" << endl;
        cout << "-> When a new page comes in and their is no space in the memory." << endl;
        cout << "" << endl;
        cout << "-> The oldest page in the queue is replaced with new page when the need to replace arises." << endl;
        cout << "" << endl;
        cout << "->It repeats this process until the operating system has page flow in the system." << endl;
        cout << "" << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------------------------" << endl;
        cout << "" << endl;
        cout << "EXAMPLE:" << endl;
        cout << "Let us take Number of pages as 10." << endl;
        cout << "They are : 4,7,6,1,7,6,1,2,7,2 Respectively." << endl;
        cout << "The Capacity of frames is 3." << endl;
        cout << "" << endl;
        cout << "-------------------------------------------------------" << endl;
        cout << "| 4| 7 |  6 |   1 |  7  |  6  |  1  |   2 |   7 |   2 |" << endl;
        cout << "|--|---|----|-----|-----|-----|-----|-----|-----|-----|" << endl;
        cout << "|  |	|  6 |   6 |  6  |  6  |  6	 |  6  |  7  |  7- |" << endl;
        cout << "|  |   |    |     |     |     |     |     |     |     |" << endl;
        cout << "|  | 7 |  7 |   7 |  7  |  7  |  7	 |  2  |  2  |  2- |" << endl;
        cout << "|  |	|	 |	   |	 |	   |     |	   |	 |	   |" << endl;
        cout << "| 4| 4 |  4 |  1  |  1  |  1  |  1	 |  1  |  1  |  1- |" << endl;
        cout << "|  |	|	 |	   |     |	   |	 |	   |	 |	   |" << endl;
        cout << "-------------------------------------------------------" << endl;
        cout << " M   M    M     M    H     H     H     M     M     H" << endl;
        cout << "" << endl;
        cout << "Here M = Page Miss" << endl;
        cout << "     H = Page Hit" << endl;
        cout << "Through the Table , we can Observe that Total Page Fault is 6." << endl;
        cout << "The Total Page Hit is 8." << endl;
        break;
    case 2:
        dofifo();
        break;
    case 3:
        exit(0);
    default:
        cout << "Invalid choice" << endl;
        break;
    }
}