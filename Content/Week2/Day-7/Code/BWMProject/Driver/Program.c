#include "Private.h"
#include "Config.h"


#if CarVersion==EuropVersion
    void BWM_CarWelcomeMessage()
    {
        printf("Welcome Europ\n");
    }
#elif CarVersion==MiddleEastVersion
    void BWM_CarWelcomeMessage()
    {
        printf("Welcome MiddleEast\n");
    }
#elif CarVersion==USAVersion
    void BWM_CarWelcomeMessage()
    {
        printf("Welcome USA\n");
    }
#else 
    #warning "Invaild Version"
    void BWM_CarWelcomeMessage()
    {
        printf("Welcome Europ\n");
    }
#endif 
