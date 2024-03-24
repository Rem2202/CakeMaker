The system components are:

Command Panel: The interface with the client, implemented as a command-line interface (CLI). It includes all the necessary functions to meet the client's requirements.

Command Taker: Takes commands from the Command Panel and forwards them to the Cake Maker and Carousel of Cakes. Its functionality involves honoring the commands received from the client.
It manages the commands according to its specifications, checking the availability of the product in the Carousel of Cakes (minimum stock), removing it from there, and distributing it to the client. 
If the product is not available in the Carousel of Cakes, it queries the Cake Maker to honor the command.

Carousel of Cakes: A stock of cakes with a maximum capacity of 12 cakes. It only accepts items of type Cake.

Cake Maker: Responsible for preparing cakes according to the recipe, within a specified interval.
