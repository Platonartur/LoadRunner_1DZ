Action1()
{

	web_add_header("DNT", 
		"1");

	web_add_header("Origin", 
		"http://172.24.48.1:1080");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(11);

	web_submit_data("itinerary.pl", 
		"Action=http://172.24.48.1:1080/cgi-bin/itinerary.pl", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://172.24.48.1:1080/cgi-bin/itinerary.pl", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=flightID", "Value=2992-830-BB", ENDITEM, 
		"Name=2", "Value=on", ENDITEM, 
		"Name=flightID", "Value=3724-1581-jj", ENDITEM, 
		"Name=3", "Value=on", ENDITEM, 
		"Name=flightID", "Value=3724-2350-jj", ENDITEM, 
		"Name=flightID", "Value=3724-3119-jj", ENDITEM, 
		"Name=5", "Value=on", ENDITEM, 
		"Name=flightID", "Value=3724-3889-jj", ENDITEM, 
		"Name=flightID", "Value=2992-4676-BB", ENDITEM, 
		"Name=flightID", "Value=2992-5445-BB", ENDITEM, 
		"Name=flightID", "Value=2992-6214-BB", ENDITEM, 
		"Name=flightID", "Value=2992-6984-BB", ENDITEM, 
		"Name=flightID", "Value=34081-7749-DD", ENDITEM, 
		"Name=flightID", "Value=34081-8519-DD", ENDITEM, 
		"Name=flightID", "Value=34081-9288-DD", ENDITEM, 
		"Name=flightID", "Value=34081-10057-DD", ENDITEM, 
		"Name=flightID", "Value=5941-107824-JJ", ENDITEM, 
		"Name=flightID", "Value=378223-11-BB", ENDITEM, 
		"Name=flightID", "Value=14-1-M", ENDITEM, 
		"Name=flightID", "Value=14-1-M", ENDITEM, 
		"Name=flightID", "Value=14-1-M", ENDITEM, 
		"Name=flightID", "Value=14-1-M", ENDITEM, 
		"Name=flightID", "Value=14-1-M", ENDITEM, 
		"Name=flightID", "Value=14-1-M", ENDITEM, 
		"Name=flightID", "Value=14-1-M", ENDITEM, 
		"Name=flightID", "Value=14-1-M", ENDITEM, 
		"Name=flightID", "Value=3-18-M", ENDITEM, 
		"Name=removeFlights.x", "Value=65", ENDITEM, 
		"Name=removeFlights.y", "Value=4", ENDITEM, 
		"Name=.cgifields", "Value=11", ENDITEM, 
		"Name=.cgifields", "Value=21", ENDITEM, 
		"Name=.cgifields", "Value=7", ENDITEM, 
		"Name=.cgifields", "Value=17", ENDITEM, 
		"Name=.cgifields", "Value=2", ENDITEM, 
		"Name=.cgifields", "Value=22", ENDITEM, 
		"Name=.cgifields", "Value=1", ENDITEM, 
		"Name=.cgifields", "Value=18", ENDITEM, 
		"Name=.cgifields", "Value=23", ENDITEM, 
		"Name=.cgifields", "Value=16", ENDITEM, 
		"Name=.cgifields", "Value=13", ENDITEM, 
		"Name=.cgifields", "Value=6", ENDITEM, 
		"Name=.cgifields", "Value=3", ENDITEM, 
		"Name=.cgifields", "Value=9", ENDITEM, 
		"Name=.cgifields", "Value=12", ENDITEM, 
		"Name=.cgifields", "Value=20", ENDITEM, 
		"Name=.cgifields", "Value=14", ENDITEM, 
		"Name=.cgifields", "Value=15", ENDITEM, 
		"Name=.cgifields", "Value=8", ENDITEM, 
		"Name=.cgifields", "Value=4", ENDITEM, 
		"Name=.cgifields", "Value=24", ENDITEM, 
		"Name=.cgifields", "Value=19", ENDITEM, 
		"Name=.cgifields", "Value=10", ENDITEM, 
		"Name=.cgifields", "Value=5", ENDITEM, 
		LAST);

	return 0;
}