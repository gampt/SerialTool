#ifndef __VERSION_H
#define __VERSION_H

#define MAIN_VERSION      1.0.11

#define SOFTWARE_NAME     "SerialTool"
#define COPYRIGHT         "Copyleft  2017 by Wenliang"

#define _STR_(s)           #s
#define __STR(s)          _STR_(s)

#define BUILD_VERSION     _STR_($GIT_VERSION)
#define SOFTWARE_VERSION  __STR(MAIN_VERSION)

#endif
