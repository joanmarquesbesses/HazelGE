#include <HazleGE.h>

class Sandbox : public HazleGE::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

HazleGE::Application* HazleGE::CreateApplication()
{
	return new Sandbox();
}