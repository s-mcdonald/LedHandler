#include <LedControl.h>

class LedHandler {
    private:
        LedControl handle;
        int device;

    public :
        LedHandler(LedControl driver): LedHandler(driver, 0) {}
        LedHandler(LedControl driver, int deviceId):handle(driver), device(deviceId) {}
        void write(String m);
};
