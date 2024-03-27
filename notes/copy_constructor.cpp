#include <iostream>
#include <string.h>

class String
{
private:
	char *m_Buffer;
	unsigned int m_Size;
public:
	String(const char *string)
	{
		m_Size = strlen(string);
		m_Buffer = new char[m_Size + 1];
		memcpy(m_Buffer, string, m_Size + 1);
		// m_Buffer[m_Size] = 0;
	}
	String(const String &other)
		: m_Size(other.m_Size)
		{
			m_Buffer = new char[m_Size + 1];
			memcpy(m_Buffer, other.m_Buffer, m_Size + 1);
		}
	~String()
	{
		delete[] m_Buffer;
	}
	char &operator[](unsigned int index)
	{
		return m_Buffer[index];
	}
	friend std::ostream &operator<<(std::ostream &stream, const String &string);
};

std::ostream &operator<<(std::ostream &stream, const String &string)
{
	stream << string.m_Buffer;
	return stream;
}

int main(void)
{
	String string = "Eric";
	String second = string;
	second[0] = 'R';

	std::cout << "hello " << string << std::endl;
	std::cout << "hello " << second << std::endl;
}