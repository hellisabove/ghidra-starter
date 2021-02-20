#include <fstream>
#include <windows.h>
#include <iostream>

void Stealth()
{
 HWND Stealth;
 AllocConsole();
 Stealth = FindWindowA("ConsoleWindowClass", NULL);
 ShowWindow(Stealth,0);
}

int main()
{
  {
      Stealth();
      const char* batch_path = "Your desired path of ghidra folder\\ghidra_9.2.2_PUBLIC\\ghidraRun.bat";
      system( batch_path );
  }
}
