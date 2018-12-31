//% color=#27b0ba weight=100 icon="\uf26c"
namespace OLED_KR {

    /**
     * initialises the i2c OLED display
     * @param height height (in pixels), eg: 64
     * @param width width (in pixels), eg: 128
     */
    //% blockId=oled_init_terminal
    //% weight=100
    //% block="initialize OLED 3 with height %height|width %width"
    //% icon="\uf1ec" 
    //% shim=OLED_KR::init_terminal
    export function init(height: number, width: number): void {
        return;
    }

    /**
     * clears the screen.
     */
    //% blockId=oled_clear_screen
    //% block="clear OLED display"
    //% icon="\uf1ec" 
    //% shim=OLED_KR::clearDisplay
    export function clear(): void {
        return;
    }

/**
      * prints a string on the OLED display
      * @param text text to display, eg: "Hello, OLED!"
      */
     //% weight=92 blockGap=8
     //% block="show (without newline)|string %text" 
     //% async
     //% blockId=oled_print_stringNoNewLine
     //% icon="\uf1ec"
     //% shim=OLED_KR::showStringNoNewLine
     export function showStringNoNewLine(text: string): void {
        // console.log("display: " + text);
        return;
    }
}