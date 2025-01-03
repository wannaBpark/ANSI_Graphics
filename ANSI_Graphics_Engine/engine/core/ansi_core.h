#pragma once

#include "common/ansi_common.h"

namespace ansi 
{
	class Timer;						// Ŭ���� ���� ����

	class Core 
	{
	public:
		static bool CreateInstance();	// ������ ���� �Լ�
		static void DeleteInstance();	// ���ſ� ���� �Լ�

		static Core*  GetInstance() { return m_Instance; }			// ���ٿ� ���� �Լ�
		static Timer* GetTimer()    { return m_Instance->m_timer; }
		
	private:
		explicit Core();	// ������
		~Core();			// �Ҹ���

	private:
		static Core* m_Instance;	// ���� �ν��Ͻ� ������

		Timer* m_timer;
	};
}

