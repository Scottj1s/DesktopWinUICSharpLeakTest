#pragma once

#pragma push_macro("GetCurrentTime")
#undef GetCurrentTime

#include "MainWindow.g.h"

#pragma pop_macro("GetCurrentTime")

namespace winrt::DesktopWinUICppLeakTest::implementation
{
    struct MainWindow : MainWindowT<MainWindow>
    {
        MainWindow();

        Microsoft::UI::Xaml::Controls::Frame Frame();
    };
}

namespace winrt::DesktopWinUICppLeakTest::factory_implementation
{
    struct MainWindow : MainWindowT<MainWindow, implementation::MainWindow>
    {
    };
}
