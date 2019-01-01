#include "pxt.h"
#include "Adafruit_SSD1306.h"

using namespace pxt;

namespace OLED_KR {

	#define SSD1306_ADDRESS 0x78
	#undef printf

	MicroBitI2C i2c(I2C_SDA0, I2C_SCL0);
	Adafruit_SSD1306_I2c *oled;

	void init(int height, int width){
		if (oled != NULL) delete oled;
		oled = new Adafruit_SSD1306_I2c(i2c, SSD1306_ADDRESS, height, width);
		oled->splash();
		oled->display();
	}

	//%
	void init_terminal(int height, int width){
		if (oled != NULL) delete oled;
		oled = new Adafruit_SSD1306_I2c(i2c, SSD1306_ADDRESS, height, width);
		oled->clearDisplay();
		oled->display();
		oled->setTextCursor(0, 0);
	}

	//%
	void clearDisplay(){
		oled->setTextCursor(0, 0);
		oled->clearDisplay();
		oled->display();
	}

	//%
    void showStringNoNewLine2(String text) {
		/*
		for (int i=0; i<text->length; i++) {
			oled->printf("%02X ", text->data[i]);
		}
		*/
/*
class BoxedString : public RefObject {
  public:
    uint16_t length;
    char data[0];
    BoxedString() : RefObject(PXT_REF_TAG_STRING) {}
};

String mkString(const char *data, int len = -1);


*/
		
		oled->printf("%s, len = %d\n", "16", text->length);
		oled->printf("%s\n", PXT_BUFFER_DATA(text));

		char *paramChar = PXT_BUFFER_DATA(text);
		oled->printf("%d,%d\n", sizeof(paramChar), strlen(paramChar));

/*
		char mymsg[] = "AA한글BB";
		for (int i=0; i<strlen(mymsg); i++) {
			//spring(buf, "%02X ", mymsg[i]);
			oled->printf("%02X ", mymsg[i]);
		}
*/		

/*
		char *test111;

		// clear message data
        memset(test111, 0, text->length);
        // save data
        memcpy(test111, PXT_BUFFER_DATA(text), text->length);
*/
		//text->data = "AA한글BB";
		//oled->printf("%s, len = %d\n", "13", text->length);
		/*
		oled->printf("%s\n", PXT_BUFFER_DATA(text));

		ManagedString s(text);
		char *paramChar = (char *)s.toCharArray();
		oled->printf("%d\n", s.length());
	
		for (int i=0; i<s.length(); i++) {
			oled->printf(",%02X ", paramChar++);
		}*/
	
/*
		for (int i=0; i<text->length; i++) {
			//spring(buf, "%02X ", mymsg[i]);
			oled->printf("%02X ", text->data[i]);
		}
*/

		/*
		//ManagedString inputString = uBit.serial.readUntil(MSTR(text));
		ManagedString inputString = MSTR(text);
		//char paramChar[inputString.length()+1];
		char *paramChar = (char *)inputString.toCharArray();
		for (int i=0; i<strlen(paramChar); i++) {
			oled->printf("%02X ", (char *)paramChar++);
		}
		*/
		/*
		// StringData 
		const char *bytes = (const char*)text->data;
		int len = wcslen(text->data) * 2;
		for (size_t i = 0; i < len; i++)
			printf("%02X ", 0xFF & bytes[i]);
		printf("\n");
		*/
		/*
		while(*paramChar){ 
			//spring(buf, "%02X ", mymsg[i]);
			oled->printf("%02X ", (char *)paramChar++);
		}
		*/

		/*
		const char *mymsg = (const char *)text->data;
		while(*mymsg){ 
			//spring(buf, "%02X ", mymsg[i]);
			oled->printf("%02X", mymsg++);
		}
		*/
/*
		char *teststr;
		mystrtod(text->data, teststr);
*/
/*
		for (int i=0; i<text->count; i++) {
			oled->printf("%02X ", text->data[i]);
		}
*/
		oled->display();
    }

	//% 
    void showStringNoNewLine(StringData *text) {
		/*
		for (int i=0; i<text->length; i++) {
			oled->printf("%02X ", text->data[i]);
		}
		*/
/*
class BoxedString : public RefObject {
  public:
    uint16_t length;
    char data[0];
    BoxedString() : RefObject(PXT_REF_TAG_STRING) {}
};

String mkString(const char *data, int len = -1);


*/
		/*
		oled->printf("%s, len = %d\n", "16", text->length);
		oled->printf("%s\n", PXT_BUFFER_DATA(text));

		char *paramChar = PXT_BUFFER_DATA(text);
		oled->printf("%d,%d\n", sizeof(paramChar), strlen(paramChar));
*/
/*
		char mymsg[] = "AA한글BB";
		for (int i=0; i<strlen(mymsg); i++) {
			//spring(buf, "%02X ", mymsg[i]);
			oled->printf("%02X ", mymsg[i]);
		}
*/		

		oled->printf("%s, len = %d\n", "22", text->len);
/*
		char *test111;

		// clear message data
        memset(test111, 0, text->length);
        // save data
        memcpy(test111, PXT_BUFFER_DATA(text), text->length);
*/
		//text->data = "AA한글BB";
		//oled->printf("%s, len = %d\n", "13", text->length);
		oled->printf("%s\n", PXT_BUFFER_DATA(text));

		ManagedString s(text);
		char *paramChar = (char *)s.toCharArray();
		oled->printf("%d\n", s.length());
	
		for (int i=0; i<s.length(); i++) {
			oled->printf(",%02X ", paramChar++);
		}
	
/*
		for (int i=0; i<text->length; i++) {
			//spring(buf, "%02X ", mymsg[i]);
			oled->printf("%02X ", text->data[i]);
		}
*/

		/*
		//ManagedString inputString = uBit.serial.readUntil(MSTR(text));
		ManagedString inputString = MSTR(text);
		//char paramChar[inputString.length()+1];
		char *paramChar = (char *)inputString.toCharArray();
		for (int i=0; i<strlen(paramChar); i++) {
			oled->printf("%02X ", (char *)paramChar++);
		}
		*/
		/*
		// StringData 
		const char *bytes = (const char*)text->data;
		int len = wcslen(text->data) * 2;
		for (size_t i = 0; i < len; i++)
			printf("%02X ", 0xFF & bytes[i]);
		printf("\n");
		*/
		/*
		while(*paramChar){ 
			//spring(buf, "%02X ", mymsg[i]);
			oled->printf("%02X ", (char *)paramChar++);
		}
		*/

		/*
		const char *mymsg = (const char *)text->data;
		while(*mymsg){ 
			//spring(buf, "%02X ", mymsg[i]);
			oled->printf("%02X", mymsg++);
		}
		*/
/*
		char *teststr;
		mystrtod(text->data, teststr);
*/
/*
		for (int i=0; i<text->count; i++) {
			oled->printf("%02X ", text->data[i]);
		}
*/
		oled->display();
    }
}