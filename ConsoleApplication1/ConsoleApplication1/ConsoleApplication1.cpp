#include <Windows.h>

// UI Components Identifiers
#define ID_BTN_STAFF    101
#define ID_BTN_QUEUE    102
#define ID_BTN_FINANCE  103
#define ID_BTN_PHARMA   104
#define ID_BTN_CRM      105
#define ID_BTN_EXIT     106

// Window Procedure to handle GUI events
LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    switch (uMsg) {
    case WM_CREATE:
    {
        // Title Label
        CreateWindowA("STATIC", "HOSPITAL MANAGER DASHBOARD",
            WS_VISIBLE | WS_CHILD | SS_CENTER | SS_CENTERIMAGE,
            10, 10, 360, 40, hwnd, NULL, NULL, NULL);

        // Menu Buttons
        CreateWindowA("BUTTON", "1. Manage Medical Staff",
            WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,
            70, 60, 240, 40, hwnd, (HMENU)ID_BTN_STAFF, NULL, NULL);

        CreateWindowA("BUTTON", "2. Queue Management",
            WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,
            70, 110, 240, 40, hwnd, (HMENU)ID_BTN_QUEUE, NULL, NULL);

        CreateWindowA("BUTTON", "3. Finance & Billing",
            WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,
            70, 160, 240, 40, hwnd, (HMENU)ID_BTN_FINANCE, NULL, NULL);

        CreateWindowA("BUTTON", "4. Pharmacy Inventory",
            WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,
            70, 210, 240, 40, hwnd, (HMENU)ID_BTN_PHARMA, NULL, NULL);

        CreateWindowA("BUTTON", "5. Execute Customer Care",
            WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,
            70, 260, 240, 40, hwnd, (HMENU)ID_BTN_CRM, NULL, NULL);

        CreateWindowA("BUTTON", "6. Exit System",
            WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,
            70, 310, 240, 40, hwnd, (HMENU)ID_BTN_EXIT, NULL, NULL);

        break;
    }
    case WM_COMMAND:
        // Handle Button Clicks (Chose an option)
        switch (LOWORD(wParam)) {
        case ID_BTN_STAFF:
            MessageBoxA(hwnd, "Welcome to Medical Staff Management!\n\n(Future feature: Add input fields here for name, salary, etc.)", "Module 1", MB_OK | MB_ICONINFORMATION);
            break;
        case ID_BTN_QUEUE:
            MessageBoxA(hwnd, "Welcome to Queue Management!\n\nYou can issue BHYT and Service tickets here.", "Module 2", MB_OK | MB_ICONINFORMATION);
            break;
        case ID_BTN_FINANCE:
            MessageBoxA(hwnd, "Welcome to Finance & Billing!\n\nCalculate patient discounts and totals here.", "Module 3", MB_OK | MB_ICONINFORMATION);
            break;
        case ID_BTN_PHARMA:
            MessageBoxA(hwnd, "Welcome to Pharmacy Inventory!\n\nReview stock warnings and add medicine here.", "Module 4", MB_OK | MB_ICONINFORMATION);
            break;
        case ID_BTN_CRM:
            MessageBoxA(hwnd, "Welcome to Customer CRM!\n\nAutomated birthday SMS sending.", "Module 5", MB_OK | MB_ICONINFORMATION);
            break;
        case ID_BTN_EXIT:
            // Close the application
            PostMessage(hwnd, WM_CLOSE, 0, 0);
            break;
        }
        break;
    case WM_PAINT:
    {
        PAINTSTRUCT ps;
        HDC hdc = BeginPaint(hwnd, &ps);
        // Fill background
        FillRect(hdc, &ps.rcPaint, (HBRUSH)(COLOR_WINDOW));
        EndPaint(hwnd, &ps);
        break;
    }
    case WM_DESTROY:
        PostQuitMessage(0);
        return 0;
    }
    return DefWindowProc(hwnd, uMsg, wParam, lParam);
}

// We use int main() so it compiles seamlessly as a standard Console Application in VS Code.
// We auto-hide the black console, and jump straight into the graphical UI.
int main() {
    // Hide the black console window so we ONLY see the graphical UI
    HWND hConsole = GetConsoleWindow();
    ShowWindow(hConsole, SW_HIDE);

    HINSTANCE hInstance = GetModuleHandle(NULL);
    const char* CLASS_NAME = "HospitalMenuClass";

    WNDCLASS wc = { 0 };
    wc.lpfnWndProc = WindowProc;
    wc.hInstance = hInstance;
    wc.lpszClassName = CLASS_NAME;
    wc.hCursor = LoadCursor(NULL, IDC_ARROW);
    wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);

    RegisterClass(&wc);

    // Create Main Window (Adjusted size for the 6 buttons)
    HWND hwnd = CreateWindowExA(
        0,                              // Optional window styles.
        CLASS_NAME,                     // Window class
        "Hospital Manager PRO",         // Window text
        WS_OVERLAPPEDWINDOW ^ WS_THICKFRAME ^ WS_MAXIMIZEBOX, // Fixed size window
        CW_USEDEFAULT, CW_USEDEFAULT, 400, 420, // Size and position
        NULL,       // Parent window    
        NULL,       // Menu
        hInstance,  // Instance handle
        NULL        // Additional application data
    );

    if (hwnd == NULL) {
        return 0;
    }

    // Show the Window
    ShowWindow(hwnd, SW_SHOW);
    UpdateWindow(hwnd);

    // Run the message loop
    MSG msg = { 0 };
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return 0;
}
