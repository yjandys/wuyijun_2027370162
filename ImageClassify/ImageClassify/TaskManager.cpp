#include "pch.h"
#include "TaskManager.h"
#include "IpcClient.h"

CTaskManager* CTaskManager::m_pInstance = nullptr;

CTaskManager::CTaskManager()
{

}

CTaskManager::~CTaskManager()
{

}

CTaskManager* CTaskManager::GetInstance()
{
	if (m_pInstance == nullptr)
	{
		m_pInstance = new CTaskManager;
	}

	return m_pInstance;
}

void CTaskManager::Init()
{
	CIpcClient::GetInstance()->AddObserver(this);
}

//������
IMAGE_TYPE CTaskManager::AddTask(std::wstring strFilePath)
{
	m_vecTasks.push_back(strFilePath);
	return IMAGE_TYPE::AG_IMAGE;
}

void CTaskManager::AddDirTask(std::wstring strDirPath)
{
	//1.forѭ����ö��Ŀ¼�µ������ļ�


	//2.ÿ���ļ�������AddTask
}

//������
void CTaskManager::ProcessTask()
{
	for (auto it = m_vecTasks.begin(); it != m_vecTasks.end(); ++it)
	{
		//��������

		//ɾ������
		m_vecTasks.erase(it);
	}
}

void CTaskManager::OnDataCallback(std::string strData)
{
	//��������

}
