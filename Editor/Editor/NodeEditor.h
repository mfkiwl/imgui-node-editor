#pragma once

#include "imgui/imgui.h"

namespace ax {
namespace NodeEditor {

struct Context;

enum class IconType { Flow, Circle, Square, Grid, RoundSquare };

bool Icon(const char* id, const ImVec2& size, IconType type, bool filled, const ImVec4& color = ImVec4(1, 1, 1, 1));

void SetCurrentEditor(Context* ctx);
Context* GetCurrentEditor();
Context* CreateEditor();
void DestroyEditor(Context* ctx);

void Begin(const char* id);
void End();

void BeginNode(int id);
void EndNode();

void BeginHeader();
void EndHeader();

void BeginInput(int id);
void EndInput();

void BeginOutput(int id);
void EndOutput();



} // namespace node_editor
} // namespace ax