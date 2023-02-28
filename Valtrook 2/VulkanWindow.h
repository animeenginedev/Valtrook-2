#pragma once

#include "IWindow.h"
#include "WindowData.h"

struct GLFWwindow;

class VulkanWindow : public IWindow
{
private:
	GLFWwindow* window;

	WindowData data;

public:
	VulkanWindow(WindowData data);
	~VulkanWindow();

	WindowData* getData();

	bool IsValid();
	void Close();

	int getHeight();
	int getWidth();
	std::string getAlias();
	std::string getTitle();
	bool hasFullscreenTarget();
	int getFullscreenTarget();
};

