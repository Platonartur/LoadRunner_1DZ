Action()
{
	lr_start_transaction("01_buy_ticket");
	
	lr_start_transaction("link");

	lr_end_transaction("link",LR_AUTO);

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_cookie("MSO=SID&1622491977; DOMAIN=172.29.64.1");

	web_add_auto_header("DNT", 
		"1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

/*Correlation comment - Do not change!  Original value='{userSession}' Name ='userSession' Type ='ResponseBased'*/
//	web_reg_save_param_attrib(
//		"ParamName=userSession",
//		"TagName=input",
//		"Extract=value",
//		"Name=userSession",
//		"Type=hidden",
//		SEARCH_FILTERS,
//		"IgnoreRedirections=No",
//		"RequestUrl=*/nav.pl*",
//		LAST);
	
	
	
	web_reg_find("Text=Web Tours", LAST);
	web_reg_save_param_ex(
		"ParamName=userSession",
		"LB=name\=\"userSession\" value\=\"",
		"RB=\"\/>",
		SEARCH_FILTERS,
		"Scope=body",
		LAST);
	web_set_max_html_param_len("1024");
	
	
	web_url("welcome.pl", 
		"URL=http://172.29.64.1:1080/cgi-bin/welcome.pl?signOff=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.29.64.1:1080/WebTours/", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);
		
	

	web_add_cookie("MSO=SID&1622492018; DOMAIN=172.29.64.1");

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	lr_start_transaction("login");

	web_add_header("Origin", 
		"http://172.29.64.1:1080");
	
	
	
	
	web_reg_find("Text=Error","Fail=Found",LAST);
	web_submit_data("login.pl",
		"Action=http://172.29.64.1:1080/cgi-bin/login.pl",
		"Method=POST",
		"TargetFrame=body",
		"RecContentType=text/html",
		"Referer=http://172.29.64.1:1080/cgi-bin/nav.pl?in=home",
		"Snapshot=t4.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=userSession", "Value={userSession}", ENDITEM,
		"Name=username", "Value={login}", ENDITEM,
		"Name=password", "Value={password}", ENDITEM,
		"Name=login.x", "Value=47", ENDITEM,
		"Name=login.y", "Value=9", ENDITEM,
		"Name=JSFormSubmit", "Value=off", ENDITEM,
		LAST);
	
	
	
	
//	web_set_max_html_param_len("1024");
//	web_reg_save_param_ex(
//		"ParamName=userSession",
//		"LB=value=\"",
//		"RB=\"",
//		SEARCH_FILTERS,
//		LAST);

	lr_end_transaction("login",LR_AUTO);

	lr_think_time(10);

	lr_start_transaction("flights");
	
	web_reg_find("Text=Flight Selections", LAST);

	web_url("Search Flights Button", 
		"URL=http://172.29.64.1:1080/cgi-bin/welcome.pl?page=search", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.29.64.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_url("welcome.pl_2", 
		"URL=http://172.29.64.1:1080/cgi-bin/welcome.pl?page=search", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.29.64.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("flights",LR_AUTO);

	lr_start_transaction("find_flight");

	web_add_auto_header("Origin", 
		"http://172.29.64.1:1080");

	lr_think_time(42);
	
	
	web_reg_find("Text=Find Flight", LAST);

	web_submit_data("reservations.pl", 
		"Action=http://172.29.64.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://172.29.64.1:1080/cgi-bin/reservations.pl?page=welcome", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=depart", "Value={depart}", ENDITEM, 
		"Name=departDate", "Value={departDate}", ENDITEM, 
		"Name=arrive", "Value={arrive}", ENDITEM, 
		"Name=returnDate", "Value={returnDate}", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=seatPref", "Value={seatPref}", ENDITEM, 
		"Name=seatType", "Value={seatType}", ENDITEM, 
		"Name=findFlights.x", "Value=54", ENDITEM, 
		"Name=findFlights.y", "Value=6", ENDITEM, 
		"Name=.cgifields", "Value=roundtrip", ENDITEM, 
		"Name=.cgifields", "Value=seatType", ENDITEM, 
		"Name=.cgifields", "Value=seatPref", ENDITEM, 
		LAST);

	lr_end_transaction("find_flight",LR_AUTO);

	lr_think_time(20);

	lr_start_transaction("choose_flight");

	web_submit_data("reservations.pl_2",
		"Action=http://172.29.64.1:1080/cgi-bin/reservations.pl",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=http://172.29.64.1:1080/cgi-bin/reservations.pl",
		"Snapshot=t8.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=outboundFlight", "Value={departDate}", ENDITEM, //{departDate}
		"Name=numPassengers", "Value=1", ENDITEM,
		"Name=advanceDiscount", "Value=0", ENDITEM,
		"Name=seatType", "Value={seatType}", ENDITEM,
		"Name=seatPref", "Value={seatPref}", ENDITEM,
		"Name=reserveFlights.x", "Value=63", ENDITEM,
		"Name=reserveFlights.y", "Value=12", ENDITEM,
		LAST);

	lr_end_transaction("choose_flight",LR_AUTO);

	lr_start_transaction("payment_details");

	web_revert_auto_header("Origin");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_header("Origin", 
		"http://172.29.64.1:1080");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(29);

	web_submit_data("reservations.pl_3",
		"Action=http://172.29.64.1:1080/cgi-bin/reservations.pl",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=http://172.29.64.1:1080/cgi-bin/reservations.pl",
		"Snapshot=t9.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=firstName", "Value={firstName}", ENDITEM,
		"Name=lastName", "Value={lastName}", ENDITEM,
		"Name=address1", "Value={city}", ENDITEM,
		"Name=address2", "Value={streetaddress}", ENDITEM,
		"Name=pass1", "Value={firstName} {lastName}", ENDITEM,
		"Name=creditCard", "Value={creditcard}", ENDITEM,
		"Name=expDate", "Value={expdate}", ENDITEM,
		"Name=saveCC", "Value=on", ENDITEM,
		"Name=oldCCOption", "Value=on", ENDITEM,
		"Name=numPassengers", "Value=1", ENDITEM,
		"Name=seatType", "Value={seatType}", ENDITEM,
		"Name=seatPref", "Value={seatPref}", ENDITEM,
		"Name=outboundFlight", "Value={departDate}", ENDITEM,
		"Name=advanceDiscount", "Value=0", ENDITEM,
		"Name=returnFlight", "Value=", ENDITEM,
		"Name=JSFormSubmit", "Value=off", ENDITEM,
		"Name=buyFlights.x", "Value=60", ENDITEM,
		"Name=buyFlights.y", "Value=10", ENDITEM,
		"Name=.cgifields", "Value=saveCC", ENDITEM,
		LAST);

	lr_end_transaction("payment_details",LR_AUTO);

	lr_think_time(16);

	lr_start_transaction("sign_off");

	web_url("SignOff Button", 
		"URL=http://172.29.64.1:1080/cgi-bin/welcome.pl?signOff=1", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.29.64.1:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("sign_off",LR_AUTO);
	
	
	lr_end_transaction("01_buy_ticket",LR_AUTO);

	return 0;
	
	
}