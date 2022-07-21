Action()
{

	        web_reg_save_param("C_session","lb=name=\"userSession\" value=\"","rb=\"/>",LAST);
	       
        
      
lr_start_transaction("Launch");

	web_url("index.htm", 
		"URL={URL}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES,
		LAST);
		
		lr_end_transaction("Launch", LR_AUTO);

         lr_think_time(30);
        
         
	lr_start_transaction("login");

	web_submit_data("login.pl",
		"Action=http://localhost:1080/cgi-bin/login.pl",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home",
		"Snapshot=t16.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=userSession", "Value={C_session}", ENDITEM,
		"Name=username", "Value={P_Username}", ENDITEM,
		"Name=password", "Value={P_Password}", ENDITEM,
		"Name=login.x", "Value=35", ENDITEM,
		"Name=login.y", "Value=15", ENDITEM,
		"Name=JSFormSubmit", "Value=off", ENDITEM,
		LAST);

	lr_end_transaction("login",LR_AUTO);
	
		lr_think_time(30);
		
		web_reg_save_param("C_Depart","lb=option value=\"","rb=\">","ORD=All",LAST);
		
		web_reg_save_param("C_Arrive","lb=option value=\"","rb=\">","ORD=All",LAST);
	
	lr_start_transaction("selectflight");

	web_url("Search Flights Button", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=search", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		EXTRARES,
		LAST);

	lr_end_transaction("selectflight",LR_AUTO);
	
       lr_think_time(29);
       
       
	lr_save_string(lr_paramarr_random("C_Depart"),"randomdep");
       
    lr_save_string(lr_paramarr_random("C_Arrive"),"randomarv");
     
       
	lr_start_transaction("continue");
	
	web_submit_data("reservations.pl", 
		"Action=http://localhost:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl?page=welcome", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=depart", "Value={randomdep_13}", ENDITEM, 
		"Name=departDate", "Value=07/02/2022", ENDITEM, 
		"Name=arrive", "Value={randomarv_17}", ENDITEM, 
		"Name=returnDate", "Value=07/03/2022", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=seatPref", "Value=None", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		"Name=findFlights.x", "Value=71", ENDITEM, 
		"Name=findFlights.y", "Value=4", ENDITEM, 
		"Name=.cgifields", "Value=roundtrip", ENDITEM, 
		"Name=.cgifields", "Value=seatType", ENDITEM, 
		"Name=.cgifields", "Value=seatPref", ENDITEM, 
		LAST);

	lr_end_transaction("continue",LR_AUTO);
    
	lr_think_time(36);
	

       
	lr_start_transaction("logout");

	web_url("SignOff Button", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?signOff=1", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("logout",LR_AUTO);

	return 0;
}