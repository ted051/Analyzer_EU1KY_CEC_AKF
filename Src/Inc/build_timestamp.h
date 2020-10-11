#ifndef BUILD_TIMESTAMP 
#warning GIT failed. Repository not found. Firmware revision will not be generated. 
#define HGREV N/A 
#define BUILD_TIMESTAMP_US "2020-10-10 18:33 UT"
#define BUILD_TIMESTAMP_D "10-10-2020 18:33 UT"
#define HGREVSTR(s) stringify_(s) 
#define stringify_(s) #s 
#endif 
