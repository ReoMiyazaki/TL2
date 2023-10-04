#include "TextureConverter.h"

void TextureConverter::ConverterTextureWICToDDS(const std::string& filePath)
{
	// テクスチャファイルを読み込む
	LoadWICTextureFormFile(filePath);

	// DDS形式に変換して書き出す
}

void TextureConverter::LoadWICTextureFormFile(const std::string& fileParh)
{
	// ファイルパスをワイド文字列に変換
	std::wstring sfilePath = ConvertMultiByteStringToWideString(fileParh);

	// テクスチャを読み込む
}

std::wstring TextureConverter::ConvertMultiByteStringToWideString(const std::string& mString)
{
	// ワイド文字列に変換した際の文字列を計算
	int filePathBufferSize = MultiByteToWideChar(CP_ACP, 0, mString.c_str(), -1, nullptr, 0);	// 文字列を取得

	// ワイド文字列
	std::wstring wString;
	wString.resize(filePathBufferSize);	// 文字数分のバッファを用意

	// ワイド文字列の変換
	MultiByteToWideChar(CP_ACP, 0, mString.c_str(), -1, &wString[0], filePathBufferSize);	// 変換

	return wString;
}
