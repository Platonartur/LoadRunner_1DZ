Action()
{

	lr_start_transaction("001Buy_Ticket");
	
	lr_start_transaction("link");
	
	web_set_sockets_option("SSL_VERSION", "AUTO");

 	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

 	web_add_auto_header("Sec-Fetch-Site", 
  		"none");

 	web_add_auto_header("Sec-Fetch-Dest", 
  		"document");

 	web_add_auto_header("Sec-Fetch-Mode", 
  		"navigate");

 	web_add_auto_header("Sec-Fetch-User", 
  		"?1");

 	web_add_auto_header("Upgrade-Insecure-Requests", 
  		"1");

/*Correlation comment: Automatic rules - Do not change!  
Original value='131463.624301337zHzcVzApVHftAfHcpQzVAf' 
Name ='userSession' 
Type ='Rule' 
AppName ='WebTours' 
RuleName ='userSession'*/
 

		web_reg_save_param_attrib(
  			"ParamName=userSession",
  			"TagName=input",
  			"Extract=value",
  			"Name=userSession",
  			"Type=hidden",
  			SEARCH_FILTERS,
  	        "RequestUrl=*/nav.pl*",
  			LAST);
		
		web_reg_find("Text=Web Tours Navigation Bar",LAST);

		web_url("nav.pl",
       		"URL=http://172.23.64.1:1080/cgi-bin/nav.pl?in=home",
       		"Resource=0",
       		"RecContentType=text/html",
       		"Referer=http://172.23.64.1:1080/cgi-bin/welcome.pl?SignOff=true",
       		"Snapshot=t6.inf",
       		"Mode=HTTP", 
        	LAST);

 		web_revert_auto_header("Sec-Fetch-User");

 		web_add_auto_header("Sec-Fetch-Dest", 
  			"frame");

 		web_revert_auto_header("Upgrade-Insecure-Requests");
 
 		lr_end_transaction("link",LR_AUTO);
 
 		lr_start_transaction("login");

 		web_add_header("Origin", 
  			"http://172.23.64.1:1080");

 		web_add_auto_header("Sec-Fetch-Site", 
  			"same-origin");
 
 
 		web_reg_find("Text=User password was correct",LAST);

 		web_submit_data("login.pl",
  			"Action=http://172.23.64.1:1080/cgi-bin/login.pl",
  			"Method=POST",
  			"TargetFrame=body",
  			"RecContentType=text/html",
  			"Referer=http://172.23.64.1:1080/cgi-bin/nav.pl?in=home",
  			"Snapshot=t6.inf",
  			"Mode=HTML",
  			ITEMDATA,
  			"Name=userSession", "Value={userSession}", ENDITEM,
  			"Name=username", "Value={login}", ENDITEM,
  			"Name=password", "Value={password}", ENDITEM,
  			"Name=login.x", "Value=17", ENDITEM,
  			"Name=login.y", "Value=14", ENDITEM,
  			"Name=JSFormSubmit", "Value=off", ENDITEM,
  			LAST);

	lr_end_transaction("login",LR_AUTO);

	lr_start_transaction("flights");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(12);
	
	
	
	web_reg_save_param_attrib(
	"ParamName=departDate",
	"TagName=input",
	"Extract=value",
	"Name=departDate",
	"Type=text",
	SEARCH_FILTERS,
	"RequestUrl=*/reservations.pl*", 
	LAST);
	
	web_reg_save_param_attrib(
	"ParamName=returnDate",
	"TagName=input",
	"Extract=value",
	"Name=returnDate",
	"Type=text",
	SEARCH_FILTERS,
	"RequestUrl=*/reservations.pl*", 
	LAST);
	
	
	
	web_reg_find("Text=Web Tours", LAST);

	web_url("Search Flights Button", 
		"URL=http://172.23.64.1:1080/cgi-bin/welcome.pl?page=search", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.23.64.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);


	lr_end_transaction("flights",LR_AUTO);

	lr_start_transaction("find_flight");

	web_add_auto_header("Origin", 
		"http://172.23.64.1:1080");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(12);

/*Correlation comment - Do not change!  Original value='500;398;{departDate}' Name ='outboundFlight' Type ='ResponseBased'*/
	web_reg_save_param_attrib(
		"ParamName=outboundFlight",
		"TagName=input",
		"Extract=value",
		"Name=outboundFlight",
		"Type=radio",
		SEARCH_FILTERS,
		"IgnoreRedirections=No",
		LAST);
		
	web_reg_find("Text=Flight Selections",LAST);

	web_submit_data("reservations.pl", 
		"Action=http://172.23.64.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://172.23.64.1:1080/cgi-bin/reservations.pl?page=welcome", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=depart", "Value={depart}", ENDITEM, 
		"Name=departDate", "Value={departDate}", ENDITEM, 
		"Name=arrive", "Value={arrive}", ENDITEM, 
		"Name=returnDate", "Value={returnDate}", ENDITEM, 
		"Name=numPassengers", "Value=4", ENDITEM, 
		"Name=seatPref", "Value={seatPref}", ENDITEM, 
		"Name=seatType", "Value={seatType}", ENDITEM, 
		"Name=findFlights.x", "Value=38", ENDITEM, 
		"Name=findFlights.y", "Value=11", ENDITEM, 
		"Name=.cgifields", "Value=roundtrip", ENDITEM, 
		"Name=.cgifields", "Value=seatType", ENDITEM, 
		"Name=.cgifields", "Value=seatPref", ENDITEM, 	
		LAST);

	lr_end_transaction("find_flight",LR_AUTO);

	lr_think_time(17);

	lr_start_transaction("choose_flight");
	
	web_reg_find("Text=Flight Reservation", LAST);

	web_submit_data("reservations.pl_2",
		"Action=http://172.23.64.1:1080/cgi-bin/reservations.pl",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=http://172.23.64.1:1080/cgi-bin/reservations.pl",
		"Snapshot=t12.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=outboundFlight", "Value={outboundFlight}", ENDITEM,
		"Name=numPassengers", "Value=4", ENDITEM,
		"Name=advanceDiscount", "Value=0", ENDITEM,
		"Name=seatType", "Value={seatType}", ENDITEM,
		"Name=seatPref", "Value={seatPref}", ENDITEM,
		"Name=reserveFlights.x", "Value=72", ENDITEM,
		"Name=reserveFlights.y", "Value=11", ENDITEM,
		LAST);

	lr_end_transaction("choose_flight",LR_AUTO);

	lr_start_transaction("payment_details");

	web_revert_auto_header("Origin");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_header("Origin", 
		"http://172.23.64.1:1080");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(57);
	
	web_reg_find("Text=Reservation Made!", LAST);

	web_submit_data("reservations.pl_3",
		"Action=http://172.23.64.1:1080/cgi-bin/reservations.pl",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=http://172.23.64.1:1080/cgi-bin/reservations.pl",
		"Snapshot=t13.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=firstName", "Value={firstName}", ENDITEM,
		"Name=lastName", "Value={lastName}", ENDITEM,
		"Name=address1", "Value={city}", ENDITEM,
		"Name=address2", "Value={streetaddress}", ENDITEM,
		"Name=pass1", "Value={firstName} {lastName}", ENDITEM,//
		"Name=pass2", "Value={firstName} {lastName}", ENDITEM,//Joe Joevich
		"Name=pass3", "Value={firstName} {lastName}", ENDITEM,//Albert Abertovich
		"Name=pass4", "Value={firstName} {lastName}", ENDITEM,//Nikola Nikolavich
		"Name=creditCard", "Value=", ENDITEM,
		"Name=expDate", "Value=", ENDITEM,
		"Name=oldCCOption", "Value=", ENDITEM,
		"Name=numPassengers", "Value=4", ENDITEM,
		"Name=seatType", "Value={seatType}", ENDITEM,
		"Name=seatPref", "Value={seatPref}", ENDITEM,
		"Name=outboundFlight", "Value={outboundFlight}", ENDITEM,
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
		"URL=http://172.23.64.1:1080/cgi-bin/welcome.pl?signOff=1", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.23.64.1:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("sign_off",LR_AUTO);
	
	lr_end_transaction("001Buy_Ticket",LR_AUTO);

	return 0;
}