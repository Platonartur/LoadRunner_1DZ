Action()
{

	lr_start_transaction("reservation_one_ticket");
	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/
	lr_start_transaction("link");

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_cookie("MSO=SID&1622367015; DOMAIN=172.29.64.1");

	web_add_auto_header("DNT", 
		"1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");
	
	
	//input type=\"hidden\" name=\"userSession\" value=\"131418.52636695zHfQitAptftAffQpAtcH\"/>

	//web_reg_save_param("userSession","LB=input type=\"hidden\" name=\"userSession\" value=\"","RB=\"/>",LAST);
	
		
	
	web_url("welcome.pl", 
		"URL=http://172.29.64.1:1080/WebTours/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("MSO=SID&1622367056; DOMAIN=172.29.64.1");

	lr_end_transaction("link",LR_AUTO);

	lr_start_transaction("login");

	web_add_header("Origin", 
		"http://172.29.64.1:1080");

	lr_think_time(10);
	
	
	
//	web_set_max_html_param_len("1024");
	// <input type = "hidden" name = "userSession" value = "{userSession}" />

//	web_reg_save_param_ex(
//		"ParamName=userSession",
//		"LB=name = \"userSession\" value = \"",
//		"RB=\"",
//		SEARCH_FILTERS,
//		LAST);
//	web_set_max_html_param_len("1024");
	
	
	
	
	
	
	
	
	
	
	
	web_reg_find("Text=Error","Fail=Found",LAST);
	web_submit_data("login.pl", 
		"Action=http://172.29.64.1:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"TargetFrame=body", 
		"RecContentType=text/html", 
		"Referer=http://172.29.64.1:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userSession", "Value={userSession}", ENDITEM, //{userSession}
		"Name=username", "Value={login}", ENDITEM, 
		"Name=password", "Value={password}", ENDITEM, 
		"Name=login.x", "Value=62", ENDITEM, 
		"Name=login.y", "Value=6", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM,
		LAST);


	lr_end_transaction("login",LR_AUTO);

	lr_start_transaction("Flights");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(16);
	
	
	web_reg_find("Text=Flight Selections", LAST);

/*Correlation comment - Do not change!  Original value='06/01/2021' Name ='departDate' Type ='RecordReplay'*/
	web_reg_save_param_attrib(
		"ParamName=departDate",
		"TagName=input",
		"Extract=value",
		"Name=returnDate",
		"Type=text",
		SEARCH_FILTERS,
		"RequestUrl=*/reservations.pl*",
		LAST);
		

	web_url("Search Flights Button", 
		"URL=http://172.29.64.1:1080/cgi-bin/welcome.pl?page=search", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.29.64.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Flights",LR_AUTO);

	lr_start_transaction("findflight");

	web_add_auto_header("Origin", 
		"http://172.29.64.1:1080");

	lr_think_time(19);
	
	web_reg_find("Text=Find Flight", LAST);

	web_submit_data("reservations.pl",
		"Action=http://172.29.64.1:1080/cgi-bin/reservations.pl",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=http://172.29.64.1:1080/cgi-bin/reservations.pl?page=welcome",
		"Snapshot=t20.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=advanceDiscount", "Value=0", ENDITEM,
		"Name=depart", "Value={depart}", ENDITEM,
		"Name=departDate", "Value={departDate}", ENDITEM,
		"Name=arrive", "Value={arrive}", ENDITEM,
		"Name=returnDate", "Value={returnDate}", ENDITEM,
		"Name=numPassengers", "Value=1", ENDITEM,
		"Name=seatPref", "Value={seatType}", ENDITEM,
		"Name=seatType", "Value={seatPref}", ENDITEM,
		"Name=findFlights.x", "Value=7", ENDITEM,
		"Name=findFlights.y", "Value=2", ENDITEM,
		"Name=.cgifields", "Value=roundtrip", ENDITEM,
		"Name=.cgifields", "Value={seatType}", ENDITEM,
		"Name=.cgifields", "Value={seatPref}", ENDITEM,
		LAST);

	lr_end_transaction("findflight",LR_AUTO);

	lr_think_time(20);

	lr_start_transaction("chooseflight");

/*Correlation comment - Do not change!  Original value='1020' Name ='creditCard' Type ='ResponseBased'*/
//web_reg_save_param_attrib(
//		"ParamName=creditCard",
//		"TagName=input",
//		"Extract=value",
//		"Name=creditCard",
//		"Type=text",
//		SEARCH_FILTERS,
//		"IgnoreRedirections=No",
//		LAST);
	
//	web_reg_save_param("outboundFlight",
//		"LB=name=\"outboundFlight\" value=\"",
//		"RB=\"",
//		LAST);
	
	

	web_submit_data("reservations.pl_2", 
		"Action=http://172.29.64.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://172.29.64.1:1080/cgi-bin/reservations.pl", 
		"Snapshot=t21.inf", 
		"Mode=HTML",
		ITEMDATA,
		"Name=outboundFlight", "Value={departDate}", ENDITEM, //name="outboundFlight" value="{departDate}"name="outboundFlight" value="{departDate}"
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=seatType", "Value={seatType}", ENDITEM, 
		"Name=seatPref", "Value={seatPref}", ENDITEM, 
		"Name=reserveFlights.x", "Value=38", ENDITEM, 
		"Name=reserveFlights.y", "Value=12", ENDITEM, 
		LAST);

	lr_end_transaction("chooseflight",LR_AUTO);

	lr_start_transaction("paymentdetails");

	web_revert_auto_header("Origin");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_header("Origin", 
		"http://172.29.64.1:1080");

	lr_think_time(15);
	
//	web_reg_save_param("outboundFlight",
//		"LB=name=\"outboundFlight\" value=\"",
//		"RB=\"",
//		LAST);

	web_submit_data("reservations.pl_3",
		"Action=http://172.29.64.1:1080/cgi-bin/reservations.pl",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=http://172.29.64.1:1080/cgi-bin/reservations.pl",
		"Snapshot=t22.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=firstName", "Value={firstName}", ENDITEM,
		"Name=lastName", "Value={lastName}", ENDITEM,
		"Name=address1", "Value={city}", ENDITEM,
		"Name=address2", "Value={city}", ENDITEM,
		"Name=pass1", "Value={firstName} {lastName}", ENDITEM,
		"Name=creditCard", "Value={creditcard}", ENDITEM,
		"Name=expDate", "Value={expdate}", ENDITEM,
		"Name=saveCC", "Value=on", ENDITEM,
		"Name=oldCCOption", "Value=on", ENDITEM,
		"Name=numPassengers", "Value=1", ENDITEM,
		"Name=seatType", "Value={seatType}", ENDITEM,
		"Name=seatPref", "Value={seatPref}", ENDITEM,
		"Name=outboundFlight", "Value={departDate}", ENDITEM,//{departDate}
		"Name=advanceDiscount", "Value=0", ENDITEM,
		"Name=returnFlight", "Value=", ENDITEM,
		"Name=JSFormSubmit", "Value=off", ENDITEM,
		"Name=buyFlights.x", "Value=64", ENDITEM,
		"Name=buyFlights.y", "Value=1", ENDITEM,
		"Name=.cgifields", "Value=saveCC", ENDITEM,
		LAST);

	lr_end_transaction("paymentdetails",LR_AUTO);

	lr_start_transaction("itinerary");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(15);
	
	web_reg_save_param("flight_ID_origin",
	        "LB=name=\"flightID\" value=\"",
			"RB=\"",
			"Ord=ALL", LAST);
	web_set_max_html_param_len("9999");
	

	web_url("Itinerary Button", 
		"URL=http://172.29.64.1:1080/cgi-bin/welcome.pl?page=itinerary", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.29.64.1:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		LAST);
	

	lr_end_transaction("itinerary",LR_AUTO);

	lr_start_transaction("delete_flight");

	web_add_header("Origin", 
		"http://172.29.64.1:1080");

	lr_think_time(30);

//	web_submit_data("itinerary.pl", 
//		"Action=http://172.29.64.1:1080/cgi-bin/itinerary.pl", 
//		"Method=POST", 
//		"TargetFrame=", 
//		"RecContentType=text/html", 
//		"Referer=http://172.29.64.1:1080/cgi-bin/itinerary.pl", 
//		"Snapshot=t24.inf", 
//		"Mode=HTML", 
//		ITEMDATA, 
//		"Name=1", "Value=on", ENDITEM, 
//		"Name=flightID", "Value=377863016-7803-DD", ENDITEM, 
//		"Name=flightID", "Value=37790784-1552-DD", ENDITEM, 
//		"Name=flightID", "Value=37784592-2384-DD", ENDITEM, 
//		"Name=flightID", "Value=0-30-DD", ENDITEM, 
//		"Name=flightID", "Value=37803062-3899-DD", ENDITEM, 
//		"Name=removeFlights.x", "Value=77", ENDITEM, 
//		"Name=removeFlights.y", "Value=10", ENDITEM, 
//		"Name=.cgifields", "Value=4", ENDITEM, 
//		"Name=.cgifields", "Value=1", ENDITEM, 
//		"Name=.cgifields", "Value=3", ENDITEM, 
//		"Name=.cgifields", "Value=2", ENDITEM, 
//		"Name=.cgifields", "Value=5", ENDITEM, 
//		LAST);
	
//	web_submit_form("itinerary.pl", 
//		"Snapshot=t38.inf", 
//		ITEMDATA, 
//		"Name=1", "Value=on", ENDITEM, 
//		"Name=2", "Value=<OFF>", ENDITEM, 
//		"Name=3", "Value=<OFF>", ENDITEM, 
//		"Name=4", "Value=<OFF>", ENDITEM, 
//		"Name=5", "Value=<OFF>", ENDITEM, 
//		"Name=6", "Value=<OFF>", ENDITEM, 
//		LAST);
	
	
//	web_submit_form("itinerary.pl", 
//		"Snapshot=t38.inf", 
//		ITEMDATA, 
//		"Name=1", "Value=on", ENDITEM, 
//		LAST);
	
	
	web_reg_save_param("flight_ID",
	        "LB=name=\"flightID\" value=\"",
			"RB=\"",
			"Ord=ALL", LAST);
	web_set_max_html_param_len("9999");
	
	
	
	web_submit_form("itinerary.pl", 
		"Snapshot=t24.inf", 
		ITEMDATA, 
		"Name=1", "Value=on", ENDITEM, 
		LAST);

	lr_end_transaction("delete_flight",LR_AUTO);
	
	lr_message("До удаления - %s", lr_eval_string("{flight_ID_origin}"));
	lr_message("После удаления - %s", lr_eval_string("{flight_ID}"));

	lr_think_time(16);

	lr_start_transaction("signoff");

	web_url("SignOff Button", 
		"URL=http://172.29.64.1:1080/cgi-bin/welcome.pl?signOff=1", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.29.64.1:1080/cgi-bin/nav.pl?page=menu&in=itinerary", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("signoff",LR_AUTO);
	
	
	lr_end_transaction("reservation_one_ticket",LR_AUTO);
	
	return 0;
}