#include "ScreenCaptureProvider.h"
#include "ScreenVideoCapture.h"
#include "VDesktopManager.h"
#include <vector>
#include <iostream>
#include <memory>
#include <unordered_set>
int main() {
	HWND currentWindow = GetActiveWindow();
	SetWindowPos(currentWindow, HWND_TOPMOST, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE);
	VDesktopManager::getInstance().createDesktop(VDesktopManager::RenderType::OSG)->loop();
	return 0;
}
