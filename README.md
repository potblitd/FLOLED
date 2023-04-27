# FLOLED

Why is gifting flowers considered such a beautiful present when the plant will already die only a few weeks or even days later ? On the quest to finding an always-blooming flower, the idea of using PCBs with bright shining LEDs quickly came to the engineering mind. This is one of these projects that involve interesting methods, ingenious workarounds and funky designs that were never even considered in the initial design idea.

<p align="center">
  <img src="https://github.com/potblitd/FLOLED/blob/main/images/FLOLED-night.JPG" width="500" />
</p>

Heavily inspired by vyudin’s [PCB LED flower](https://www.instructables.com/PCB-LED-Flower/), I wanted each petal to have its own microcontroller, that can be removed easily for programming, and hold as many individually controllable LEDs as possible. Having never used the ATtiny microcontrollers previously, I thought it could be a good idea to play with one of these and just bought the cheapest ones I could find : the ATtiny 13A.

## Schematic

From its 8 pins, 2 are used for power supply and PB5 is the reset pin that I would rather leave alone because I am not sure what I’m doing, which gives us 5 GPIOs for the LEDs. Now, in order to get more than just 5 measly LEDs to light up the petal, we can use the beautiful technique of [PCB LED flower](https://en.wikipedia.org/wiki/Charlieplexing) which would allow shining 20 LEDs at once ! At once ? No, not really, but if the LEDs blink one after the other fast enough, nobody will notice ;). So, the circuit for each petal looks like this :

<p align="center">
  <img src="https://github.com/potblitd/FLOLED/blob/main/images/FLOLED_schematic-simple.png" width="800" />
</p>

Now for the central part, that holds all the petals, I opted for a single RGB LED in the middle to keep the design neat and small.

<p align="center">
  <img src="https://github.com/potblitd/FLOLED/blob/main/images/FLOLED-BASE_schematic-simple.png" width="800" />
</p>
