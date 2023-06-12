# LedHandler
##### Led Seven Segment Display Library

LedHandler is an [Arduino](http://arduino.cc) library for MAX7219 and MAX7221 Led display drivers.
With usage of LedControl.

### Usage

```cpp
const int CLOCK_DIN = 7;
const int CLOCK_CLK = 6; //ok
const int CLOCK_LOAD = 5;
const int TOTAL_DISPLAY_COUNT = 1;

LedControl lc = LedControl(
  CLOCK_DIN,
  CLOCK_CLK,
  CLOCK_LOAD,
  TOTAL_DISPLAY_COUNT
);

LedHandler h = LedHandler(lc);

h.write("Hello there..");

```


