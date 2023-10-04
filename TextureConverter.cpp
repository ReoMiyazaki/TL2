#include "TextureConverter.h"

void TextureConverter::ConverterTextureWICToDDS(const std::string& filePath)
{
	// �e�N�X�`���t�@�C����ǂݍ���
	LoadWICTextureFormFile(filePath);

	// DDS�`���ɕϊ����ď����o��
}

void TextureConverter::LoadWICTextureFormFile(const std::string& fileParh)
{
	// �t�@�C���p�X�����C�h������ɕϊ�
	std::wstring sfilePath = ConvertMultiByteStringToWideString(fileParh);

	// �e�N�X�`����ǂݍ���
}

std::wstring TextureConverter::ConvertMultiByteStringToWideString(const std::string& mString)
{
	// ���C�h������ɕϊ������ۂ̕�������v�Z
	int filePathBufferSize = MultiByteToWideChar(CP_ACP, 0, mString.c_str(), -1, nullptr, 0);	// ��������擾

	// ���C�h������
	std::wstring wString;
	wString.resize(filePathBufferSize);	// ���������̃o�b�t�@��p��

	// ���C�h������̕ϊ�
	MultiByteToWideChar(CP_ACP, 0, mString.c_str(), -1, &wString[0], filePathBufferSize);	// �ϊ�

	return wString;
}
