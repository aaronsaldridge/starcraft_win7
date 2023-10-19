#include <windows.h>
using namespace std;

int main()
{
    system("taskkill /f /IM explorer.exe");
    system("scbw.exe");
    system("start C:\\Windows\\explorer.exe");
    return 0;
}
