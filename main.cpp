#include <cstdio>
#include <cstdlib>
#include <DirectXTex.h>
#include "TextureConverter.h"

// コマンドライン引用
enum Argument
{
	kApplicationPath,	// アプリケーションのパス
	KFilePath,			// 渡されたファイルのパス

	NumArgument
};

int main(int argc, char* argv[])
{
	for (int i = 0; i < argc; i++)
	{
		printf(argv[i]);
		printf("\n");
	}

	assert(argc >= NumArgument);

	// COMライブラリの初期化
	HRESULT hr = CoInitializeEx(nullptr, COINIT_MULTITHREADED);
	assert(SUCCEEDED(hr));

	// テクスチャコンバーター
	TextureConverter converter;

	// テクスチャ変換
	converter.ConverterTextureWICToDDS(argv[KFilePath]);

	// COMライブラリの終了
	CoUninitialize();

	system("pause");
	return 0;
}