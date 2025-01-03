#pragma once
#pragma once

/* { 01 } */
/* GLEW */
#include <gl/glew.h>    // GLEW - �⺻

/* GLFW */
#include <glfw/glfw3.h> // GLFW - �⺻

/* GLM */
#include <glm/glm.hpp>                  // GLM - �⺻
#include <glm/gtc/type_ptr.hpp>         // GLM - Ÿ�� ����
#include <glm/gtc/quaternion.hpp>       // GLM - ���ʹϾ�
#include <glm/gtc/matrix_transform.hpp> // GLM - ��� ��ȯ

/* ImGui */
#include <imgui.h>              // ImGui - �⺻
#include <imgui_impl_glfw.h>    // ImGui - GLFW ����
#include <imgui_impl_opengl3.h> // ImGui - OpenGL3 ����

/* C++ */
#include <iostream>      // Input/Output Stream - �⺻ �����
#include <fstream>       // File Stream         - ���̴� �ε�
#include <sstream>       // String Stream       - ���̴� �Ľ�
#include <string>        // String              - ���ڿ� ����
#include <chrono>        // Chrono              - �ð� ����
#include <typeindex>     // Type Index          - ��ü Ÿ�� �к�
#include <algorithm>     // Algorithm           - �˰�����
#include <functional>    // Functional          - �Լ� ��ü
#include <random>        // Random              - ���� ����
#include <vector>        // Vector              - ���� �迭
#include <unordered_map> // Unordered Map       - �ؽ� ���̺�

/* { 02 } */
/* ���� - ���� ��ü ���� */
#define SAFE_DELETE(ptr) if (ptr) { delete (ptr); (ptr) = nullptr; }
/* ���� - �迭 ��ü ���� */
#define SAFE_DELETE_ARRAY(ptrs) if (ptrs) { delete[] (ptrs); (ptrs) = nullptr; }

/* �ܼ� - ���ڿ� ��� */
#define PRINT(str) std::cout << (str) << std::endl;
/* �ܼ� - ���ڿ� + ���� �̸� + �� ��ȣ ��� */
#define PRINT_FL(str) std::cout << (str) << ", (FILE: " << (__FILE__) << "), (LINE: " << (__LINE__) << ")" << std::endl;

/* üũ - ǥ������ false�� ��� false ��ȯ */
#define CHECK_RF(exp) if (!(exp)) { return false; }
/* üũ - ǥ������ false�� ��� nullptr ��ȯ */
#define CHECK_RN(exp) if (!(exp)) { return nullptr; }
/* üũ - ǥ������ false�� ��� �ܼ� â�� ���ڿ� ��� */
#define CHECK_PRINT(exp, str) if (!(exp)) { PRINT(str); }
/* üũ - ǥ������ false�� ��� �ܼ� â�� ���ڿ� ��� �� false ��ȯ */
#define CHECK_PRINT_RF(exp, str) if (!(exp)) { PRINT(str); return false; }
/* üũ - ǥ������ false�� ��� �ܼ� â�� ���ڿ� ��� �� nullptr ��ȯ */
#define CHECK_PRINT_RN(exp, str) if (!(exp)) { PRINT(str); return nullptr; }