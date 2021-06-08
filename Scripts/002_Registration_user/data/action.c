Action()
{

	web_add_cookie("MSO=SID&1623091512; DOMAIN=172.24.48.1");

	web_add_cookie("MTUserInfo=firstName&jojo&address2&Moscow&username&jojo21&hash&113&lastName&jojo%0A&address1&Moscow&creditCard&&expDate&%0A; DOMAIN=172.24.48.1");

	web_add_auto_header("DNT", 
		"1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

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

	web_url("login.pl_2", 
		"URL=http://172.24.48.1:1080/cgi-bin/login.pl?username=&password=&getInfo=true", 
		"TargetFrame=info", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.24.48.1:1080/WebTours/home.html", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("sign_up_now",LR_AUTO);

	lr_start_transaction("customer_profile");

	web_add_auto_header("Origin", 
		"http://172.24.48.1:1080");

	lr_think_time(36);

	web_submit_data("login.pl_3", 
		"Action=http://172.24.48.1:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"TargetFrame=info", 
		"RecContentType=text/html", 
		"Referer=http://172.24.48.1:1080/cgi-bin/login.pl?username=&password=&getInfo=true", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value=jojo46", ENDITEM, 
		"Name=password", "Value=jojo", ENDITEM, 
		"Name=passwordConfirm", "Value=jojo", ENDITEM, 
		"Name=firstName", "Value=Lukas", ENDITEM, 
		"Name=lastName", "Value=Lukasovich", ENDITEM, 
		"Name=address1", "Value=Moscow", ENDITEM, 
		"Name=address2", "Value=Moscow", ENDITEM, 
		"Name=register.x", "Value=47", ENDITEM, 
		"Name=register.y", "Value=7", ENDITEM, 
		LAST);

	web_submit_data("login.pl_4", 
		"Action=http://172.24.48.1:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"TargetFrame=info", 
		"RecContentType=text/html", 
		"Referer=http://172.24.48.1:1080/cgi-bin/login.pl?username=&password=&getInfo=true", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value=jojo46", ENDITEM, 
		"Name=password", "Value=jojo", ENDITEM, 
		"Name=passwordConfirm", "Value=jojo", ENDITEM, 
		"Name=firstName", "Value=Lukas", ENDITEM, 
		"Name=lastName", "Value=Lukasovich", ENDITEM, 
		"Name=address1", "Value=Moscow", ENDITEM, 
		"Name=address2", "Value=Moscow", ENDITEM, 
		"Name=register.x", "Value=47", ENDITEM, 
		"Name=register.y", "Value=7", ENDITEM, 
		LAST);

	lr_think_time(10);

	web_submit_data("login.pl_5", 
		"Action=http://172.24.48.1:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"TargetFrame=info", 
		"RecContentType=text/html", 
		"Referer=http://172.24.48.1:1080/cgi-bin/login.pl", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value=jojo460", ENDITEM, 
		"Name=password", "Value=jojo", ENDITEM, 
		"Name=passwordConfirm", "Value=jojo", ENDITEM, 
		"Name=firstName", "Value=Lukas", ENDITEM, 
		"Name=lastName", "Value=Lukasovich", ENDITEM, 
		"Name=address1", "Value=Moscow", ENDITEM, 
		"Name=address2", "Value=Moscow", ENDITEM, 
		"Name=register.x", "Value=59", ENDITEM, 
		"Name=register.y", "Value=5", ENDITEM, 
		LAST);

	web_submit_data("login.pl_6", 
		"Action=http://172.24.48.1:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"TargetFrame=info", 
		"RecContentType=text/html", 
		"Referer=http://172.24.48.1:1080/cgi-bin/login.pl", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value=jojo460", ENDITEM, 
		"Name=password", "Value=jojo", ENDITEM, 
		"Name=passwordConfirm", "Value=jojo", ENDITEM, 
		"Name=firstName", "Value=Lukas", ENDITEM, 
		"Name=lastName", "Value=Lukasovich", ENDITEM, 
		"Name=address1", "Value=Moscow", ENDITEM, 
		"Name=address2", "Value=Moscow", ENDITEM, 
		"Name=register.x", "Value=59", ENDITEM, 
		"Name=register.y", "Value=5", ENDITEM, 
		LAST);

	lr_think_time(8);

	web_submit_data("login.pl_7", 
		"Action=http://172.24.48.1:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"TargetFrame=info", 
		"RecContentType=text/html", 
		"Referer=http://172.24.48.1:1080/cgi-bin/login.pl", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value=jojo1337", ENDITEM, 
		"Name=password", "Value=jojo", ENDITEM, 
		"Name=passwordConfirm", "Value=jojo", ENDITEM, 
		"Name=firstName", "Value=Lukas", ENDITEM, 
		"Name=lastName", "Value=Lukasovich", ENDITEM, 
		"Name=address1", "Value=Moscow", ENDITEM, 
		"Name=address2", "Value=Moscow", ENDITEM, 
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

	web_url("button_next.gif_2", 
		"URL=http://172.24.48.1:1080/cgi-bin/welcome.pl?page=menus", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.24.48.1:1080/cgi-bin/login.pl", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	web_url("button_next.gif_3", 
		"URL=http://172.24.48.1:1080/cgi-bin/welcome.pl?page=menus", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.24.48.1:1080/cgi-bin/login.pl", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	web_url("button_next.gif_4", 
		"URL=http://172.24.48.1:1080/cgi-bin/welcome.pl?page=menus", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.24.48.1:1080/cgi-bin/login.pl", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("customer_profile",LR_AUTO);

	lr_think_time(18);

	lr_start_transaction("sign_off");

	web_url("SignOff Button", 
		"URL=http://172.24.48.1:1080/cgi-bin/welcome.pl?signOff=1", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.24.48.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	web_url("SignOff Button_2", 
		"URL=http://172.24.48.1:1080/cgi-bin/welcome.pl?signOff=1", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://172.24.48.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("sign_off",LR_AUTO);

	return 0;
}