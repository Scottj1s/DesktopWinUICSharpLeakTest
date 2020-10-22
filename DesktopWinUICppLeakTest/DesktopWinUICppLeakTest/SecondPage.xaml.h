#pragma once

#include "SecondPage.g.h"

namespace winrt::DesktopWinUICppLeakTest::implementation
{
    struct SecondPage : SecondPageT<SecondPage>
    {
        SecondPage();

        void Button_Click(winrt::Windows::Foundation::IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& e);
    };
}

namespace winrt::DesktopWinUICppLeakTest::factory_implementation
{
    struct SecondPage : SecondPageT<SecondPage, implementation::SecondPage>
    {
    };
}
