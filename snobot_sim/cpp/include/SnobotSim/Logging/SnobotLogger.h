/*
 * SnobotLogger.h
 *
 *  Created on: Jun 21, 2017
 *      Author: PJ
 */

#ifndef SNOBOTLOGGER_H_
#define SNOBOTLOGGER_H_

#include <string>
#include <sstream>
#include "SnobotSim/ExportHelper.h"

namespace SnobotLogging
{
    enum LogLevel
    {
        DEBUG = 0,
        INFO = 1,
        WARN = 2,
        CRITICAL = 3,
        NONE = 4,
    };

    class EXPORT_ ISnobotLogger
    {
    public:

        virtual void SetLogLevel(LogLevel aLevel)
        {
            mLogLevel = aLevel;
        }

        virtual void Log(
                LogLevel aLogLevel,
                int aLineNumber,
                const std::string& aFileName,
                const std::string& aMessage) = 0;

        LogLevel mLogLevel;
    };

    class EXPORT_ NullLogger : public ISnobotLogger
    {
    public:
        virtual void Log(
                LogLevel aLogLevel,
                int aLineNumber,
                const std::string& aFileName,
                const std::string& aMessage);
    };

    class EXPORT_ LoggerWrapper
    {
    public:

        static void SetLogger(ISnobotLogger* aLogger);

        static void Log(
                LogLevel aLogLevel,
                int aLineNumber,
                const std::string& aFileName,
                const std::string& aMessage);

    private:
        static ISnobotLogger* sLogger;
        static NullLogger sNullLogger;
    };


    inline void SetLogger(ISnobotLogger* aLogger)
    {
        LoggerWrapper::SetLogger(aLogger);
    }
}


#ifndef __FUNCTION_NAME__
    #ifdef WIN32   //WINDOWS
        #define __FUNCTION_NAME__   __FUNCTION__
    #else          //*NIX
        #define __FUNCTION_NAME__   __func__
    #endif
#endif

#define SNOBOT_LOG(logLevel, messageStream)                                                   \
{                                                                                             \
    std::stringstream message;                                                                \
    message << messageStream;                                                                 \
    SnobotLogging::LoggerWrapper::Log(logLevel, __LINE__, __FILE__, message.str());  \
}

#define LOG_UNSUPPORTED()  SNOBOT_LOG(SnobotLogging::CRITICAL, "Unsupported function " << __FUNCTION_NAME__);


#endif /* SNOBOTLOGGER_H_ */