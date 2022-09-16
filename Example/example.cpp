#include <Windows.h>

extern "C" __declspec(dllexport) void DoUnInit() 
{
    ::MessageBoxW(NULL, L"DoUnInit", L"DoUnInit", NULL);
}

extern "C" __declspec(dllexport) void DoInit() 
{
    ::MessageBoxW(NULL, L"DoInit", L"DoInit", NULL);
}

BOOL APIENTRY DllMain(HMODULE h,DWORD dw,LPVOID lp)
{
    switch (dw)
    {
    case DLL_PROCESS_ATTACH:
        ::DisableThreadLibraryCalls(h);
        break;
    default:
        break;
    }
    return TRUE;
}
