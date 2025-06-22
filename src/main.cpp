#include "Application.h"
#include "EntryPoint.h"

class ExampleLayer : public Akari::Layer
{
public:
	virtual void OnUIRender() override
	{
		ImGui::Begin("Hello");
		ImGui::Button("Button");
		ImGui::End();

		ImGui::ShowDemoWindow();
	}
};

Akari::Application* Akari::CreateApplication(int argc, char** argv)
{
	Akari::ApplicationSpecification spec;
	spec.Name = "Akari Example";

	Akari::Application* app = new Akari::Application(spec);
	app->PushLayer<ExampleLayer>();
	app->SetMenubarCallback([app]()
	{
		if (ImGui::BeginMenu("File"))
		{
			if (ImGui::MenuItem("Exit"))
			{
				app->Close();
			}
			ImGui::EndMenu();
		}
	});
	return app;
}