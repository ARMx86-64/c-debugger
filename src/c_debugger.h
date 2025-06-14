#ifndef C_DEBUG
#define C_DEBUG

// TODO: add platform detection

// log message levels (should there be more?)
enum LogLevel {
  ERROR   = 1,  // [ERROR]
  WARNING = 2,  // [WARNING]
  DEBUG   = 3,  // [DEBUG]
  INFO    = 4   // [INFO]
};

// ERROR level log macro
#define LOG_ERROR(msg, ...) { \
  printf("[ERROR] in file:%s line:%d :" msg "\n",__FILE__ ,__LINE__ ,##__VA_ARGS__) \
}

// WARNING level log macro
#define LOG_WARNING(msg, ...) { \
  printf("[WARNING] in file:%s line:%d :" msg "\n",__FILE__ ,__LINE__ ,##__VA_ARGS__) \
}

// DEBUG level log macro (togglable)
#if DEBUG == 1
  #define LOG_DEBUG(msg, ...) { \
    printf("[DEBUG] in file:%s line:%d :" msg "\n",__FILE__ ,__LINE__ ,##__VA_ARGS__) \
  }
#else
  #define LOG_DEBUG(msg, ...)
#endif

// INFO level log macro
#define LOG_INFO(msg, ...) { \
  printf("[INFO] in file:%s line:%d :" msg "\n",__FILE__ ,__LINE__ ,##__VA_ARGS__) \
}

/* -------------- */
/* END OF LIBRARY */
/* -------------- */
#endif
