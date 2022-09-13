#include "raylib.h"

void pGetWindowPosition(Vector2* v) {
	*v = GetWindowPosition();
}

void pClearBackground(Color* v) {
	ClearBackground(*v);
}

void pBeginMode2D(Camera2D* v) {
	BeginMode2D(*v);
}
