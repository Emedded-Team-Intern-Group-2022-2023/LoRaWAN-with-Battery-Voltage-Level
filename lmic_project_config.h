// project-specific definitions
#define LMIC_LORAWAN_SPEC_VERSION   LMIC_LORAWAN_SPEC_VERSION_1_0_2
#define CFG_eu868 1
//#define CFG_us915 1
//#define CFG_au915 1
//#define CFG_as923 1
// #define LMIC_COUNTRY_CODE LMIC_COUNTRY_CODE_JP      /* for as923-JP; also define CFG_as923 */
//#define CFG_kr920 1
//#define CFG_in866 1
#define CFG_sx1276_radio 1 //RF96
//LMIC_setupBand();
//const MAX_CHANNELS, MAX_BANDS, LIMIT_CHANNELS, BAND_MILLI, BAND_CENTI, BAND_DECI, BAND_AUX;
//#define LMIC_USE_INTERRUPTS
#define DISABLE_PING //It saves space
#define DISABLE_BEACONS //It saves space
#define LMIC_ENABLE_DeviceTimeReq 0 //Disable Network Time Support 