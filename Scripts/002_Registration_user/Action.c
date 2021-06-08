Action()
{
	lr_start_transaction("002_Registration_user");
	
	lr_start_transaction("link");

	web_add_cookie("MSO=SID&1623091512; DOMAIN=172.24.48.1");

	web_add_cookie("MTUserInfo=firstName&jojo&address2&Moscow&username&jojo21&hash&113&lastName&jojo%0A&address1&Moscow&creditCard&&expDate&%0A; DOMAIN=172.24.48.1");

	web_add_auto_header("DNT", 
		"1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");
	
	web_reg_find("Text=Web Tours", LAST);
	
	web_url("welcome.pl", 
		"URL=http://172.24.48.1:1080/cgi-bin/welcome.pl?signOff=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.24.48.1:1080/WebTours/", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "AUTO");
	
	lr_end_transaction("link", LR_AUTO);

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	lr_start_transaction("sign_up_now");

	web_add_cookie("MSO=SID&1623093240; DOMAIN=172.24.48.1");

	lr_think_time(7);
	

	web_url("login.pl", 
		"URL=http://172.24.48.1:1080/cgi-bin/login.pl?username=&password=&getInfo=true", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.24.48.1:1080/WebTours/home.html", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

//	web_url("login.pl_2", 
//		"URL=http://172.24.48.1:1080/cgi-bin/login.pl?username=&password=&getInfo=true", 
//		"TargetFrame=info", 
//		"Resource=0", 
//		"RecContentType=text/html", 
//		"Referer=http://172.24.48.1:1080/WebTours/home.html", 
//		"Snapshot=t3.inf", 
//		"Mode=HTML", 
//		LAST);

	lr_end_transaction("sign_up_now", LR_AUTO);

	lr_start_transaction("customer_profile");

	web_add_auto_header("Origin", 
		"http://172.24.48.1:1080");

	lr_think_time(8);
	
	web_reg_find("Text=User Information", LAST);
	
	web_submit_data("login.pl_2", 
		"Action=http://172.24.48.1:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"TargetFrame=info", 
		"RecContentType=text/html", 
		"Referer=http://172.24.48.1:1080/cgi-bin/login.pl", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value={login}", ENDITEM, 
		"Name=password", "Value={password}", ENDITEM, 
		"Name=passwordConfirm", "Value={password}", ENDITEM, 
		"Name=firstName", "Value={firstName}", ENDITEM, 
		"Name=lastName", "Value={lastName}", ENDITEM, 
		"Name=address1", "Value={city}", ENDITEM, 
		"Name=address2", "Value={streetaddress}", ENDITEM, 
		"Name=register.x", "Value=54", ENDITEM, 
		"Name=register.y", "Value=12", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	lr_think_time(5);

	web_url("button_next.gif", 
		"URL=http://172.24.48.1:1080/cgi-bin/welcome.pl?page=menus", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.24.48.1:1080/cgi-bin/login.pl", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);
	

	lr_end_transaction("customer_profile",LR_AUTO);

	lr_think_time(18);

	lr_start_transaction("sign_off");
	
	web_reg_find("Text=Web Tours",LAST);

	web_url("SignOff Button", 
		"URL=http://172.24.48.1:1080/cgi-bin/welcome.pl?signOff=1", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.24.48.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);


	lr_end_transaction("sign_off",LR_AUTO);
	
	lr_end_transaction("002_Registration_user", LR_AUTO);

	return 0;
}