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
    void showStringNoNewLine(String text) {
		/*
		for (int i=0; i<text->length; i++) {
			oled->printf("%02X ", text->data[i]);
		}
		*/

		const char *mymsg = (const char *)text->data;
		for (int i=0; i<strlen(mymsg); i++) {
			//spring(buf, "%02X ", mymsg[i]);
			oled->printf("%02X ", mymsg[i]);
		}
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