
#ifndef KEVINS_MACROS
#define KEVINS_MACROS

#ifndef UNUSED // one of our third party libraries was defining this
#define UNUSED(x) ((void)(x))
#endif

#define COMPILER_ASSERT(condition) \
    typedef char __attribute__((unused)) CONCATENATE(compiler_assertion_, __COUNTER__)[(condition) ? 1 : -1]

#endif 
