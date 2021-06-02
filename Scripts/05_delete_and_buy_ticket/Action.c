Action()
{

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_cookie("1P_JAR=2021-05-31-20; DOMAIN=www.gstatic.com");

	web_add_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\", \"Google Chrome\";v=\"90\"");

	web_add_header("DNT", 
		"1");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_add_header("X-Client-Data", 
		"CJG2yQEIpbbJAQjBtskBCKmdygEI+MfKAQigoMsBCMCgywEI3fLLAQ==");

	web_add_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"style");

	web_url("rs=AA2YrTuycRpiJNmLgvv5LqzkN8lLIpstcg", 
		"URL=https://www.gstatic.com/og/_/ss/k=og.qtm.8ruV2XCWgbY.L.W.O/m=qdid,qmd,qcwid/excm=qaaw,qabr,qadd,qaid,qalo,qebr,qein,qhaw,qhbr,qhch,qhga,qhid,qhin,qhlo,qhmn,qhpc,qhpr,qhsf,qhtt/d=1/ed=1/ct=zgms/rs=AA2YrTuycRpiJNmLgvv5LqzkN8lLIpstcg", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=", 
		"Snapshot=t1.inf", 
		LAST);

	web_add_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\", \"Google Chrome\";v=\"90\"");

	web_add_header("DNT", 
		"1");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_add_header("X-Client-Data", 
		"CJG2yQEIpbbJAQjBtskBCKmdygEI+MfKAQigoMsBCMCgywEI3fLLAQ==");

	web_add_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("rs=AA2YrTupCD1yahFrlnFpCV-p3YR6ik2eHg", 
		"URL=https://www.gstatic.com/og/_/js/k=og.qtm.en_US.Hro-376IUQs.O/rt=j/m=qgl,q_dnp,qdid,qmd,qcwid,qmutsd,qbd,qapid,qald/exm=qaaw,qabr,qadd,qaid,qalo,qebr,qein,qhaw,qhbr,qhch,qhga,qhid,qhin,qhlo,qhmn,qhpc,qhpr,qhsf,qhtt/d=1/ed=1/rs=AA2YrTupCD1yahFrlnFpCV-p3YR6ik2eHg", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=", 
		"Snapshot=t2.inf", 
		LAST);

	web_add_cookie("MSO=SID&1622625778; DOMAIN=172.29.64.1");

	web_add_cookie("MTUserInfo=firstName&Bob&address2&Moscow&username&jojo21&hash&113&lastName&Bobovich%0A&address1&Moscow&creditCard&&expDate&%0A; DOMAIN=172.29.64.1");

	web_add_auto_header("DNT", 
		"1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("WebTours", 
		"URL=http://172.29.64.1:1080/WebTours/", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_url("header.html", 
		"URL=http://172.29.64.1:1080/WebTours/header.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=http://172.29.64.1:1080/WebTours/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_concurrent_start(NULL);

	web_url("hp_logo.png", 
		"URL=http://172.29.64.1:1080/WebTours/images/hp_logo.png", 
		"TargetFrame=", 
		"Resource=1", 
		"Referer=http://172.29.64.1:1080/WebTours/header.html", 
		"Snapshot=t5.inf", 
		LAST);

	web_url("webtours.png", 
		"URL=http://172.29.64.1:1080/WebTours/images/webtours.png", 
		"TargetFrame=", 
		"Resource=1", 
		"Referer=http://172.29.64.1:1080/WebTours/header.html", 
		"Snapshot=t6.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

/*Correlation comment - Do not change!  Original value='131442.433616849zHzVAHApVHQVzzzHtAfzzptcVAHf' Name ='userSession' Type ='ResponseBased'*/
	web_reg_save_param_attrib(
		"ParamName=userSession",
		"TagName=input",
		"Extract=value",
		"Name=userSession",
		"Type=hidden",
		SEARCH_FILTERS,
		"IgnoreRedirections=No",
		"RequestUrl=*/nav.pl*",
		LAST);

	web_url("welcome.pl", 
		"URL=http://172.29.64.1:1080/cgi-bin/welcome.pl?signOff=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.29.64.1:1080/WebTours/", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("MSO=SID&1622656843; DOMAIN=172.29.64.1");

	lr_start_transaction("login");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_header("Origin", 
		"http://172.29.64.1:1080");
	
	
	
	
	web_reg_find("Text=Error","Fail=Found",LAST);

	web_submit_data("login.pl",
		"Action=http://172.29.64.1:1080/cgi-bin/login.pl",
		"Method=POST",
		"TargetFrame=body",
		"RecContentType=text/html",
		"Referer=http://172.29.64.1:1080/cgi-bin/nav.pl?in=home",
		"Snapshot=t8.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=userSession", "Value={userSession}", ENDITEM,
		"Name=username", "Value={login}", ENDITEM,
		"Name=password", "Value={password}", ENDITEM,
		"Name=login.x", "Value=34", ENDITEM,
		"Name=login.y", "Value=3", ENDITEM,
		"Name=JSFormSubmit", "Value=off", ENDITEM,
		LAST);

	lr_end_transaction("login",LR_AUTO);

	lr_start_transaction("itinerary");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(29);

	web_url("Itinerary Button", 
		"URL=http://172.29.64.1:1080/cgi-bin/welcome.pl?page=itinerary", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.29.64.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("itinerary",LR_AUTO);

	lr_start_transaction("delete_flight");

	web_add_header("Origin", 
		"http://172.29.64.1:1080");

	lr_think_time(16);

	web_submit_data("itinerary.pl", 
		"Action=http://172.29.64.1:1080/cgi-bin/itinerary.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://172.29.64.1:1080/cgi-bin/itinerary.pl", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=1", "Value=on", ENDITEM, 		
		"Name=removeFlights.x", "Value=75", ENDITEM, 
		"Name=removeFlights.y", "Value=2", ENDITEM, 
		"Name=.cgifields", "Value=1", ENDITEM, 	
		LAST);

	
	lr_end_transaction("delete_flight",LR_AUTO);
	
	
	
	
	
//	"Name=flightID", "Value=37827437-832-BB", ENDITEM, 
//		"Name=flightID", "Value=37818163-1570-BB", ENDITEM, 
//		"Name=flightID", "Value=378363018-23193-BB", ENDITEM, 
//		"Name=flightID", "Value=378363018-30885-BB", ENDITEM, 
//		"Name=flightID", "Value=378363018-38577-BB", ENDITEM, 
//		"Name=flightID", "Value=378363018-46269-BB", ENDITEM, 
//		"Name=flightID", "Value=378233387-53957-BB", ENDITEM, 
//		"Name=flightID", "Value=37815284-6206-BB", ENDITEM, 
//		"Name=flightID", "Value=37815284-6975-BB", ENDITEM, 
//		"Name=flightID", "Value=37815284-7744-BB", ENDITEM, 
//		"Name=flightID", "Value=37815211-8517-BB", ENDITEM, 
//		"Name=flightID", "Value=37815211-9286-BB", ENDITEM, 
//		"Name=flightID", "Value=37832254-100200-BB", ENDITEM, 
//		"Name=flightID", "Value=8547-10828-BB", ENDITEM, 
//		"Name=flightID", "Value=15949-11587-BB", ENDITEM, 
//		"Name=flightID", "Value=15949-12356-BB", ENDITEM, 
//		"Name=flightID", "Value=15949-13125-BB", ENDITEM, 
//		"Name=flightID", "Value=15949-13895-BB", ENDITEM, 
//		"Name=flightID", "Value=15949-14664-BB", ENDITEM, 
//		"Name=flightID", "Value=15949-15433-BB", ENDITEM, 
//		"Name=flightID", "Value=758-16191-BB", ENDITEM, 
//		"Name=flightID", "Value=758-16960-BB", ENDITEM, 
//		"Name=removeFlights.x", "Value=75", ENDITEM, 
//		"Name=removeFlights.y", "Value=2", ENDITEM, 
//		"Name=.cgifields", "Value=11", ENDITEM, 
//		"Name=.cgifields", "Value=21", ENDITEM, 
//		"Name=.cgifields", "Value=7", ENDITEM, 
//		"Name=.cgifields", "Value=17", ENDITEM, 
//		"Name=.cgifields", "Value=2", ENDITEM, 
//		"Name=.cgifields", "Value=22", ENDITEM, 
//		"Name=.cgifields", "Value=1", ENDITEM, 
//		"Name=.cgifields", "Value=18", ENDITEM, 
//		"Name=.cgifields", "Value=16", ENDITEM, 
//		"Name=.cgifields", "Value=13", ENDITEM, 
//		"Name=.cgifields", "Value=6", ENDITEM, 
//		"Name=.cgifields", "Value=3", ENDITEM, 
//		"Name=.cgifields", "Value=9", ENDITEM, 
//		"Name=.cgifields", "Value=12", ENDITEM, 
//		"Name=.cgifields", "Value=20", ENDITEM, 
//		"Name=.cgifields", "Value=14", ENDITEM, 
//		"Name=.cgifields", "Value=15", ENDITEM, 
//		"Name=.cgifields", "Value=8", ENDITEM, 
//		"Name=.cgifields", "Value=4", ENDITEM, 
//		"Name=.cgifields", "Value=19", ENDITEM, 
//		"Name=.cgifields", "Value=10", ENDITEM, 
//		"Name=.cgifields", "Value=5", ENDITEM, 
	
	
	
	
	
	
//	lr_start_transaction("delete_flight");
//
//	web_add_header("Origin", 
//		"http://172.29.64.1:1080");
//
//	lr_think_time(5);
//
//	web_submit_form("itinerary.pl", 
//		"Snapshot=t28.inf", 
//		ITEMDATA, 
//		LAST);
//
//	lr_end_transaction("delete_flight",LR_AUTO);

	

	
	
	
	
	
	

	lr_start_transaction("flights");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(17);
	
	
	web_reg_find("Text=Flight Selections", LAST);

	web_url("Search Flights Button", 
		"URL=http://172.29.64.1:1080/cgi-bin/welcome.pl?page=search", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.29.64.1:1080/cgi-bin/nav.pl?page=menu&in=itinerary", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("flights",LR_AUTO);

	lr_start_transaction("find_flight");

	web_add_auto_header("Origin", 
		"http://172.29.64.1:1080");

	lr_think_time(21);
	
	
	web_reg_find("Text=Find Flight", LAST);

	web_submit_data("reservations.pl", 
		"Action=http://172.29.64.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://172.29.64.1:1080/cgi-bin/reservations.pl?page=welcome", 
		"Snapshot=t12.inf", 
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
		"Name=findFlights.x", "Value=64", ENDITEM, 
		"Name=findFlights.y", "Value=8", ENDITEM, 
		"Name=.cgifields", "Value=roundtrip", ENDITEM, 
		"Name=.cgifields", "Value=seatType", ENDITEM, 
		"Name=.cgifields", "Value=seatPref", ENDITEM, 
		LAST);

	lr_end_transaction("find_flight",LR_AUTO);

	lr_think_time(18);

	lr_start_transaction("choose_flight");

	lr_end_transaction("choose_flight",LR_AUTO);

	web_submit_data("reservations.pl_2", 
		"Action=http://172.29.64.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://172.29.64.1:1080/cgi-bin/reservations.pl", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=outboundFlight", "Value={departDate}", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=seatType", "Value={seatType}", ENDITEM, 
		"Name=seatPref", "Value={seatPref}", ENDITEM, 
		"Name=reserveFlights.x", "Value=72", ENDITEM, 
		"Name=reserveFlights.y", "Value=6", ENDITEM, 
		LAST);

	lr_start_transaction("payment_details");

	web_revert_auto_header("Origin");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_header("Origin", 
		"http://172.29.64.1:1080");

	lr_think_time(15);

	web_submit_data("reservations.pl_3", 
		"Action=http://172.29.64.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://172.29.64.1:1080/cgi-bin/reservations.pl", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=firstName", "Value={firstName}", ENDITEM, 
		"Name=lastName", "Value={lastName}", ENDITEM, 
		"Name=address1", "Value={city}", ENDITEM, 
		"Name=address2", "Value={streetaddress}", ENDITEM, 
		"Name=pass1", "Value={firstName} {lastName}", ENDITEM, 
		"Name=creditCard", "Value=", ENDITEM, 
		"Name=expDate", "Value=", ENDITEM, 
		"Name=oldCCOption", "Value=", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=seatType", "Value={seatType}", ENDITEM, 
		"Name=seatPref", "Value={seatPref}", ENDITEM, 
		"Name=outboundFlight", "Value={departDate}", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=returnFlight", "Value=", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=buyFlights.x", "Value=85", ENDITEM, 
		"Name=buyFlights.y", "Value=7", ENDITEM, 
		"Name=.cgifields", "Value=saveCC", ENDITEM, 
		LAST);

	lr_end_transaction("payment_details",LR_AUTO);

	lr_start_transaction("sign_off");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(11);

	web_url("SignOff Button", 
		"URL=http://172.29.64.1:1080/cgi-bin/welcome.pl?signOff=1", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.29.64.1:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("sign_off",LR_AUTO);

	return 0;
}