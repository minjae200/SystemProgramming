#include <stdio.h>
#include <stdlib.h>
#include <tchar.h>
#include <windows.h>

int _tmain(int argc, TCHAR* argv[])
{
    float num1, num2;
    _fputts(_T("Return Value Test \n"), stdout);
    _tscanf(_T("%f %f"), &num1, &num2);

    if (num2 == 0)
        exit(-1);
    _tprintf(_T("Operation Result : %f \n"), num1/num2);
    return 1;
}