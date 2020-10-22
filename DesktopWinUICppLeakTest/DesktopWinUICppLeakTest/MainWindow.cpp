#include "pch.h"
#include "MainWindow.h"
#include "MainWindow.g.cpp"

using namespace winrt;
using namespace Windows::UI::Xaml::Interop;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::DesktopWinUICppLeakTest::implementation
{
    MainWindow::MainWindow()
    {
        InitializeComponent();

        TypeName firstPageType;
        firstPageType.Kind = TypeKind::Metadata;
        firstPageType.Name = L"DesktopWinUICppLeakTest.FirstPage";
        MainFrame().Navigate(firstPageType);
    }

    Microsoft::UI::Xaml::Controls::Frame MainWindow::Frame()
    {
        return MainFrame();
    }
}
