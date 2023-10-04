#pragma once
#include <Windows.h>
#include <wrl.h>
#include <d3d12.h>
#include <DirectXMath.h>
#include <d3dx12.h>

// �e�N�X�`���R���o�[�^�[
class TextureConverter
{
public:
	/// <summary>
	/// �e�N�X�`����WIC����DDS�ɕϊ�����
	/// </summary>
	/// <param name="filePath"></param>
	void ConverterTextureWICToDDS(const std::string& filePath);

private:
	/// <summary>
	/// �e�N�X�`���t�@�C���ǂݍ���
	/// </summary>
	/// <param name="fileParh"></param>
	void LoadWICTextureFormFile(const std::string& fileParh);

private:
	/// <summary>
	/// �}���`�o�C�g����������C�h�����ɕϊ�
	/// </summary>
	/// <param name="mString">�}���`�o�C�g������</param>
	/// <returns></returns>
	static std::wstring ConvertMultiByteStringToWideString(const std::string& mString);
};