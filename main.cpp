#include <windows.h>
#include "calculator.h"

const char g_szClassName[] = "myWindowClass";

// What gets called when window is created and closed
LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    HWND editTextfield, button1, button2, button3, button4,
    button5, button6, button7, button8, button9, button0,
    buttonPlus, buttonMinus, buttonMultiply, buttonDivide,
    buttonExponent, buttonFactorial;
    switch(msg)
    {
        case WM_CREATE:
            editTextfield = CreateWindow("STATIC",
                                    "0",
                                    WS_VISIBLE | WS_CHILD,
                                    20, 20, 300, 25,
                                    hwnd, NULL, NULL, NULL);
            button1 = CreateWindow("BUTTON",
                                  "1",
                                WS_VISIBLE | WS_CHILD | WS_BORDER,
                                20, 50, 50, 50,
                                hwnd, (HMENU) 1, NULL, NULL);


            button2 = CreateWindow("BUTTON",
                                  "2",
                                WS_VISIBLE | WS_CHILD | WS_BORDER,
                                80, 50, 50, 50,
                                hwnd, (HMENU) 2, NULL, NULL);

            button3 = CreateWindow("BUTTON",
                                  "3",
                                WS_VISIBLE | WS_CHILD | WS_BORDER,
                                140, 50, 50, 50,
                                hwnd, (HMENU) 3, NULL, NULL);

            button4 = CreateWindow("BUTTON",
                                  "4",
                                WS_VISIBLE | WS_CHILD | WS_BORDER,
                                20, 110, 50, 50,
                                hwnd, (HMENU) 4, NULL, NULL);


            button5 = CreateWindow("BUTTON",
                                  "5",
                                WS_VISIBLE | WS_CHILD | WS_BORDER,
                                80, 110, 50, 50,
                                hwnd, (HMENU) 5, NULL, NULL);

            button6 = CreateWindow("BUTTON",
                                  "6",
                                WS_VISIBLE | WS_CHILD | WS_BORDER,
                                140, 110, 50, 50,
                                hwnd, (HMENU) 6, NULL, NULL);

            button7 = CreateWindow("BUTTON",
                                  "7",
                                WS_VISIBLE | WS_CHILD | WS_BORDER,
                                20, 170, 50, 50,
                                hwnd, (HMENU) 7, NULL, NULL);


            button8 = CreateWindow("BUTTON",
                                  "8",
                                WS_VISIBLE | WS_CHILD | WS_BORDER,
                                80, 170, 50, 50,
                                hwnd, (HMENU) 8, NULL, NULL);

            button9 = CreateWindow("BUTTON",
                                  "9",
                                WS_VISIBLE | WS_CHILD | WS_BORDER,
                                140, 170, 50, 50,
                                hwnd, (HMENU) 9, NULL, NULL);
            button0 = CreateWindow("BUTTON",
                                  "0",
                                WS_VISIBLE | WS_CHILD | WS_BORDER,
                                20, 230, 170, 50,
                                hwnd, (HMENU) 10, NULL, NULL);



        break;
        case WM_COMMAND:
            switch (LOWORD(wParam)){
                case 1:

                break;

                case 2:

                break;

                case 3:

                break;

                case 4:

                break;

                case 5:

                break;

                case 6:

                break;

                case 7:

                break;

                case 8:

                break;

                case 9:

                break;

                case 10:

                break;

                default:

                break;
            }
        case WM_CLOSE:
            DestroyWindow(hwnd);
        break;
        case WM_DESTROY:
            PostQuitMessage(0);
        break;
        default:
            return DefWindowProc(hwnd, msg, wParam, lParam);
    }
    return 0;
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
    LPSTR lpCmdLine, int nCmdShow)
{
    WNDCLASSEX wc;
    HWND hwnd;
    MSG Msg;

    //Step 1: Registering the Window Class
    wc.cbSize        = sizeof(WNDCLASSEX);
    wc.style         = 0;
    wc.lpfnWndProc   = WndProc;
    wc.cbClsExtra    = 0;
    wc.cbWndExtra    = 0;
    wc.hInstance     = hInstance;
    wc.hIcon         = LoadIcon(NULL, IDI_APPLICATION);
    wc.hCursor       = LoadCursor(NULL, IDC_ARROW);
    wc.hbrBackground = (HBRUSH)(COLOR_WINDOW+1);
    wc.lpszMenuName  = NULL;
    wc.lpszClassName = g_szClassName;
    wc.hIconSm       = LoadIcon(NULL, IDI_APPLICATION);

    if(!RegisterClassEx(&wc))
    {
        MessageBox(NULL, "Window Registration Failed!", "Error!",
            MB_ICONEXCLAMATION | MB_OK);
        return 0;
    }

    // Step 2: Creating the Window
    hwnd = CreateWindowEx(
        WS_EX_CLIENTEDGE,
        g_szClassName,
        "C++ Calculator",
        WS_OVERLAPPEDWINDOW,
        CW_USEDEFAULT, CW_USEDEFAULT, 500, 500,
        NULL, NULL, hInstance, NULL);

    if(hwnd == NULL)
    {
        MessageBox(NULL, "Window Creation Failed!", "Error!",
            MB_ICONEXCLAMATION | MB_OK);
        return 0;
    }

    ShowWindow(hwnd, nCmdShow);
    UpdateWindow(hwnd);

    // Step 3: The Message Loop
    while(GetMessage(&Msg, NULL, 0, 0) > 0)
    {
        TranslateMessage(&Msg);
        DispatchMessage(&Msg);
    }
    return Msg.wParam;


}
