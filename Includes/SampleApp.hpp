#ifndef SAMPLE_APP_HPP
#define SAMPLE_APP_HPP

#include <GL3/Application.hpp>
#include <GL3/Scene.hpp>
#include <GL3/DebugUtils.hpp>
#include <GL3/SkyDome.hpp>

class SampleApp : public GL3::Application
{
public:
	//! Default constructor
	SampleApp();
	//! Default desctrutor
	~SampleApp();
	//! Returns overrided Application title
	const char* GetAppTitle() const override
	{
		return "Sample Application";
	}
protected:
	bool OnInitialize(std::shared_ptr<GL3::Window> window, const cxxopts::ParseResult& configure) override;
	void OnCleanUp() override;
	void OnUpdate(double dt) override;
	void OnDraw() override;
	void OnProcessInput(unsigned int key) override;
	void OnProcessResize(int width, int height) override;

private:
	GL3::Scene _sceneInstance;
	GL3::SkyDome _skyDome;
	GL3::DebugUtils _debug;
};

#endif //! end of SampleApp.hpp