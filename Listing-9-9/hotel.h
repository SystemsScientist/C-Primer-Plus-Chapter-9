// hotel.h -- contains constants and declarations,
// i.e., prototypes, for hotel.c

#define QUIT 5
#define HOTEL1 80.00
#define HOTEL2 125.00
#define HOTEL3 155.00
#define HOTEL4 200.00
#define DISCOUNT 0.95
#define STARS "******************************"

// function prototypes
int menu(void); // shows list of choices
int getnights(void); // returns number of nights desired
void showprice(double, int); // calculates price from rate,
			     // nights, and displays result
