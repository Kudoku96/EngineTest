#ifndef FILE_UTILS_H
#define FILE_UTILS_H

#include "../Debug.h"
#include <string>
#include <fstream>

namespace EngineTest
{
	namespace Utils
	{
		class FileUtils
		{
			static FileUtils* s_Instance;
		public:
			static void Construct();
			static void Shutdown();
			static FileUtils* Get();
			bool Init();
		private:
			bool m_Initialized;
		private:
			FileUtils();
			~FileUtils();
		public:
			std::string ReadFile(const char* filePath);
		};
	}
}

#endif