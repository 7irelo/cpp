#include <iostream>

class Log
{
public:
	enum Level
	{
		LevelError, LevelWarning, LevelInfo
	};
private:
	Level m_LogLevel = LevelInfo;
public:
	void SetLevel(Level level)
	{
		m_LogLevel = level;
	}

	void Error(const char* message)
	{
		if (m_LogLevel >= LevelError);
			std::cout << "[ERROR]: " << message << std::endl;
	}
	void Warning(const char* message)
	{
		if (m_LogLevel >= LevelWarning)
			std::cout << "[WARNING]: " << message << std::endl;
	}
	void Info(const char* message)
	{
		if (m_LogLevel >= LevelInfo)
			std::cout << "[INFO]: " << message << std::endl;
	}
};

int main()
{
	Log log;
	log.SetLevel(Log::LevelWarning);
	log.Warning("Malware was detected in your system. Reboot immediately. Red Alert. Red Alert!");
	std::cin.get();
	return 0;
}