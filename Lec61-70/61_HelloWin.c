#include <Windows.h>

long long __stdcall WndProc(struct HWND__ *hwnd, unsigned int uMsg, unsigned long long wParam, long long lParam)

    LRESULT CALLBACK WndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)

        execve()
            ->_start->__lib_main->main

    CreateProcessEx()
            ->mainCRTStartup()
            ->main()
                WinMainCRTStartup()
            ->WinMain()
