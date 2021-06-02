Action()
{

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_cookie("MSO=SID&1622546062; DOMAIN=172.29.64.1");

	web_add_cookie("MTUserInfo=firstName&Dilan&address2&Moscow&username&jojo20&hash&112&lastName&Dilan%0A&address1&Moscow&creditCard&1020&expDate&2024%0A; DOMAIN=172.29.64.1");

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
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("MSO=SID&1622549678; DOMAIN=172.29.64.1");

	lr_start_transaction("login");

	web_add_header("Origin", 
		"http://172.29.64.1:1080");

	lr_think_time(17);

	web_submit_data("login.pl", 
		"Action=http://172.29.64.1:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"TargetFrame=body", 
		"RecContentType=text/html", 
		"Referer=http://172.29.64.1:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userSession", "Value=131433.752774403zHzAzcDpzfiDDDDDtAfzDpHtVQf", ENDITEM, 
		"Name=username", "Value=jojo21", ENDITEM, 
		"Name=password", "Value=jojo", ENDITEM, 
		"Name=login.x", "Value=61", ENDITEM, 
		"Name=login.y", "Value=12", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		LAST);

	lr_end_transaction("login",LR_AUTO);

	lr_think_time(10);

	lr_start_transaction("flights");

	web_url("Search Flights Button", 
		"URL=http://172.29.64.1:1080/cgi-bin/welcome.pl?page=search", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.29.64.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_url("welcome.pl_2", 
		"URL=http://172.29.64.1:1080/cgi-bin/welcome.pl?page=search", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.29.64.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("flights",LR_AUTO);

	lr_start_transaction("find_flight");

	web_add_auto_header("Origin", 
		"http://172.29.64.1:1080");

	lr_think_time(51);

	web_submit_data("reservations.pl", 
		"Action=http://172.29.64.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://172.29.64.1:1080/cgi-bin/reservations.pl?page=welcome", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=depart", "Value=Paris", ENDITEM, 
		"Name=departDate", "Value=06/10/2021", ENDITEM, 
		"Name=arrive", "Value=Seattle", ENDITEM, 
		"Name=returnDate", "Value=06/28/2021", ENDITEM, 
		"Name=numPassengers", "Value=3", ENDITEM, 
		"Name=seatPref", "Value=Window", ENDITEM, 
		"Name=seatType", "Value=Business", ENDITEM, 
		"Name=findFlights.x", "Value=44", ENDITEM, 
		"Name=findFlights.y", "Value=14", ENDITEM, 
		"Name=.cgifields", "Value=roundtrip", ENDITEM, 
		"Name=.cgifields", "Value=seatType", ENDITEM, 
		"Name=.cgifields", "Value=seatPref", ENDITEM, 
		LAST);

	lr_end_transaction("find_flight",LR_AUTO);

	lr_think_time(12);

	lr_start_transaction("choose_flight");

	web_submit_data("reservations.pl_2", 
		"Action=http://172.29.64.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://172.29.64.1:1080/cgi-bin/reservations.pl", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=outboundFlight", "Value=470;867;06/10/2021", ENDITEM, 
		"Name=numPassengers", "Value=3", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=seatType", "Value=Business", ENDITEM, 
		"Name=seatPref", "Value=Window", ENDITEM, 
		"Name=reserveFlights.x", "Value=72", ENDITEM, 
		"Name=reserveFlights.y", "Value=15", ENDITEM, 
		LAST);

	lr_end_transaction("choose_flight",LR_AUTO);

	lr_start_transaction("payment_details");

	web_revert_auto_header("Origin");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_header("Origin", 
		"http://172.29.64.1:1080");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(5);

	web_submit_data("reservations.pl_3", 
		"Action=http://172.29.64.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://172.29.64.1:1080/cgi-bin/reservations.pl", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=firstName", "Value=Bob", ENDITEM, 
		"Name=lastName", "Value=Bobovich", ENDITEM, 
		"Name=address1", "Value=Moscow", ENDITEM, 
		"Name=address2", "Value=Moscow", ENDITEM, 
		"Name=pass1", "Value=Bob Bobovich", ENDITEM, 
		"Name=pass2", "Value=Andreas Andreasovich", ENDITEM, 
		"Name=pass3", "Value=Joe Joevich", ENDITEM, 
		"Name=creditCard", "Value=1021", ENDITEM, 
		"Name=expDate", "Value=2024", ENDITEM, 
		"Name=saveCC", "Value=on", ENDITEM, 
		"Name=oldCCOption", "Value=on", ENDITEM, 
		"Name=numPassengers", "Value=3", ENDITEM, 
		"Name=seatType", "Value=Business", ENDITEM, 
		"Name=seatPref", "Value=Window", ENDITEM, 
		"Name=outboundFlight", "Value=470;867;06/10/2021", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=returnFlight", "Value=", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=buyFlights.x", "Value=77", ENDITEM, 
		"Name=buyFlights.y", "Value=10", ENDITEM, 
		"Name=.cgifields", "Value=saveCC", ENDITEM, 
		LAST);

	lr_end_transaction("payment_details",LR_AUTO);

	lr_think_time(7);

	lr_start_transaction("sign_off");

	web_url("SignOff Button", 
		"URL=http://172.29.64.1:1080/cgi-bin/welcome.pl?signOff=1", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.29.64.1:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("sign_off",LR_AUTO);

	return 0;
}