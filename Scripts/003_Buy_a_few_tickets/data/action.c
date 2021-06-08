Action()
{

	web_add_cookie("MSO=SID&1623095036; DOMAIN=172.24.48.1");

	web_add_cookie("MTUserInfo=firstName&Mark&address2&Moscow&username&jojo28&hash&120&lastName&Markovich%0A&address1&Moscow&creditCard&&expDate&%0A; DOMAIN=172.24.48.1");

	web_add_auto_header("DNT", 
		"1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("WebTours", 
		"URL=http://172.24.48.1:1080/WebTours/", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_url("header.html", 
		"URL=http://172.24.48.1:1080/WebTours/header.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=http://172.24.48.1:1080/WebTours/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_concurrent_start(NULL);

	web_url("hp_logo.png", 
		"URL=http://172.24.48.1:1080/WebTours/images/hp_logo.png", 
		"TargetFrame=", 
		"Resource=1", 
		"Referer=http://172.24.48.1:1080/WebTours/header.html", 
		"Snapshot=t3.inf", 
		LAST);

	web_url("webtours.png", 
		"URL=http://172.24.48.1:1080/WebTours/images/webtours.png", 
		"TargetFrame=", 
		"Resource=1", 
		"Referer=http://172.24.48.1:1080/WebTours/header.html", 
		"Snapshot=t4.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("welcome.pl", 
		"URL=http://172.24.48.1:1080/cgi-bin/welcome.pl?signOff=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.24.48.1:1080/WebTours/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("MSO=SID&1623134975; DOMAIN=172.24.48.1");

	web_set_sockets_option("SSL_VERSION", "AUTO");

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	lr_start_transaction("login");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_header("Origin", 
		"http://172.24.48.1:1080");

	lr_think_time(6);

	web_submit_data("login.pl", 
		"Action=http://172.24.48.1:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"TargetFrame=body", 
		"RecContentType=text/html", 
		"Referer=http://172.24.48.1:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userSession", "Value=131481.164439044zHzDAzcpDQfiDDDDtAfHipDHtDHf", ENDITEM, 
		"Name=username", "Value=jojo28", ENDITEM, 
		"Name=password", "Value=jojo", ENDITEM, 
		"Name=login.x", "Value=39", ENDITEM, 
		"Name=login.y", "Value=11", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		LAST);

	lr_end_transaction("login",LR_AUTO);

	lr_start_transaction("flights");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(12);

	web_url("Search Flights Button", 
		"URL=http://172.24.48.1:1080/cgi-bin/welcome.pl?page=search", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.24.48.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	web_url("welcome.pl_2", 
		"URL=http://172.24.48.1:1080/cgi-bin/welcome.pl?page=search", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.24.48.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	web_url("welcome.pl_3", 
		"URL=http://172.24.48.1:1080/cgi-bin/welcome.pl?page=search", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.24.48.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_url("welcome.pl_4", 
		"URL=http://172.24.48.1:1080/cgi-bin/welcome.pl?page=search", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.24.48.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("flights",LR_AUTO);

	lr_start_transaction("find_flight");

	web_add_auto_header("Origin", 
		"http://172.24.48.1:1080");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(12);

	web_submit_data("reservations.pl", 
		"Action=http://172.24.48.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://172.24.48.1:1080/cgi-bin/reservations.pl?page=welcome", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=depart", "Value=Portland", ENDITEM, 
		"Name=departDate", "Value=06/19/2021", ENDITEM, 
		"Name=arrive", "Value=Denver", ENDITEM, 
		"Name=returnDate", "Value=06/25/2021", ENDITEM, 
		"Name=numPassengers", "Value=4", ENDITEM, 
		"Name=seatPref", "Value=Window", ENDITEM, 
		"Name=seatType", "Value=Business", ENDITEM, 
		"Name=findFlights.x", "Value=38", ENDITEM, 
		"Name=findFlights.y", "Value=11", ENDITEM, 
		"Name=.cgifields", "Value=roundtrip", ENDITEM, 
		"Name=.cgifields", "Value=seatType", ENDITEM, 
		"Name=.cgifields", "Value=seatPref", ENDITEM, 
		LAST);

	lr_end_transaction("find_flight",LR_AUTO);

	lr_think_time(17);

	lr_start_transaction("choose_flight");

	web_submit_data("reservations.pl_2", 
		"Action=http://172.24.48.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://172.24.48.1:1080/cgi-bin/reservations.pl", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=outboundFlight", "Value=500;398;06/19/2021", ENDITEM, 
		"Name=numPassengers", "Value=4", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=seatType", "Value=Business", ENDITEM, 
		"Name=seatPref", "Value=Window", ENDITEM, 
		"Name=reserveFlights.x", "Value=72", ENDITEM, 
		"Name=reserveFlights.y", "Value=11", ENDITEM, 
		LAST);

	lr_end_transaction("choose_flight",LR_AUTO);

	lr_start_transaction("payment_details");

	web_revert_auto_header("Origin");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_header("Origin", 
		"http://172.24.48.1:1080");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(57);

	web_submit_data("reservations.pl_3", 
		"Action=http://172.24.48.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://172.24.48.1:1080/cgi-bin/reservations.pl", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=firstName", "Value=Mark", ENDITEM, 
		"Name=lastName", "Value=Markovich", ENDITEM, 
		"Name=address1", "Value=Moscow", ENDITEM, 
		"Name=address2", "Value=Moscow", ENDITEM, 
		"Name=pass1", "Value=Mark Markovich", ENDITEM, 
		"Name=pass2", "Value=Joe Joevich", ENDITEM, 
		"Name=pass3", "Value=Albert Albertovich", ENDITEM, 
		"Name=pass4", "Value=Nikola Nikolavich", ENDITEM, 
		"Name=creditCard", "Value=", ENDITEM, 
		"Name=expDate", "Value=", ENDITEM, 
		"Name=oldCCOption", "Value=", ENDITEM, 
		"Name=numPassengers", "Value=4", ENDITEM, 
		"Name=seatType", "Value=Business", ENDITEM, 
		"Name=seatPref", "Value=Window", ENDITEM, 
		"Name=outboundFlight", "Value=500;398;06/19/2021", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=returnFlight", "Value=", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=buyFlights.x", "Value=59", ENDITEM, 
		"Name=buyFlights.y", "Value=12", ENDITEM, 
		"Name=.cgifields", "Value=saveCC", ENDITEM, 
		LAST);

	lr_end_transaction("payment_details",LR_AUTO);

	lr_think_time(10);

	lr_start_transaction("sign_off");

	web_url("SignOff Button", 
		"URL=http://172.24.48.1:1080/cgi-bin/welcome.pl?signOff=1", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.24.48.1:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("sign_off",LR_AUTO);

	return 0;
}