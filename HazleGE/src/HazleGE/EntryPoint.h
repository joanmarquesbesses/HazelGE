#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern HazleGE::Application* HazleGE::CreateApplication();

int main(int argc, char** argv) {
	auto app = HazleGE::CreateApplication();
	app->Run();
	delete app;
}

#endif // HZ_PLATFORM_WINDOWS
