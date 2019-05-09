#define _CRT_SECURE_NO_WARNINGS 1 
#include<iostream>
#include<string>
#include<fstream>

using namespace std;
//
//
//struct ServerInfo
//{
//	char _ip[32];      //ip
//	int _port;         //端口
//};
//
//class ConfigManager
//{
//public:
//	ConfigManager(const char* file)
//		:_file(file)
//	{
//
//	}
//
//	//字节流
//	void WriteBin(const ServerInfo& info)
//	{
//		std::ofstream ofs(_file.c_str());
//		ofs.write((const char*)&info, sizeof(info));
//	}
//
//	void ReadBin(ServerInfo& info)
//	{
//		std::ifstream ifs(_file.c_str());
//		ifs.read((char*)&info, sizeof(info));
//	}
//
//	//字符流
//	void WriteText(const ServerInfo& info)
//	{
//		std::ofstream ofs(_file.c_str());
//		ofs << info._ip << std::endl;
//		ofs << info._port;
//	}
//
//	void ReadText(ServerInfo& info)
//	{
//		std::ifstream ifs(_file.c_str());
//		ifs >> info._ip;
//		ifs >> info._port;
//	}
//
//
//private:
//	std::string _file;
//};
//
//int main()
//{
//	ServerInfo writeinfo;
//	strcpy(writeinfo._ip, "127.0.0.1");
//	writeinfo._port = 3306;
//	ConfigManager conMgr("serverinfo.config");
//	conMgr.WriteBin(writeinfo);
//
//	ServerInfo readinfo;
//	conMgr.ReadBin(readinfo);
//	std::cout << readinfo._ip << std::endl;
//	std::cout << readinfo._port << std::endl;
//
//	system("pause");
//	return 0;
//}


int main()
{
	/*int i = 100, sum = 0;
	for (int i = 0; i != 10; ++i)
	{
		sum += i;
	}
	cout << i <<" "  << sum << endl;*/

	//int sum = 0;
	//for (int i = 0; i != 10; ++i)
	//{
	//	sum += i;
	//}
	//cout << sum << endl;

	extern const int a;
	cout << a << endl;

	system("pause");
	return 0;
}