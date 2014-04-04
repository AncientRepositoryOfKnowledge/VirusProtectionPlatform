#pragma once

#include "Dialog Class.h"
#include "ActiveGuard.h"
#include "Options.h"

using namespace System;
using namespace System::Security::Cryptography;
using namespace System::IO;
using namespace System::Collections::Generic;

ref class Protection
{
protected:

private:

public:

};

ref class Hash :public Protection
{
protected:

private:
	//http://msdn.microsoft.com/en-us/library/3a733s97(v=vs.110).aspx
	//http://stackoverflow.com/questions/2150455/how-do-i-create-an-md5-hash-digest-from-a-text-file
	String ^ FinalHash;
	void MD5HashFile(String ^ FileName)
	{
		//Assigning the hash of the file to an array of unsigned characters.
		try
		{
		array<unsigned char> ^ HashValue = MD5::Create()->ComputeHash(File::ReadAllBytes(FileName));
		//Using the BitConverter class to convert the bytes into an interetable string.
		FinalHash = BitConverter::ToString(HashValue);
		}
		catch (...)
		{
			MessageBox::Show("File is in use", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

	}
public:
	Hash(String ^ FileName)
	{
		//Constructor hashes the file.
		MD5HashFile(FileName);
	}
	String ^ GetHash()
	{
		return FinalHash;
	}
};

ref class Scan :public Protection
{
protected:
	String ^ Path;
	String ^ Keywords;
	array<String ^> ^ Files;
private:
	//http://support.microsoft.com/kb/303974
	void ScanForFiles()
	{
		try
		{
			Files = Directory::GetFiles(Path, Keywords, SearchOption::AllDirectories);
		}
		catch (...)
		{
			MessageBox::Show("You tried to access a vorbidden area. The scan will now stop.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

public:
	Scan(String ^ Path_arg, String ^ Keywords_arg)
	{
		//Constructor assigns variables.
		Path = Path_arg;
		Keywords = Keywords_arg;
		//Calls the function with the variable.
		ScanForFiles();
	}
	array<String ^> ^ GetFiles()
	{
		return Files;
	}
};