
#include <LedControl.h>
#include "LedHandler.h"
#include "charmap.h"

const int PRT_DELAY = 450;

void LedHandler::write(String m) {
    int i = 7;

    for (int x = 0; x < m.length(); x++) {
        handle.setRow(
            device, i,
            getByteByChar(m[x])
        );

        delay(PRT_DELAY);
        i--;

        if (i <= 0) {
            i = 7;
            handle.clearDisplay(
                device
            );
        }
    }
}
