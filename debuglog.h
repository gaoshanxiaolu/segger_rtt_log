#ifndef DEBUGLOG_H
#define DEBUGLOG_H

#include "SEGGER_RTT.h"
#include "SEGGER_RTT_Conf.h"

#define ERROR      1
#define WARN       2
#define INFO       3
#define LOG_PRINT_LEVEL  INFO

extern unsigned int get_sys_tick(void);

#define log_error(...) do{\
        if(LOG_PRINT_LEVEL>ERROR)\
        {\
        }\
        else\
        {\
            SEGGER_RTT_printf(0,"[E][%d][%s]:",get_sys_tick(), __FUNCTION__); \
            SEGGER_RTT_printf(0,__VA_ARGS__); \
            SEGGER_RTT_printf(0,"\n"); \
        }\
        }while(0)

#define log_warning(...) do{\
        if(LOG_PRINT_LEVEL>WARN)\
        {\
        }\
        else\
        {\
            SEGGER_RTT_printf(0,"[W][%d][%s]:",get_sys_tick(), __FUNCTION__); \
            SEGGER_RTT_printf(0,__VA_ARGS__); \
            SEGGER_RTT_printf(0,"\n"); \
        }\
        }while(0)

#define log_info(...) do{\
        if(LOG_PRINT_LEVEL>INFO)\
        {\
        }\
        else\
        {\
            SEGGER_RTT_printf(0,"[I][%d][%s]:",get_sys_tick(), __FUNCTION__); \
            SEGGER_RTT_printf(0,__VA_ARGS__); \
            SEGGER_RTT_printf(0,"\n"); \
        }\
        }while(0)

#endif
