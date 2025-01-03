#pragma once

#include "common/ansi_common.h"

namespace ansi 
{
	class Core 
	{
	public:
		static bool CreateInstance();	// ������ ���� �Լ�
		static void DeleteInstance();	// ���ſ� ���� �Լ�

		static Core* GetInstance() { return m_Instance; }	// ���ٿ� ���� �Լ�
		
	private:
		explicit Core();	// ������
		~Core();			// �Ҹ���

	private:
		static Core* m_Instance;	// ���� �ν��Ͻ� ������
	};
}

