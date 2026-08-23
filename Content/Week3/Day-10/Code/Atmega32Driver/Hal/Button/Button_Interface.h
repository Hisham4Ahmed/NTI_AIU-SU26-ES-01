/*
    API
    void Btn_Init (uint8_t ButtonGroup,uint8_t ButtonPin,uint8_t Connection);
    -> Connection type will be in side Private and support all options
        -> Internal Pullup 
        -> External Pullup 
        -> External PullDow 
    uint8_t Btn_ReadState(uint8_t ButtonGroup,uint8_t ButtonPin,uint8_t Connection);
    ButtonState 
        1- PullUp_Pressed -> 0 
        2- PullUp_NotPressed -> 1 
        3- PullDown_Pressed -> 1 
        4- PullDown_NotPressed -> 0 
    */