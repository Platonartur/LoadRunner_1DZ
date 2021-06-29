Action()
{
	int flight_count_before = 0;
	int flight_count_after = 0;
	lr_start_transaction("004_Delete_some_flights");
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
       		"URL=http://172.24.128.1:1080/cgi-bin/nav.pl?in=home",
       		"Resource=0",
       		"RecContentType=text/html",
       		"Referer=http://172.24.128.1:1080/cgi-bin/welcome.pl?SignOff=true",
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
  			"http://172.24.128.1:1080");

 		web_add_auto_header("Sec-Fetch-Site", 
  			"same-origin");
 
 
 		web_reg_find("Text=User password was correct",LAST);

 		web_submit_data("login.pl",
  			"Action=http://172.24.128.1:1080/cgi-bin/login.pl",
  			"Method=POST",
  			"TargetFrame=body",
  			"RecContentType=text/html",
  			"Referer=http://172.24.128.1:1080/cgi-bin/nav.pl?in=home",
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

	lr_think_time(6);

	lr_start_transaction("Itinerary");
	
	web_reg_find("Text=Web Tours",LAST);

	web_reg_save_param("flight_ID_origin",
	                  "LB=name=\"flightID\" value=\"",
	                  "RB=-", 
	                  "Ord=ALL", 
	                  LAST);

	web_url("Itinerary Button", 
		"URL=http://172.24.128.1:1080/cgi-bin/welcome.pl?page=itinerary", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.24.128.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Itinerary",LR_AUTO);
	
	web_reg_save_param("flight_ID",
	                  "LB=name=\"flightID\" value=\"",
	                  "RB=-", 
	                  "Ord=ALL", 
	                  LAST);
	
	

	lr_start_transaction("Delete_a_few_flights");

	web_add_header("Origin", 
		"http://172.24.128.1:1080");

	lr_think_time(54);
	
	
	
	flight_count_before= atoi(lr_eval_string("{flight_ID_origin_count}"));
	flight_count_after= atoi(lr_eval_string("{flight_ID_count}"));
	
	
	
	
	
	if(flight_count_before > 5){
		if(flight_count_before > flight_count_after)
		{
			web_submit_form("itinerary.pl", 
			"Snapshot=t10.inf", 
			ITEMDATA, 
			"Name=2", "Value=on", ENDITEM, 
			"Name=3", "Value=on", ENDITEM, 		
			"Name=5", "Value=on", ENDITEM, 	
			"Name=removeFlights.x", "Value=87", ENDITEM, 
			"Name=removeFlights.y", "Value=6", ENDITEM, 		
			LAST);
			lr_message("Успешное завершение транзакции");
			lr_end_transaction("Delete_a_few_flights",LR_AUTO);
		}
		else
		{
			lr_error_message("Не успешное завершение транзакции");
			lr_end_transaction("Delete_a_few_flights", LR_FAIL);
		}
	}
	else
	{
		lr_error_message("Не успешное завершение транзакции");
		lr_end_transaction("Delete_a_few_flights", LR_FAIL);
	}

//	lr_end_transaction("Delete_a_few_flights", LR_AUTO);
	
	lr_end_transaction("004_Delete_some_flights",LR_AUTO);

	return 0;
}