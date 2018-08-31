# BoujeePort
A simple system that holds information about the clients' security (stocks, bonds, etc.) portfolios to calculate the total charge for each client.

## Class Descriptions

### Security

An abstract class that holds the basics of stocks and bonds, such as:

* the company's name
* a single security's nominal value
* the number of securities bought by client
* the year of purchase

plus some virtual methods for calculating the annual charge of a security and displaying the information.


### Stock

Child class of Security, adding the information of the stock's price and implementing the methods described above.


### Bond

Child class of Security, adding the information of the bond's expiration date and interest rate and implementing the methods described above.


### Portfolio

Class to describe a portfolio of a client, holding information such as:

* the client's name
* the client' address
* the client's phone number
* the client's registration number

plus a vector with the securities the client has (that are being passed by reference in case of a future expansion where a client can sell some of its securities to another client), a boolean indicator that shows if the portfolio is or isn't valid and a number of methods to:

* calculate the total charge for the client
* cancel the portfolio
* check if there's at least one security with an annual charge bigger than a given amount (see below)
* add a security to the portfolio
* remove a security from the portfolio
* return the number of securities at the portfolio
* display the information of the portfolio


## Class Diagram

![](readme_pics/classdiagram.png)


## Easin' it up

* all types of menus (main and subs) are concetrated to [menus.cpp](https://github.com/Coursal/BoujeePort/blob/master/menus.cpp)
* if-else instead of switch-case for better and simpler code
* initializing ten (10) portfolios for testing purposes
* use of a client's registration number as a reference for uniqueness in relation to other clients
* looping the main menu display to choose several function in a session
* attachment of two (2) files named [ABC1234ZXC](https://github.com/Coursal/BoujeePort/blob/master/ABC1234ZXC) and [Q111Q111](https://github.com/Coursal/BoujeePort/blob/master/Q111Q111) to test the direct securities loading from file by adding a new 

