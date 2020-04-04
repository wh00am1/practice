#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <tchar.h>

IMAGE_DOS_HEADER DOS_HEADER;
IMAGE_NT_HEADERS NT_HEADERS;

int _tmain(int argc, _TCHAR* argv)
{
	FILE* pfile;
	errno_t error;
	char* filepath = "C:\\Users\\ethan\\workspace\\practice\\pe\\test.exe";
	if ((error = fopen_s(&pfile, filepath, "r")) != 0)
	{
		printf("[-]Error when opening file: %s\n", filepath);
		getchar();
	}
	else
	{
		printf("[+]Reading PE Data from file: %s\n", filepath);
		fread(&DOS_HEADER, sizeof(struct _IMAGE_DOS_HEADER), 1, pfile);
		fseek(pfile, DOS_HEADER.e_lfanew, 0);
		fread(&NT_HEADERS, sizeof(struct _IMAGE_NT_HEADERS), 1, pfile);

		printf("(WORD)Magic is: %04x\t\n", NT_HEADERS.OptionalHeader.Magic);
		printf("(BYTE)MajorLinkerVersion is %02x\t\n", NT_HEADERS.OptionalHeader.MajorLinkerVersion);
		printf("(DWORD)Signature is: %08x\t\n", NT_HEADERS.Signature);
		printf("(WORD)Machine is: %04x\t\n", NT_HEADERS.FileHeader.Machine);
		printf("(WORD)Sections: %04x\t\n", NT_HEADERS.FileHeader.NumberOfSections);
		printf("(DWORD)TimeDateStamp is: %08x\t\n", NT_HEADERS.FileHeader.TimeDateStamp);
		printf("(DWORD)PointerToSymbolTable is: %08x\t\n", NT_HEADERS.FileHeader.PointerToSymbolTable);
		printf("(DWORD)NumberOfSymbols is: %08x\t\n", NT_HEADERS.FileHeader.NumberOfSymbols);
		printf("(WORD)SizeOfOptionalHeader is: %04x\t\n", NT_HEADERS.FileHeader.SizeOfOptionalHeader);
		printf("(WORD)Characteristics is: %04x\t\n", NT_HEADERS.FileHeader.Characteristics);
		printf("SizeOf IMAGE_FILE_HEADER is %d bytes \t\n", sizeof(_IMAGE_FILE_HEADER));
	}
	system("pause");
	return 0;

}