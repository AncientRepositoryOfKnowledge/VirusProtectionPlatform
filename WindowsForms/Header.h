#pragma once

#include <string>
#include <stdlib.h>
#include <algorithm> //random_shuffle
#include <cstdlib>


ref class Cipher
{
protected:
	//http://msdn.microsoft.com/en-us/library/system.string(v=vs.110).aspx
	System::String ^ PlainText;
	System::String ^ CipherText;
	System::String ^ OriginalText;
	//http://www.ridgesolutions.ie/index.php/2012/02/08/net-ccli-c3145-global-or-static-variable-may-not-have-managed-type/
	static array<System::String ^> ^alphabet = gcnew array<System::String ^>(26){ "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z" };
	static array<System::String ^> ^alphabetOffset = gcnew array<System::String ^>(26){ "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z" };
	
public:
	//Cipher();
	System::String ^ ReturnCipher()
	{
		for (int i = 0; i < 26; i++)
		{
			return alphabetOffset[i];
		}
	}

};

ref class Caesar :public Cipher
{
private:
	int offset;
public:
	//Caesar();
	void OffsetAlphabet(int index)
	{

		for (int i = index, a = 0, x = 0; i < 26, a < 26; i++, a++)
		{
			int offset = i % 26; //http://calculator.tutorvista.com/mod-calculator.html
			alphabetOffset[offset] = alphabet[a];
		}
	}
};

ref class Encoder :public Caesar
{
protected:
		
private:
		System::String ^ TextToChange;
		System::String ^ TempText;
public:
	System::String ^ Encode(int TextLength, System::String ^ OriginalText)
	{
		
		for (int i = 0; i < TextLength; i++)
		{
			TextToChange = System::Convert::ToString(OriginalText[i]);
			for (int a = 0; a < 26; a++)
			{
				TempText = TextToChange;
				TempText = TextToChange->Replace(alphabet[a], alphabetOffset[a]);
				if (TempText != TextToChange)
				{
					break;
				}
			}
			CipherText = CipherText + TempText;
			
		}
		
		return CipherText;
	}

};