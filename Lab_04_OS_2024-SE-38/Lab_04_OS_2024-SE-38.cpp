#include<iostream>
#include<windows.h>
using namespace std;
int main() {
    DWORD pid = GetCurrentProcessId();  // Get process ID
    cout << "Program started. (This is like a process running)" << endl;
    cout << "Process ID (PID): " << pid << endl;
    cout << "You can verify this PID in Task Manager (Details tab)." << endl;
    cout << endl;
    // Simulate process activity
    for (int i = 1; i <= 5; i++) {
        cout << "Step " << i << " executing..." << endl;
        Sleep(1000);
    }
    Sleep(30000); // keeps program running for 30 seconds
    cout << "\nProgram finished. You can now close Task Manager." << endl;
    system("pause");
    return 0;
}







