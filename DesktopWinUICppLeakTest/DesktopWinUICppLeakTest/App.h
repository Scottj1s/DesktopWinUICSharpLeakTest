#pragma once

#pragma push_macro("GetCurrentTime")
#undef GetCurrentTime

#include "App.g.h"
#include "App.xaml.g.h"

#pragma pop_macro("GetCurrentTime")

namespace winrt::DesktopWinUICppLeakTest::implementation
{
    struct App : AppT<App>
    {
        App();

        static void Navigate(winrt::param::hstring const&);

        winrt::DesktopWinUICppLeakTest::MainWindow MainWindow();

        void OnLaunched(Microsoft::UI::Xaml::LaunchActivatedEventArgs const&);
        void OnSuspending(IInspectable const&, Windows::ApplicationModel::SuspendingEventArgs const&);

    private:
        static App* instance;
        winrt::DesktopWinUICppLeakTest::MainWindow window{ nullptr };
    };
}

namespace winrt::DesktopWinUICppLeakTest::factory_implementation
{
    struct App : AppT<App, implementation::App>
    {
    };
}