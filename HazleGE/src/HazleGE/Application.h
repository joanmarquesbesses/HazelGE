#pragma once

#include "Core.h"

namespace HazleGE{

	class HAZLEGE_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();

}