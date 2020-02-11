#include "Parser.h"

int traverseTree2(XMLTag *node) {	
	while ((node)->name!=NULL)
	{
		printf("Level: %d \tTag Name: %s\n",(node)->level,(node)->name);
		node++;
	}
}

int Test1() {
	SetText("<a><b name=\"value\"> test</b><c>test2</c></a>");
	ParseTree();
}

int testTest() {
	SetText("<CATALOG>"
			"<CD><TITLE>Empire Burlesque</TITLE><ARTIST>Bob Dylan</ARTIST><COUNTRY>USA</COUNTRY><COMPANY>Columbia</COMPANY><PRICE>10.90</PRICE><YEAR>1985</YEAR></CD>"
			"<CD><TITLE>Hide your heart</TITLE><ARTIST>Bonnie Tylor</ARTIST><COUNTRY>UK</COUNTRY><COMPANY>CBS Records</COMPANY><PRICE>9.90</PRICE><YEAR>1988</YEAR></CD>"
			"<CD><TITLE>Greatest Hits</TITLE><ARTIST>Dolly Parton</ARTIST><COUNTRY>USA</COUNTRY><COMPANY>RCA</COMPANY><PRICE>9.90</PRICE><YEAR>1982</YEAR></CD>"
			"<CD><TITLE>Still got the blues</TITLE><ARTIST>Gary More</ARTIST><COUNTRY>UK</COUNTRY><COMPANY>Virgin redords</COMPANY><PRICE>10.20</PRICE><YEAR>1990</YEAR></CD>"
			"<CD><TITLE>Eros</TITLE><ARTIST>Eros Ramazzotti</ARTIST><COUNTRY>EU</COUNTRY><COMPANY>BMG</COMPANY><PRICE>9.90</PRICE><YEAR>1997</YEAR></CD>"
		"</CATALOG>");
	ParseTree();
	traverseTree2(getRoot());
	getchar();
	return 0;
}



int main(int argc, char* args[]) {
	testTest();
}
