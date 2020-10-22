#pragma once

#include "FirstPage.g.h"

namespace winrt::DesktopWinUICppLeakTest::implementation
{
    struct FirstPage : FirstPageT<FirstPage>
    {
        FirstPage();

        void Button_Click(winrt::Windows::Foundation::IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& e);
    };
}

namespace winrt::DesktopWinUICppLeakTest::factory_implementation
{
    struct FirstPage : FirstPageT<FirstPage, implementation::FirstPage>
    {
    };
}
