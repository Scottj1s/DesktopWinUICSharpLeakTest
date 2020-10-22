#include "pch.h"
#include "FirstPage.xaml.h"
#if __has_include("FirstPage.g.cpp")
#include "FirstPage.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::DesktopWinUICppLeakTest::implementation
{
    FirstPage::FirstPage()
    {
        InitializeComponent();

        Windows::Foundation::Collections::IVector<IInspectable> items{ winrt::single_threaded_vector<IInspectable>() };

        for (int i = 0; i < 1000; i++)
        {
            items.Append(box_value(hstring(L"Item ") + (i + 1)));
        }

        TheListView().ItemsSource(items);
    }

    void FirstPage::Button_Click(Windows::Foundation::IInspectable const& sender, RoutedEventArgs const& e)
    {
        App::Navigate(L"DesktopWinUICppLeakTest.SecondPage");
    }
}
