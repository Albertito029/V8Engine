#ifndef _COMPONENT_CANVAS_H_
#define _COMPONENT_CANVAS_H_

#include "Component.h"

class ElementUI;
class CanvasUI;

class ComponentCanvas : public Component
{
public:

	ComponentCanvas(GameObject* parent/*, int w, int h*/);
	~ComponentCanvas();

	bool Start();
	bool Update();
	bool CleanUp();
	void Draw(); // Optional (we have been using Update and works fine)
	void DrawInspector();

	void CreateElementInCanvas(GameObject* element);

private:

	CanvasUI* canvas = nullptr;
	bool render_elements = true;
	int width = 0;
	int height = 0;
};

#endif