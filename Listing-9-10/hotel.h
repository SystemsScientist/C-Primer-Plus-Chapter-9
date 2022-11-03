// hotel.h -- constants and declarations for hotel.c

#define QUIT 5
#define HOTEL1 80.00
#define HOTEL2 125.0
#define HOTEL3 155.0
#define HOTEL4 200.0
#define DISCOUNT 0.95
#define STARS "******************************"

// function prototypes
int menu(void);			// shows list of choices
int getnights(void);		// returns number of nights desired
void showprice(double, int);	// calculates price from rate, nights
				// and displays result
