/*
Thanks to thoses developers for their projects:
* @7h30th3r0n3 : https://github.com/7h30th3r0n3/Evil-M5Core2 and https://github.com/7h30th3r0n3/PwnGridSpam
* @viniciusbo : https://github.com/viniciusbo/m5-palnagotchi
* @sduenasg : https://github.com/sduenasg/pio_palnagotchi

Thanks to @bmorcelli for his help doing a better code.
*/

// Global variable declaration
extern bool skipDeauthOnCapturedHS; // Controls whether to skip deauth for APs with captured handshakes
extern bool deauthEnabled;
extern uint16_t beacon_delay_ms;

void brucegotchi_start();
void brucegotchi_setup();
void brucegotchi_update();
