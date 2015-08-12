#include <Windows.h>

int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
    LPSTR lpCmdLine, int nShowCmd)
{
    MessageBox(0, L"Replacement process executing", L"Test", MB_ICONINFORMATION);

    return 0;
}