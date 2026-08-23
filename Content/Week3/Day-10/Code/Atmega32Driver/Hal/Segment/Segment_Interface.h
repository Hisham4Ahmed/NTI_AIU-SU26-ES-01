/*
    Support -> SSD_Anode & SSD_cathod 
    Limitation connection ->    h g f e d c b a
                                7 6 5 4 3 2 1 0
    API
    void SSD_Init (uint8_t SSDGroup);
    void SSD_DisplayNumber(uint8_t SSDGroup,uint8_t SSDType,uint8_t Number);
    SSDType 
        1- SSD_Anode -> 0 
        2- SSD_Cathod -> 1 
    void SSD_Off (uint8_t SSDGroup,uint8_t SSDType);

    */