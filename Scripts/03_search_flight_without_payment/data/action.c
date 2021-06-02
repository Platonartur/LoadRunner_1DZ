Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_cookie("MSO=SID&1622576670; DOMAIN=172.29.64.1");

	web_add_cookie("MTUserInfo=firstName&Bob&address2&Moscow&username&jojo21&hash&113&lastName&Bobovich%0A&address1&Moscow&creditCard&1021&expDate&2024%0A; DOMAIN=172.29.64.1");

	web_add_auto_header("DNT", 
		"1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("welcome.pl", 
		"URL=http://172.29.64.1:1080/cgi-bin/welcome.pl?signOff=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.29.64.1:1080/WebTours/", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("MSO=SID&1622576847; DOMAIN=172.29.64.1");

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	lr_start_transaction("login");

	web_add_header("Origin", 
		"http://172.29.64.1:1080");

	web_submit_data("login.pl", 
		"Action=http://172.29.64.1:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"TargetFrame=body", 
		"RecContentType=text/html", 
		"Referer=http://172.29.64.1:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userSession", "Value=131435.953584447zHzAHDzpizcftAfztptcVVHf", ENDITEM, 
		"Name=username", "Value=jojo21", ENDITEM, 
		"Name=password", "Value=jojo", ENDITEM, 
		"Name=login.x", "Value=75", ENDITEM, 
		"Name=login.y", "Value=6", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		LAST);

	lr_end_transaction("login",LR_AUTO);

	lr_think_time(11);

	lr_start_transaction("flights");

	web_url("Search Flights Button", 
		"URL=http://172.29.64.1:1080/cgi-bin/welcome.pl?page=search", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.29.64.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("flights",LR_AUTO);

	lr_start_transaction("find_flight");

	web_add_auto_header("Origin", 
		"http://172.29.64.1:1080");

	lr_think_time(35);

	web_submit_data("reservations.pl", 
		"Action=http://172.29.64.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://172.29.64.1:1080/cgi-bin/reservations.pl?page=welcome", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=depart", "Value=Paris", ENDITEM, 
		"Name=departDate", "Value=08/08/2021", ENDITEM, 
		"Name=arrive", "Value=San Francisco", ENDITEM, 
		"Name=returnDate", "Value=09/13/2021", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=seatPref", "Value=Window", ENDITEM, 
		"Name=seatType", "Value=Business", ENDITEM, 
		"Name=findFlights.x", "Value=73", ENDITEM, 
		"Name=findFlights.y", "Value=7", ENDITEM, 
		"Name=.cgifields", "Value=roundtrip", ENDITEM, 
		"Name=.cgifields", "Value=seatType", ENDITEM, 
		"Name=.cgifields", "Value=seatPref", ENDITEM, 
		LAST);

	lr_end_transaction("find_flight",LR_AUTO);

	lr_think_time(18);

	lr_start_transaction("choose_flight");

	web_submit_data("reservations.pl_2", 
		"Action=http://172.29.64.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://172.29.64.1:1080/cgi-bin/reservations.pl", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=outboundFlight", "Value=460;902;08/08/2021", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=seatType", "Value=Business", ENDITEM, 
		"Name=seatPref", "Value=Window", ENDITEM, 
		"Name=reserveFlights.x", "Value=71", ENDITEM, 
		"Name=reserveFlights.y", "Value=12", ENDITEM, 
		LAST);

	lr_end_transaction("choose_flight",LR_AUTO);

	lr_start_transaction("sign_off");

	web_revert_auto_header("Origin");

	lr_think_time(19);

	web_url("SignOff Button", 
		"URL=http://172.29.64.1:1080/cgi-bin/welcome.pl?signOff=1", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.29.64.1:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("sign_off",LR_AUTO);

	return 0;
}