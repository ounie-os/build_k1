
                            #include "iec_types_all.h"
                            #include "POUS.h"
                            __IEC_types_enum __find_variable(unsigned int varindex, void ** varp){}
                            void* UnpackVar(void* varp, __IEC_types_enum vartype, void **real_value_p, char *flags){}
                            void RemindIterator(void* varp, __IEC_types_enum vartype){}
                            void __init_debug(void){}
                            void __cleanup_debug(void){}
                            void __retrieve_debug(void){}
                            inline void BufferIterator(void* varp, __IEC_types_enum vartype, int do_debug){}
                            void DebugIterator(void* varp, __IEC_types_enum vartype){}
                            void RetainIterator(void* varp, __IEC_types_enum vartype){}
                            
                            void set_trace_list(const char *s){}
                            void __publish_debug(void){}
                            void RegisterDebugVariable(int idx, void* force){}
                            void ResetDebugVariablesIterator(void* varp, __IEC_types_enum vartype){}
                            void ResetDebugVariables(void){}
                            void FreeDebugData(void){}
                            int GetDebugData(unsigned long *tick, unsigned long *size, void **buffer){}
                            void publish_by_socket(){}
                            void *GetPYG(){}
                       