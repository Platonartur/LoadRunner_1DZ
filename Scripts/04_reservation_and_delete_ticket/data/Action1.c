Action1()
{

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	lr_start_transaction("link");

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_cookie("MSO=SID&1622367406; DOMAIN=192.168.176.1");

	web_add_cookie("MTUserInfo=firstName&Dilan&address2&Moscow&username&jojo20&hash&112&lastName&Dilan%0A&address1&Moscow&creditCard&1020&expDate&2024%0A; DOMAIN=192.168.176.1");

	web_add_auto_header("DNT", 
		"1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("welcome.pl", 
		"URL=http://192.168.176.1:1080/cgi-bin/welcome.pl?signOff=true", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.176.1:1080/WebTours/", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("MSO=SID&1622367511; DOMAIN=192.168.176.1");

	lr_end_transaction("link",LR_AUTO);

	lr_start_transaction("login");

	web_add_header("Origin", 
		"http://192.168.176.1:1080");

	lr_think_time(17);

	web_submit_form("login.pl", 
		"Snapshot=t31.inf", 
		ITEMDATA, 
		"Name=username", "Value=jojo20", ENDITEM, 
		"Name=password", "Value=jojo", ENDITEM, 
		LAST);

	lr_end_transaction("login",LR_AUTO);

	lr_think_time(6);

	lr_start_transaction("flights");

	web_image("Search Flights Button", 
		"Alt=Search Flights Button", 
		"Snapshot=t32.inf", 
		LAST);

	lr_end_transaction("flights",LR_AUTO);

	lr_start_transaction("findflight");

	web_add_auto_header("Origin", 
		"http://192.168.176.1:1080");

	lr_think_time(23);

	web_submit_form("reservations.pl", 
		"Snapshot=t33.inf", 
		ITEMDATA, 
		"Name=depart", "Value=Paris", ENDITEM, 
		"Name=departDate", "Value=05/31/2021", ENDITEM, 
		"Name=arrive", "Value=Sydney", ENDITEM, 
		"Name=returnDate", "Value=09/08/2021", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=roundtrip", "Value=<OFF>", ENDITEM, 
		"Name=seatPref", "Value=None", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		LAST);

	lr_end_transaction("findflight",LR_AUTO);

	lr_think_time(20);

	lr_start_transaction("chooseflight");

	web_submit_form("reservations.pl_2", 
		"Snapshot=t34.inf", 
		ITEMDATA, 
		"Name=outboundFlight", "Value=482;1350;05/31/2021", ENDITEM, 
		"Name=reserveFlights.x", "Value=72", ENDITEM, 
		"Name=reserveFlights.y", "Value=11", ENDITEM, 
		LAST);

	lr_end_transaction("chooseflight",LR_AUTO);

	lr_think_time(21);

	lr_start_transaction("paymentdetails");

	web_submit_form("reservations.pl_3", 
		"Snapshot=t35.inf", 
		ITEMDATA, 
		"Name=firstName", "Value=Dilan", ENDITEM, 
		"Name=lastName", "Value=Dilan", ENDITEM, 
		"Name=address1", "Value=Moscow", ENDITEM, 
		"Name=address2", "Value=Moscow", ENDITEM, 
		"Name=pass1", "Value=Dilan Dilan", ENDITEM, 
		"Name=creditCard", "Value=1020", ENDITEM, 
		"Name=expDate", "Value=2024", ENDITEM, 
		"Name=saveCC", "Value=on", ENDITEM, 
		LAST);

	web_submit_data("reservations.pl_4", 
		"Action=http://192.168.176.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.176.1:1080/cgi-bin/reservations.pl", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=firstName", "Value=Dilan", ENDITEM, 
		"Name=lastName", "Value=Dilan", ENDITEM, 
		"Name=address1", "Value=Moscow", ENDITEM, 
		"Name=address2", "Value=Moscow", ENDITEM, 
		"Name=pass1", "Value=Dilan Dilan", ENDITEM, 
		"Name=creditCard", "Value=1020", ENDITEM, 
		"Name=expDate", "Value=2024", ENDITEM, 
		"Name=saveCC", "Value=on", ENDITEM, 
		"Name=oldCCOption", "Value=on", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		"Name=seatPref", "Value=None", ENDITEM, 
		"Name=outboundFlight", "Value=482;1350;05/31/2021", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=returnFlight", "Value=", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=buyFlights.x", "Value=74", ENDITEM, 
		"Name=buyFlights.y", "Value=2", ENDITEM, 
		"Name=.cgifields", "Value=saveCC", ENDITEM, 
		LAST);

	lr_end_transaction("paymentdetails",LR_AUTO);

	lr_start_transaction("itinerary");

	web_revert_auto_header("Origin");

	lr_think_time(21);

	web_url("welcome.pl_2", 
		"URL=http://192.168.176.1:1080/cgi-bin/welcome.pl?page=itinerary", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.176.1:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("itinerary",LR_AUTO);

	lr_start_transaction("deleteflight");

	web_add_header("Origin", 
		"http://192.168.176.1:1080");

	lr_think_time(28);

	web_submit_form("itinerary.pl", 
		"Snapshot=t38.inf", 
		ITEMDATA, 
		"Name=1", "Value=on", ENDITEM, 
		"Name=2", "Value=<OFF>", ENDITEM, 
		"Name=3", "Value=<OFF>", ENDITEM, 
		"Name=4", "Value=<OFF>", ENDITEM, 
		"Name=5", "Value=<OFF>", ENDITEM, 
		"Name=6", "Value=<OFF>", ENDITEM, 
		LAST);

	lr_end_transaction("deleteflight",LR_AUTO);

	lr_think_time(27);

	lr_start_transaction("signoff");

	web_image("SignOff Button", 
		"Alt=SignOff Button", 
		"Snapshot=t39.inf", 
		LAST);

	web_image("SignOff Button_2", 
		"Alt=SignOff Button", 
		"Snapshot=t40.inf", 
		LAST);

	lr_end_transaction("signoff",LR_AUTO);

	return 0;
}