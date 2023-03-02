/*
Credit to Jacob Walser (jaxxzer) for the pinout!!!
https://github.com/jaxxzer
*/
#if defined(DEVICE_NAME)
    #undef DEVICE_NAME
#endif
#define DEVICE_NAME "DIY STM32 RX"


#define GPIO_PIN_NSS            PB12 //confirmed on SLIMPLUS, R900MINI
#define GPIO_PIN_DIO0           PA15 //confirmed on SLIMPLUS, R900MINI
#define GPIO_PIN_DIO1           PA1  // NOT CORRECT!!! PIN STILL NEEDS TO BE FOUND BUT IS CURRENTLY UNUSED
/////////////////////////////////////// NOT FOUND ON SLIMPLUS EITHER.
#define GPIO_PIN_MOSI           PB15 //confirmed on SLIMPLUS, R900MINI
#define GPIO_PIN_MISO           PB14 //confirmed on SLIMPLUS, R900MINI
#define GPIO_PIN_SCK            PB13 //confirmed on SLIMPLUS, R900MINI
#define GPIO_PIN_RST            PC14 //confirmed on SLIMPLUS, R900MINI
#define GPIO_PIN_SDA            PB7
#define GPIO_PIN_SCL            PB6
  
#define GPIO_PIN_RCSIGNAL_RX        PA10
#define GPIO_PIN_RCSIGNAL_TX        PA9
#define GPIO_PIN_RCSIGNAL_RX_SBUS   PA3
#define GPIO_PIN_RCSIGNAL_TX_SBUS   PA2

#define GPIO_PIN_LED_RED        PA11 // Red
#define GPIO_PIN_LED_GREEN      PA12 // Green
#define GPIO_PIN_BUTTON         PC13  // pullup e.g. LOW when pressed
/* PB3: RX = HIGH, TX = LOW */
#define GPIO_PIN_RX_ENABLE      PB3
    /* PB9: antenna 1 (left) = HIGH, antenna 2 (right) = LOW
     * Note: Right Antenna is selected by default, LOW */
    #define GPIO_PIN_ANT_CTRL PB9

//#define POWER_OUTPUT_FIXED 15 //MAX power for 900 RXes
// External pads
// #define R9m_Ch1    PA8
// #define R9m_Ch2    PA11
// #define R9m_Ch3    PA9
// #define R9m_Ch4    PA10
// #define R9m_sbus   PA2
// #define R9m_sport  PA5
// #define R9m_isport PB11

//method to set HSE and clock speed correctly//
// #if defined(HSE_VALUE)
// /* Redefine the HSE value; it's equal to 8 MHz on the STM32F4-DISCOVERY Kit */
//#undef HSE_VALUE
//#define HSE_VALUE ((uint32_t)16000000).
//#define HSE_VALUE    25000000U
// #endif /* HSE_VALUE */
//#define SYSCLK_FREQ_72MHz


// Output Power - Default to SX1272 max output
