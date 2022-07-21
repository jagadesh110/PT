Action()
{

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Site");

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_header("sec-ch-ua", 
		"\" Not;A Brand\";v=\"99\", \"Microsoft Edge\";v=\"103\", \"Chromium\";v=\"103\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_add_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_url("index.htm", 
		"URL=http://localhost:1080/WebTours/index.htm", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABA3d3dwdnc3RhdGljA2NvbQAAAQABAAApEAAAAAAAAFQADABQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", ENDITEM, 
		LAST);

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_custom_request("getsupporteddomains", 
		"URL=https://www.bing.com/api/shopping/v1/getsupporteddomains?appid=67220BD2169C2EA709984467C21494086DF8CA85", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"clientContext\":{\"appname\":\"Edge\",\"buildversion\":\"103.0.1264.37\",\"enabledfeatures\":[{\"name\":\"msShoppingExp5\",\"params\":[]},{\"name\":\"msShoppingExp10\",\"params\":[]},{\"name\":\"msShoppingExp16\",\"params\":[]},{\"name\":\"msShoppingExp23\",\"params\":[]},{\"name\":\"msShoppingExp26\",\"params\":[]},{\"name\":\"msWebAssistQuery\",\"params\":[]},{\"name\":\"msEdgeShoppingPriceHistory\",\"params\":[]},{\"name\":\"msEdgeShoppingExpressCheckout\",\"params\":[]},{\"name\":\""
		"msEdgeShoppingGuestDomainCoupons\",\"params\":[]},{\"name\":\"msEdgeShoppingRewards\",\"params\":[]},{\"name\":\"msEdgeShoppingExpressCheckoutFillDetails\",\"params\":[]},{\"name\":\"msEdgeShoppingRebatesSignUp\",\"params\":[]},{\"name\":\"msEdgeShoppingAutoShowControlForFeature\",\"params\":[]},{\"name\":\"msEdgePwiloPriceHistory\",\"params\":[]},{\"name\":\"msEdgeShoppingOtherSeller\",\"params\":[]},{\"name\":\"msEdgeShoppingWalmartOtherSeller\",\"params\":[]},{\"name\":\""
		"msEdgePwiloItemDeletion\",\"params\":[]},{\"name\":\"msEdgeShoppingClarityEnabled\",\"params\":[]},{\"name\":\"msEdgeShoppingServerNotifications\",\"params\":[]},{\"name\":\"msEdgeShoppingPersistentStorage\",\"params\":[]},{\"name\":\"msShoppingEdgeTemplateAutomation\",\"params\":[]},{\"name\":\"msShoppingCheckoutMultiMessage\",\"params\":[]}],\"ismobile\":false,\"osname\":\"Windows NT\",\"osversion\":\"10.0.19044\"}}", 
		LAST);

	web_url("103.0.1264.37", 
		"URL=https://config.edge.skype.com/config/v1/Edge/103.0.1264.37?clientId=4052829335214244927&osname=win&client=edge&channel=stable&scpfull=0&scpguard=1&scpfre=0&scpver=2&osarch=x86_64&osver=10.0.19044&wu=1&devicefamily=desktop&uma=1&mngd=0&installdate=1630567641&edu=0&bphint=2&soobedate=1630582688", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Sec-Mesh-Client-Arch", 
		"x86_64");

	web_add_header("Sec-Mesh-Client-Edge-Channel", 
		"stable");

	web_add_header("Sec-Mesh-Client-Edge-Version", 
		"103.0.1264.37");

	web_add_header("Sec-Mesh-Client-OS", 
		"Windows");

	web_add_header("Sec-Mesh-Client-OS-Version", 
		"10.0.19044");

	web_add_header("Sec-Mesh-Client-WebView", 
		"0");

	web_url("blocklist", 
		"URL=https://edge.microsoft.com/abusiveadblocking/api/v1/blocklist", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABA3d3dwdnc3RhdGljA2NvbQAAAQABAAApEAAAAAAAAFQADABQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", ENDITEM, 
		LAST);

	web_add_cookie("pglt-edgeChromium-ntp=41; DOMAIN=ntp.msn.com");

	web_add_cookie("pglt-edgeChromium-dhp=41; DOMAIN=ntp.msn.com");

	web_add_cookie("sptmarket=en-gb||in|en-in|en-in|en|; DOMAIN=ntp.msn.com");

	web_add_cookie("_EDGE_V=1; DOMAIN=ntp.msn.com");

	web_add_cookie("MicrosoftApplicationsTelemetryDeviceId=62a35b6e-ec60-4afc-a772-22ea98af605f; DOMAIN=ntp.msn.com");

	web_add_cookie("MSFPC=GUID=a1f80a5d69144964b80c08ace1a5ac88&HASH=a1f8&LV=202110&V=4&LU=1634969572025; DOMAIN=ntp.msn.com");

	web_add_cookie("_SS=SID=00; DOMAIN=ntp.msn.com");

	web_add_cookie("USRLOC=; DOMAIN=ntp.msn.com");

	web_add_cookie("sptmarket=en-gb|gb|IN|en-in|en-in|en; DOMAIN=ntp.msn.com");

	web_add_cookie("marketPref=en-in; DOMAIN=ntp.msn.com");

	web_add_cookie("__gads=ID=c2cf3cabd7a7b0ad-225161d3c0d40038:T=1642437055:S=ALNI_Mbw93_hHKOimJTVCwAwtn3ljBIOGA; DOMAIN=ntp.msn.com");

	web_add_cookie("PreferencesMsn=eyJIb21lUGFnZSI6eyJTdHJpcGVzIjpbXSwiTWVTdHJpcGVNb2R1bGVzIjpbXSwiTWFya2V0Q29uZmlndXJhdGlvbiI6eyJNYXJrZXQiOiJlbi1pbiIsIlN1cHByZXNzUHJvbXB0IjpmYWxzZSwiUHJlZmVycmVkTGFuZ3VhZ2VDb2RlIjoiZW4tZ2IiLCJDb3VudHJ5Q29kZSI6IklOIn19LCJFeHBpcnlUaW1lIjo2MzgyMzMxMjc3NTEyNzkxOTgsIlZlcnNpb24iOjF90; DOMAIN=ntp.msn.com");

	web_add_cookie("MUID=0A6D71F5F61E661B16276153F7856730; DOMAIN=ntp.msn.com");

	web_add_cookie("__gpi=UID=000006bfe463a425:T=1655540413:RT=1656179982:S=ALNI_MZrw0Z-A0slpM2hv21CNsllk-cYBQ; DOMAIN=ntp.msn.com");

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_auto_header("X-Client-Data", 
		"eyIxIjoiMiIsIjIiOiIxIiwiMyI6IjAiLCI0IjoiNDA1MjgyOTMzNTIxNDI0NDkyNyIsIjUiOiJcIkVSZG9HT2FNb0tDRThWOUt6ZURhZ1dSZG5FQzdGa2hWMmlOYWV4Y3RBSFk9XCIiLCI2Ijoic3RhYmxlIiwiNyI6IjEwMzUwODcxMTgzMzciLCI5IjoiZGVza3RvcCJ9");

	web_add_header("sec-ch-ua", 
		"\" Not;A Brand\";v=\"99\", \"Microsoft Edge\";v=\"103\", \"Chromium\";v=\"103\"");

	web_add_header("sec-ch-ua-arch", 
		"\"x86\"");

	web_add_header("sec-ch-ua-bitness", 
		"\"64\"");

	web_add_header("sec-ch-ua-full-version", 
		"\"103.0.1264.37\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_add_header("sec-ch-ua-model", 
		"\"\"");

	web_add_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_add_header("sec-ch-ua-platform-version", 
		"\"10.0.0\"");

	web_url("ntp", 
		"URL=https://ntp.msn.com/edge/ntp?locale=en-gb&title=New%20tab&dsp=1&sp=Bing&startpage=1&PC=U531&prerender=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_revert_auto_header("X-Client-Data");

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_add_header("Sec-Mesh-Client-Arch", 
		"x86_64");

	web_add_header("Sec-Mesh-Client-Edge-Channel", 
		"stable");

	web_add_header("Sec-Mesh-Client-Edge-Version", 
		"103.0.1264.37");

	web_add_header("Sec-Mesh-Client-OS", 
		"Windows");

	web_add_header("Sec-Mesh-Client-OS-Version", 
		"10.0.19044");

	web_add_header("Sec-Mesh-Client-WebView", 
		"0");

	web_url("v2", 
		"URL=https://edge.microsoft.com/serviceexperimentation/v2/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABDWltZy1zLW1zbi1jb20JYWthbWFpemVkA25ldAAAAQABAAApEAAAAAAAAEgADABEAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", ENDITEM, 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABDWltZy1zLW1zbi1jb20JYWthbWFpemVkA25ldAAAHAABAAApEAAAAAAAAEgADABEAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", ENDITEM, 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABAnNiEXNjb3JlY2FyZHJlc2VhcmNoA2NvbQAAHAABAAApEAAAAAAAAEsADABHAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", ENDITEM, 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABAnNiEXNjb3JlY2FyZHJlc2VhcmNoA2NvbQAAAQABAAApEAAAAAAAAEsADABHAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", ENDITEM, 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABA3d3dwRiaW5nA2NvbQAAAQABAAApEAAAAAAAAFcADABTAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", ENDITEM, 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABA3d3dwRiaW5nA2NvbQAAHAABAAApEAAAAAAAAFcADABTAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", ENDITEM, 
		"Url=https://ntp.msn.com/edge/ntp/service-worker.js", "Referer=https://ntp.msn.com/edge/ntp/service-worker.js", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_custom_request("getsupporteddomains_2", 
		"URL=https://www.bing.com/api/shopping/v1/getsupporteddomains?appid=67220BD2169C2EA709984467C21494086DF8CA85", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"clientContext\":{\"appname\":\"Edge\",\"buildversion\":\"103.0.1264.37\",\"enabledfeatures\":[{\"name\":\"msShoppingExp5\",\"params\":[]},{\"name\":\"msShoppingExp10\",\"params\":[]},{\"name\":\"msShoppingExp16\",\"params\":[]},{\"name\":\"msShoppingExp23\",\"params\":[]},{\"name\":\"msShoppingExp26\",\"params\":[]},{\"name\":\"msWebAssistQuery\",\"params\":[]},{\"name\":\"msEdgeShoppingPriceHistory\",\"params\":[]},{\"name\":\"msEdgeShoppingExpressCheckout\",\"params\":[]},{\"name\":\""
		"msEdgeShoppingGuestDomainCoupons\",\"params\":[]},{\"name\":\"msEdgeShoppingRewards\",\"params\":[]},{\"name\":\"msEdgeShoppingExpressCheckoutFillDetails\",\"params\":[]},{\"name\":\"msEdgeShoppingRebatesSignUp\",\"params\":[]},{\"name\":\"msEdgeShoppingAutoShowControlForFeature\",\"params\":[]},{\"name\":\"msEdgePwiloPriceHistory\",\"params\":[]},{\"name\":\"msEdgeShoppingOtherSeller\",\"params\":[]},{\"name\":\"msEdgeShoppingWalmartOtherSeller\",\"params\":[]},{\"name\":\""
		"msEdgePwiloItemDeletion\",\"params\":[]},{\"name\":\"msEdgeShoppingClarityEnabled\",\"params\":[]},{\"name\":\"msEdgeShoppingServerNotifications\",\"params\":[]},{\"name\":\"msEdgeShoppingPersistentStorage\",\"params\":[]},{\"name\":\"msShoppingEdgeTemplateAutomation\",\"params\":[]},{\"name\":\"msShoppingCheckoutMultiMessage\",\"params\":[]}],\"ismobile\":false,\"osname\":\"Windows NT\",\"osversion\":\"10.0.19044\"}}", 
		EXTRARES, 
		"Url=http://localhost:1080/WebTours/images/mer_login.gif", "Referer=http://localhost:1080/cgi-bin/nav.pl?in=home", ENDITEM, 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABA3d3dwRiaW5nA2NvbQAAAQABAAApEAAAAAAAAFcADABTAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", ENDITEM, 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABA3d3dwRiaW5nA2NvbQAAHAABAAApEAAAAAAAAFcADABTAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", ENDITEM, 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABAWMDbXNuA2NvbQAAHAABAAApEAAAAAAAAFoADABWAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", ENDITEM, 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABAWMEYmluZwNjb20AAAEAAQAAKRAAAAAAAABZAAwAVQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", ENDITEM, 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABAWMEYmluZwNjb20AABwAAQAAKRAAAAAAAABZAAwAVQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", ENDITEM, 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABAWMDbXNuA2NvbQAAAQABAAApEAAAAAAAAFoADABWAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", ENDITEM, 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABBGVkZ2UJbWljcm9zb2Z0A2NvbQAAAQABAAApEAAAAAAAAFEADABNAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", ENDITEM, 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABBGVkZ2UJbWljcm9zb2Z0A2NvbQAAHAABAAApEAAAAAAAAFEADABNAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", ENDITEM, 
		"Url=https://edge.microsoft.com/autofillservice/v1/pages/ChRDaHJvbWUvMTAzLjAuNTA2MC41MxIXCU35IjnBRbgwEgUN541ADhIFDc5BTHo=?alt=proto", "Referer=", ENDITEM, 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABAmdvCW1pY3Jvc29mdANjb20AAAEAAQAAKRAAAAAAAABTAAwATwAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", ENDITEM, 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABAmdvCW1pY3Jvc29mdANjb20AABwAAQAAKRAAAAAAAABTAAwATwAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", ENDITEM, 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABA2FwaQNtc24DY29tAAABAAEAACkQAAAAAAAAWAAMAFQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", ENDITEM, 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABA2FwaQNtc24DY29tAAAcAAEAACkQAAAAAAAAWAAMAFQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", ENDITEM, 
		LAST);

	web_add_header("Sec-Mesh-Client-Arch", 
		"x86_64");

	web_add_header("Sec-Mesh-Client-Edge-Channel", 
		"stable");

	web_add_header("Sec-Mesh-Client-Edge-Version", 
		"103.0.1264.37");

	web_add_header("Sec-Mesh-Client-OS", 
		"Windows");

	web_add_header("Sec-Mesh-Client-OS-Version", 
		"10.0.19044");

	web_add_header("Sec-Mesh-Client-WebView", 
		"0");

	web_add_header("X-Microsoft-Update-AppId", 
		"kpfehajjjbbcifeehjgfgnabifknmdad,oankkpibpaokgecfckkdkgaoafllipag,eeobbhfgfagbclfofmgbdfoicabjdbkn,ohckeflnhegojcjlcpbfpciadgikcohk,fppmbhmldokgmleojlplaaodlkibgikh,ndikpojcjlepofdkaaldkinkjbeeebkl,ojblfafjmiikbkepnnolpgbbhejhlcim,ahmaebgpfccdhgidjaidaoojjcijckba,mkcgfaeepibomfapiapjaceihcojnphg,mpicjakjneaggahlnmbojhjpnileolnb,llmidpclgepbgbgoecnhcmgfhmfplfao,dnhnnofocefcglhjeigmkhcgfoaipbaa,lfmeghnikdkbonehgjihjebgioakijgn,omnckhpgfmaoelhddliebabpgblmmnjp,jbfaflocpnkhbgcijpkiafdpbjkedane,"
		"plbmmhnabegcabfbcejohgjpkamkddhn");

	web_add_header("X-Microsoft-Update-Interactivity", 
		"bg");

	web_add_header("X-Microsoft-Update-Updater", 
		"msedge-103.0.1264.37");

	web_custom_request("update", 
		"URL=https://edge.microsoft.com/componentupdater/api/v1/update?cup2key=5:-dmC5NWHsw4o1xMyYhzjOxGmNsXV3-0JNsTWYgYScfE&cup2hreq=5948881ac7fb6ada830c8ea9bbe90babf35fb921e35245b83446c7f6cfa513ba", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"msedge\",\"acceptformat\":\"crx3\",\"app\":[{\"appid\":\"kpfehajjjbbcifeehjgfgnabifknmdad\",\"cohort\":\"rrf@0.99\",\"enabled\":true,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.42AF0D1905C8F1D8F6167365271C4549A73603B838BA58B9A664C57C00DB1EE5\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.99\",\"AppMajorVersion\":\"103\",\"AppRollout\":0.99,\"AppVersion\":\"103.0.1264.37\",\"IsInternalUser\":false,\"Priority\""
		":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.163.19\"},\"updatecheck\":{},\"version\":\"101.0.4906.0\"},{\"appid\":\"oankkpibpaokgecfckkdkgaoafllipag\",\"cohort\":\"rrf@0.74\",\"enabled\":true,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.B15929E2FA40698DAF147BA654F32F732AAD3F8C349591B2D7108ACE358B69C0\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.74\",\"AppMajorVersion\":\"103\",\"AppRollout\":0.74,\"AppVersion\":\"103.0.1264.37\",\"IsInternalUser\""
		":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.163.19\"},\"updatecheck\":{},\"version\":\"6498.2022.5.1\"},{\"appid\":\"eeobbhfgfagbclfofmgbdfoicabjdbkn\",\"cohort\":\"rrf@0.94\",\"enabled\":true,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.8BFD50D350D47445B57BB1D61BBDE41CEDA7AC43DC81FCE95BF1AC646D97D2A0\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.94\",\"AppMajorVersion\":\"103\",\"AppRollout\":0.94,\"AppVersion\":\"103.0.1264.37\""
		",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.163.19\"},\"updatecheck\":{},\"version\":\"1.0.0.8\"},{\"appid\":\"ohckeflnhegojcjlcpbfpciadgikcohk\",\"cohort\":\"rrf@0.88\",\"enabled\":true,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.26123BEF7D73536450862D2C4D44963D720AA80B6FC2D8496F559CB9C1FDEB00\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.88\",\"AppMajorVersion\":\"103\",\"AppRollout\":0.88,\"AppVersion\":\""
		"103.0.1264.37\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.163.19\"},\"updatecheck\":{},\"version\":\"0.0.1.4\"},{\"appid\":\"fppmbhmldokgmleojlplaaodlkibgikh\",\"cohort\":\"rrf@0.49\",\"enabled\":true,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.A81D1959892AE4180554347DF1B97834ABBA2E1A5E6B9AEBA000ECEA26EABECC\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.49\",\"AppMajorVersion\":\"103\",\"AppRollout\":0.49,\""
		"AppVersion\":\"103.0.1264.37\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.163.19\"},\"updatecheck\":{},\"version\":\"1.15.0.1\"},{\"appid\":\"ndikpojcjlepofdkaaldkinkjbeeebkl\",\"cohort\":\"rrf@0.75\",\"enabled\":true,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.3C88BA6DD54D9DB605AD5425023ECDF41958D4ABD4E6947E1FCAB1F40A05B9F5\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.75\",\"AppMajorVersion\":\"103\",\""
		"AppRollout\":0.75,\"AppVersion\":\"103.0.1264.37\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.163.19\"},\"updatecheck\":{},\"version\":\"10.34.0.19\"},{\"appid\":\"ojblfafjmiikbkepnnolpgbbhejhlcim\",\"cohort\":\"rrf@0.88\",\"enabled\":true,\"lang\":\"en-GB\",\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.88\",\"AppMajorVersion\":\"103\",\"AppRollout\":0.88,\"AppVersion\":\"103.0.1264.37\",\"IsInternalUser\":false,\"Priority\""
		":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.163.19\"},\"updatecheck\":{},\"version\":\"4.10.2391.6\"},{\"appid\":\"ahmaebgpfccdhgidjaidaoojjcijckba\",\"cohort\":\"rrf@0.50\",\"enabled\":true,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.82497265352E024349DF20FCB72104978E8835933BF7497E11D8B1E0A8617AAE\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.50\",\"AppMajorVersion\":\"103\",\"AppRollout\":0.5,\"AppVersion\":\"103.0.1264.37\",\"IsInternalUser\""
		":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.163.19\"},\"updatecheck\":{},\"version\":\"3.0.0.0\"},{\"appid\":\"mkcgfaeepibomfapiapjaceihcojnphg\",\"cohort\":\"rrf@0.59\",\"enabled\":true,\"lang\":\"en-GB\",\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.59\",\"AppMajorVersion\":\"103\",\"AppRollout\":0.59,\"AppVersion\":\"103.0.1264.37\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.163.19\"},\""
		"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"mpicjakjneaggahlnmbojhjpnileolnb\",\"cohort\":\"rrf@0.40\",\"enabled\":true,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.E1A05F9E2E2FA00265D4FDDC1218B6D534E442B97D1458922796B09321CE732F\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.40\",\"AppMajorVersion\":\"103\",\"AppRollout\":0.4,\"AppVersion\":\"103.0.1264.37\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\""
		"1.3.163.19\"},\"updatecheck\":{},\"version\":\"3.0.0.2\"},{\"appid\":\"llmidpclgepbgbgoecnhcmgfhmfplfao\",\"cohort\":\"rrf@0.90\",\"enabled\":true,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.EA0B226888401664D2A5706CF629D41D85FA741D12CC66500AD338835FDAF290\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.90\",\"AppMajorVersion\":\"103\",\"AppRollout\":0.9,\"AppVersion\":\"103.0.1264.37\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\""
		"UpdaterVersion\":\"1.3.163.19\"},\"updatecheck\":{},\"version\":\"2.0.0.2098\"},{\"appid\":\"dnhnnofocefcglhjeigmkhcgfoaipbaa\",\"cohort\":\"rrf@0.73\",\"enabled\":true,\"lang\":\"en-GB\",\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.73\",\"AppMajorVersion\":\"103\",\"AppRollout\":0.73,\"AppVersion\":\"103.0.1264.37\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.163.19\"},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\""
		"lfmeghnikdkbonehgjihjebgioakijgn\",\"cohort\":\"rrf@0.26\",\"enabled\":true,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.915F1FB292D02F38A1D6CE5045D25A5B2BCA8FC36BFE9A535C361DF8D023FFA6\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.26\",\"AppMajorVersion\":\"103\",\"AppRollout\":0.26,\"AppVersion\":\"103.0.1264.37\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.163.19\"},\"updatecheck\":{},\"version\":\"1.0.9.0\"},"
		"{\"appid\":\"omnckhpgfmaoelhddliebabpgblmmnjp\",\"cohort\":\"rrf@0.72\",\"enabled\":true,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.DD91C7C496E4D9E8DF5BEAA3D33D45F9EF196B4F888D0FAC50EAF08CAD6B29D7\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.72\",\"AppMajorVersion\":\"103\",\"AppRollout\":0.72,\"AppVersion\":\"103.0.1264.37\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.163.19\"},\"updatecheck\":{},\"version\""
		":\"1.0.0.2\"},{\"appid\":\"jbfaflocpnkhbgcijpkiafdpbjkedane\",\"cohort\":\"rrf@0.98\",\"enabled\":true,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.ECE4947B08C15FAE5588EF4CE9EED139DF1A24523CE963EB8D72FDAAB133C8EB\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.98\",\"AppMajorVersion\":\"103\",\"AppRollout\":0.98,\"AppVersion\":\"103.0.1264.37\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.163.19\"},\"updatecheck\":{"
		"},\"version\":\"1.0.0.23\"},{\"appid\":\"plbmmhnabegcabfbcejohgjpkamkddhn\",\"cohort\":\"rrf@0.59\",\"enabled\":true,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.BD898A508EEF1C3ECDF1139CE77CB2A1F7BF0F1593BE1C8155E9AD4918B35FD7\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.59\",\"AppMajorVersion\":\"103\",\"AppRollout\":0.59,\"AppVersion\":\"103.0.1264.37\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.163.19\"},\""
		"updatecheck\":{},\"version\":\"2832\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":0,\"physmemory\":4,\"sse\":1,\"sse2\":1,\"sse3\":1,\"sse41\":1,\"sse42\":1,\"ssse3\":1},\"ismachine\":1,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"sku\":\"desktop\",\"version\":\"10.0.19044.1766\"},\"prodversion\":\"103.0.1264.37\",\"protocol\":\"3.1\",\"requestid\":\"{8719c3ed-c678-445b-a2e5-208051307d4c}\",\"sessionid\":\""
		"{fae7518d-3b61-4d47-8db3-892165c8ae02}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":1,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.163.19\"},\"updaterversion\":\"103.0.1264.37\"}}", 
		LAST);

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_add_cookie("_EDGE_V=1; DOMAIN=api.msn.com");

	web_add_cookie("_SS=SID=00; DOMAIN=api.msn.com");

	web_add_cookie("USRLOC=; DOMAIN=api.msn.com");

	web_add_cookie("sptmarket=en-gb|gb|IN|en-in|en-in|en; DOMAIN=api.msn.com");

	web_add_cookie("marketPref=en-in; DOMAIN=api.msn.com");

	web_add_cookie("__gads=ID=c2cf3cabd7a7b0ad-225161d3c0d40038:T=1642437055:S=ALNI_Mbw93_hHKOimJTVCwAwtn3ljBIOGA; DOMAIN=api.msn.com");

	web_add_cookie("PreferencesMsn=eyJIb21lUGFnZSI6eyJTdHJpcGVzIjpbXSwiTWVTdHJpcGVNb2R1bGVzIjpbXSwiTWFya2V0Q29uZmlndXJhdGlvbiI6eyJNYXJrZXQiOiJlbi1pbiIsIlN1cHByZXNzUHJvbXB0IjpmYWxzZSwiUHJlZmVycmVkTGFuZ3VhZ2VDb2RlIjoiZW4tZ2IiLCJDb3VudHJ5Q29kZSI6IklOIn19LCJFeHBpcnlUaW1lIjo2MzgyMzMxMjc3NTEyNzkxOTgsIlZlcnNpb24iOjF90; DOMAIN=api.msn.com");

	web_add_cookie("MUID=0A6D71F5F61E661B16276153F7856730; DOMAIN=api.msn.com");

	web_add_cookie("__gpi=UID=000006bfe463a425:T=1655540413:RT=1656179982:S=ALNI_MZrw0Z-A0slpM2hv21CNsllk-cYBQ; DOMAIN=api.msn.com");

	web_add_cookie("MUID=0A6D71F5F61E661B16276153F7856730; DOMAIN=edge.microsoft.com");

	web_add_cookie("AMCV_EA76ADE95776D2EC7F000101%40AdobeOrg=1585540135%7CMCIDTS%7C19010%7CMCMID%7C81185916723805965660999431287587875979%7CMCAAMLH-1643041865%7C12%7CMCAAMB-1643041865%7C6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y%7CMCOPTOUT-1642444267s%7CNONE%7CMCSYNCSOP%7C411-19017%7CMCAID%7CNONE%7CvVersion%7C4.4.0; DOMAIN=edge.microsoft.com");

	web_add_cookie("MC1=GUID=7f2f248efb0a4edaae64f4f51a369567&HASH=7f2f&LV=202201&V=4&LU=1642437071167; DOMAIN=edge.microsoft.com");

	web_add_auto_header("Origin", 
		"https://ntp.msn.com");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_header("X-Client-Data", 
		"eyIxIjoiMiIsIjIiOiIxIiwiMyI6IjAiLCI0IjoiNDA1MjgyOTMzNTIxNDI0NDkyNyIsIjUiOiJcIkVSZG9HT2FNb0tDRThWOUt6ZURhZ1dSZG5FQzdGa2hWMmlOYWV4Y3RBSFk9XCIiLCI2Ijoic3RhYmxlIiwiNyI6IjEwMzUwODcxMTgzMzgiLCI5IjoiZGVza3RvcCJ9");

	web_url("appanon", 
		"URL=https://api.msn.com/auth/cookie/appanon?scn=app_anon&ocid=Peregrine&apikey=0QfOX3Vn51YCzitbLaRkTTBadtWpgTN8NZLW0C1SEM", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ntp.msn.com/", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://edge.microsoft.com/neededge/v1?bucket=19", "Referer=", ENDITEM, 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABBHNydGIDbXNuA2NvbQAAAQABAAApEAAAAAAAAFcADABTAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", ENDITEM, 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABBHNydGIDbXNuA2NvbQAAHAABAAApEAAAAAAAAFcADABTAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", ENDITEM, 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABBmFzc2V0cwNtc24DY29tAAAcAAEAACkQAAAAAAAAVQAMAFEAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", ENDITEM, 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABBmFzc2V0cwNtc24DY29tAAABAAEAACkQAAAAAAAAVQAMAFEAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", ENDITEM, 
		LAST);

	web_add_cookie("_EDGE_V=1; DOMAIN=assets.msn.com");

	web_add_cookie("_SS=SID=00; DOMAIN=assets.msn.com");

	web_add_cookie("USRLOC=; DOMAIN=assets.msn.com");

	web_add_cookie("sptmarket=en-gb|gb|IN|en-in|en-in|en; DOMAIN=assets.msn.com");

	web_add_cookie("marketPref=en-in; DOMAIN=assets.msn.com");

	web_add_cookie("__gads=ID=c2cf3cabd7a7b0ad-225161d3c0d40038:T=1642437055:S=ALNI_Mbw93_hHKOimJTVCwAwtn3ljBIOGA; DOMAIN=assets.msn.com");

	web_add_cookie("PreferencesMsn=eyJIb21lUGFnZSI6eyJTdHJpcGVzIjpbXSwiTWVTdHJpcGVNb2R1bGVzIjpbXSwiTWFya2V0Q29uZmlndXJhdGlvbiI6eyJNYXJrZXQiOiJlbi1pbiIsIlN1cHByZXNzUHJvbXB0IjpmYWxzZSwiUHJlZmVycmVkTGFuZ3VhZ2VDb2RlIjoiZW4tZ2IiLCJDb3VudHJ5Q29kZSI6IklOIn19LCJFeHBpcnlUaW1lIjo2MzgyMzMxMjc3NTEyNzkxOTgsIlZlcnNpb24iOjF90; DOMAIN=assets.msn.com");

	web_add_cookie("MUID=0A6D71F5F61E661B16276153F7856730; DOMAIN=assets.msn.com");

	web_add_cookie("__gpi=UID=000006bfe463a425:T=1655540413:RT=1656179982:S=ALNI_MZrw0Z-A0slpM2hv21CNsllk-cYBQ; DOMAIN=assets.msn.com");

	web_add_cookie("_EDGE_V=1; DOMAIN=www.bing.com");

	web_add_cookie("SRCHD=AF=NOFORM; DOMAIN=www.bing.com");

	web_add_cookie("SRCHUID=V=2&GUID=91002C3C11EB4E14956CA7830AEF5883&dmnchg=1; DOMAIN=www.bing.com");

	web_add_cookie("BCP=AD=1&AL=1&SM=1; DOMAIN=www.bing.com");

	web_add_cookie("ABDEF=V=13&ABDV=13&MRNB=1653888389740&MRB=0; DOMAIN=www.bing.com");

	web_add_cookie("USRLOC=HS=1; DOMAIN=www.bing.com");

	web_add_cookie("MUID=0A6D71F5F61E661B16276153F7856730; DOMAIN=www.bing.com");

	web_add_cookie("_RwBf=ilt=10&ihpd=0&ispd=1&rc=32&rb=0&gb=0&rg=200&pc=29&mtu=0&rbb=0&g=0&cid=&clo=0&v=1&l=2022-06-29T07:00:00.0000000Z&lft=20220625&aof=0&o=2&p=&c=&t=0&s=0001-01-01T00:00:00.0000000+00:00&ts=2022-06-30T03:21:26.9273172+00:00&rwred=0; DOMAIN=www.bing.com");

	web_add_cookie("_TTSS_IN=hist=WyJlbiIsImF1dG8tZGV0ZWN0Il0=; DOMAIN=www.bing.com");

	web_add_cookie("_tarLang=default=te; DOMAIN=www.bing.com");

	web_add_cookie("_TTSS_OUT=hist=WyJoaSIsInRlIl0=; DOMAIN=www.bing.com");

	web_add_cookie("SRCHUSR=DOB=20211023&T=1656674733000; DOMAIN=www.bing.com");

	web_add_cookie("SRCHHPGUSR=SRCHLANG=en&BRW=W&BRH=S&CW=1366&CH=657&SW=1366&SH=768&DPR=1&UTC=330&DM=0&EXLTT=17&HV=1656674739&WTS=63792271533&PV=10.0.0; DOMAIN=www.bing.com");

	web_add_auto_header("sec-ch-ua", 
		"\" Not;A Brand\";v=\"99\", \"Microsoft Edge\";v=\"103\", \"Chromium\";v=\"103\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_url("ntp_2", 
		"URL=https://assets.msn.com/service/news/feed/pages/ntp?User=m-0A6D71F5F61E661B16276153F7856730&activityId=99CB58CA-530C-49C7-9E22-61039F4D61FD&apikey=0QfOX3Vn51YCzitbLaRkTTBadtWpgTN8NZLW0C1SEM&audienceMode=adult&caller=bgtask&contentType=article,video,slideshow,webcontent&dhp=1&fdhead=msnallexpusers,prg-wtchleftrail,ads-tabbeaconc,oneboxdhpcf,prg-hp-t1int,prg-hp-stopsw,prg-hp-t1,bingcollabhp2cf,modcoglangc,prg-hub-staging,prg-prod7,audexhz1cf,prg-ads-c-onesz-r2,prg-backntpcf,prg-1sw-bld-carc,"
		"prg-denserivera1-c,prg-wpo-new7gvt,prg-tel-trdom,preprg-1sw-sawnlenc,prg-ntbl-nd,shophp2cf,englishuxbundle,prg-1sw-sacfcdt3,prg-1sw-sam3th3,prg-ntbell-expt,prg-commonbell,prg-nt-vertical,prg-1sw-newmb2,prg-1sw-shopiconctr,prg-1sw-cibanditc,prg-1sw-cmlth2,prg-1sw-remvta2,prg-sf-config,prg-1sw-tf-iexbbox,prg-transallmc,prg-adspeek,prg-jprewards-revc,prg-wpo-encvd,prg-wpo-covid,prg-ent-dcp1,1s-brsagewnlt2,prg-1s-brln,prg-1s-webnews,prg-1s-wf-g1,prg-1s-wntpsk,prg-ent-intldcp1,prg-ent-tmpl1,"
		"prg-locnew-genc,prg-sh-mkton,prg-sh-scarsint1pure,prg-sh-sdintmkt,prg-spr-histon,prg-spr-osq5,prg-watvid-genc,prg-wpo-intlfdheads,prg-fin-l3fin,btrecrow1,1s-winauthservice,prg-tat-cxtmenutc,wf-sunny-first,weather8cf,prg-wxuftrg,prg-1sw-clbdg,1s-p2-brknb,1s-p2cl-bdg,prg-1sbgbanner,prg-1sw-wxbdg,prg-1sw-clrot,prg-1s-mtsn,prg-1sw-wxrus,preprg-tds-fsmb2,btie-freqcap-t,prg-ias,routentpring2c,prg-entcomp,1s-fcrypt,prg-wtch-tg3,prg-prmt-crtdv2,prg-wpo-dbcg2,prg-crsl-dr-sc-ctrl,prg-1sw-oldcarscrintlads,"
		"prg-1sw-intlsd2,prg-1sw-prodcar,prg-1sw-prodcarscr,prg-1sw-shcanema,prg-sh-fixprong1,prg-sh-wnwmkt,prg-1sw-cgrndc,prg-1sw-splog,prg-ctr-pnpc,prg-1sw-hdukr,288gc813,prg-wpo-stopwpocrs,prg-upsaip-w1-t,prg-feed2feed-t5,prg-varfont,prg-intapperr,prg-upsaip-r-t,ads-msanapac,prg-wx-anmpr,1s-contentview-1,prg-wcm-istc,muidflt22cf,521f7706,a83d7349,prg-wx-sbn-vm,prg-1sw-sagetrim,prg-wtchbutton1,prg-1sw-sbn-mm,prg-1sw-c-linkacc,prg-langdiscov,prg-1sw-icwhp,prg-ccmfa-t,hp-wea-locfcst2v,prg-wx-cminitext,"
		"1s-rpssecautht,prg-apilog,prg-1sw-p1wtrclm,prg-card-distpeh,gbj35620,mktautospgntncf,prg-officecm-t1e,prg-1sw-mbnodp,prg-sh-newdl,prg-wcard-distp,prg-clb,prg-1sw-mbcache,mktautosnavalgn,prg-spr-t-intl,prg-spr-egreco,prg-spr-emttof,prg-spr-st-gmarketv2,prg-anidelay-ro,prg-anidelay,prg-1sw-wf50c,prg-1sw-pllmtrt&infopaneCount=26&market=en-in&newsSkip=0&newsTop=48&ocid=anaheim-ntp-feeds&prerender=1&timeOut=1000&wpopageid=singlecol&wposchema=byregion", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ntp.msn.com/", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://www.bing.com/th?id=ORMS.6204cd1890058a9ee2a33799cfd77444&pid=Wdp&w=612&h=304&qlt=90&c=1&rs=1&dpr=1&p=0", "Referer=https://ntp.msn.com/", ENDITEM, 
		"Url=https://www.bing.com/th?id=ORMS.11eb409507da5dd6a40b94f66ee2f421&pid=Wdp&w=300&h=225&qlt=90&c=1&rs=1&dpr=1&p=0", "Referer=https://ntp.msn.com/", ENDITEM, 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABA250cANtc24DY29tAAABAAEAACkQAAAAAAAAWAAMAFQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", ENDITEM, 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABA250cANtc24DY29tAAAcAAEAACkQAAAAAAAAWAAMAFQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("X-Client-Data", 
		"eyIxIjoiMiIsIjIiOiIxIiwiMyI6IjAiLCI0IjoiNDA1MjgyOTMzNTIxNDI0NDkyNyIsIjUiOiJcIkVSZG9HT2FNb0tDRThWOUt6ZURhZ1dSZG5FQzdGa2hWMmlOYWV4Y3RBSFk9XCIiLCI2Ijoic3RhYmxlIiwiNyI6IjEwMzUwODcxMTgzMzgiLCI5IjoiZGVza3RvcCJ9");

	web_add_header("activityId", 
		"99CB58CA-530C-49C7-9E22-61039F4D61FD");

	web_add_header("sec-ch-ua-arch", 
		"\"x86\"");

	web_add_header("sec-ch-ua-bitness", 
		"\"64\"");

	web_add_header("sec-ch-ua-full-version", 
		"\"103.0.1264.37\"");

	web_add_header("sec-ch-ua-model", 
		"");

	web_add_header("sec-ch-ua-platform-version", 
		"\"10.0.0\"");

	web_url("treatments", 
		"URL=https://ntp.msn.com/optimizer/api/optimize/treatments?appType=edgeChromium&market=en-in&audiencemode=adult&pageType=dhp&fdhead=msnallexpusers,prg-wtchleftrail,ads-tabbeaconc,oneboxdhpcf,prg-hp-t1int,prg-hp-stopsw,prg-hp-t1,bingcollabhp2cf,modcoglangc,prg-hub-staging,prg-prod7,audexhz1cf,prg-ads-c-onesz-r2,prg-backntpcf,prg-1sw-bld-carc,prg-denserivera1-c,prg-wpo-new7gvt,prg-tel-trdom,preprg-1sw-sawnlenc,prg-ntbl-nd,shophp2cf,englishuxbundle,prg-1sw-sacfcdt3,prg-1sw-sam3th3,prg-ntbell-expt,"
		"prg-commonbell,prg-nt-vertical,prg-1sw-newmb2,prg-1sw-shopiconctr,prg-1sw-cibanditc,prg-1sw-cmlth2,prg-1sw-remvta2,prg-sf-config,prg-1sw-tf-iexbbox,prg-transallmc,prg-adspeek,prg-jprewards-revc,prg-wpo-encvd,prg-wpo-covid,prg-ent-dcp1,1s-brsagewnlt2,prg-1s-brln,prg-1s-webnews,prg-1s-wf-g1,prg-1s-wntpsk,prg-ent-intldcp1,prg-ent-tmpl1,prg-locnew-genc,prg-sh-mkton,prg-sh-scarsint1pure,prg-sh-sdintmkt,prg-spr-histon,prg-spr-osq5,prg-watvid-genc,prg-wpo-intlfdheads,prg-fin-l3fin,btrecrow1,"
		"1s-winauthservice,prg-tat-cxtmenutc,wf-sunny-first,weather8cf,prg-wxuftrg,prg-1sw-clbdg,1s-p2-brknb,1s-p2cl-bdg,prg-1sbgbanner,prg-1sw-wxbdg,prg-1sw-clrot,prg-1s-mtsn,prg-1sw-wxrus,preprg-tds-fsmb2,btie-freqcap-t,prg-ias,routentpring2c,prg-entcomp,1s-fcrypt,prg-wtch-tg3,prg-prmt-crtdv2,prg-wpo-dbcg2,prg-crsl-dr-sc-ctrl,prg-1sw-oldcarscrintlads,prg-1sw-intlsd2,prg-1sw-prodcar,prg-1sw-prodcarscr,prg-1sw-shcanema,prg-sh-fixprong1,prg-sh-wnwmkt,prg-1sw-cgrndc,prg-1sw-splog,prg-ctr-pnpc,prg-1sw-hdukr,"
		"288gc813,prg-wpo-stopwpocrs,prg-upsaip-w1-t,prg-feed2feed-t5,prg-varfont,prg-intapperr,prg-upsaip-r-t,ads-msanapac,prg-wx-anmpr,1s-contentview-1,prg-wcm-istc,muidflt22cf,521f7706,a83d7349,prg-wx-sbn-vm,prg-1sw-sagetrim,prg-wtchbutton1,prg-1sw-sbn-mm,prg-1sw-c-linkacc,prg-langdiscov,prg-1sw-icwhp,prg-ccmfa-t,hp-wea-locfcst2v,prg-wx-cminitext,1s-rpssecautht,prg-apilog,prg-1sw-p1wtrclm,prg-card-distpeh,gbj35620,mktautospgntncf,prg-officecm-t1e,prg-1sw-mbnodp,prg-sh-newdl,prg-wcard-distp,prg-clb,"
		"prg-1sw-mbcache,mktautosnavalgn,prg-spr-t-intl,prg-spr-egreco,prg-spr-emttof,prg-spr-st-gmarketv2,prg-anidelay-ro,prg-anidelay,prg-1sw-wf50c,prg-1sw-pllmtrt", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://ntp.msn.com/edge/ntp?locale=en-gb&title=New%20tab&dsp=1&sp=Bing&startpage=1&PC=U531&prerender=1", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://www.bing.com/th?id=ORMS.1c4bfa57a4d0fbb1331acbe83a8b48a0&pid=Wdp&w=300&h=225&qlt=90&c=1&rs=1&dpr=1&p=0", "Referer=https://ntp.msn.com/", ENDITEM, 
		LAST);

	web_add_auto_header("Origin", 
		"https://ntp.msn.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_url("AA2qT4f", 
		"URL=https://assets.msn.com/breakingnews/v1/cms/api/amp/article/AA2qT4f", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ntp.msn.com/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	lr_start_transaction("login");

	web_url("urls", 
		"URL=https://assets.msn.com/service/community/urls/?cmsid=AAZ3h4T&market=en-in&version=1.1&scn=MSNRPSAuth&wrapodata=false&fdhead="
		"msnallexpusers%2Cprg-wtchleftrail%2Cads-tabbeaconc%2Coneboxdhpcf%2Cprg-hp-t1int%2Cprg-hp-stopsw%2Cprg-hp-t1%2Cbingcollabhp2cf%2Cmodcoglangc%2Cprg-hub-staging%2Cprg-prod7%2Caudexhz1cf%2Cprg-ads-c-onesz-r2%2Cprg-backntpcf%2Cprg-1sw-bld-carc%2Cprg-denserivera1-c%2Cprg-wpo-new7gvt%2Cprg-tel-trdom%2Cpreprg-1sw-sawnlenc%2Cprg-ntbl-nd%2Cshophp2cf%2Cenglishuxbundle%2Cprg-1sw-sacfcdt3%2Cprg-1sw-sam3th3%2Cprg-ntbell-expt%2Cprg-commonbell%2Cprg-nt-vertical%2Cprg-1sw-newmb2%2Cprg-1sw-shopiconctr%2Cprg-1sw-cib"
		"anditc%2Cprg-1sw-cmlth2%2Cprg-1sw-remvta2%2Cprg-sf-config%2Cprg-1sw-tf-iexbbox%2Cprg-transallmc%2Cprg-adspeek%2Cprg-jprewards-revc%2Cprg-wpo-encvd%2Cprg-wpo-covid%2Cprg-ent-dcp1%2C1s-brsagewnlt2%2Cprg-1s-brln%2Cprg-1s-webnews%2Cprg-1s-wf-g1%2Cprg-1s-wntpsk%2Cprg-ent-intldcp1%2Cprg-ent-tmpl1%2Cprg-locnew-genc%2Cprg-sh-mkton%2Cprg-sh-scarsint1pure%2Cprg-sh-sdintmkt%2Cprg-spr-histon%2Cprg-spr-osq5%2Cprg-watvid-genc%2Cprg-wpo-intlfdheads%2Cprg-fin-l3fin%2Cbtrecrow1%2C1s-winauthservice%2Cprg-tat-cxtmen"
		"utc%2Cwf-sunny-first%2Cweather8cf%2Cprg-wxuftrg%2Cprg-1sw-clbdg%2C1s-p2-brknb%2C1s-p2cl-bdg%2Cprg-1sbgbanner%2Cprg-1sw-wxbdg%2Cprg-1sw-clrot%2Cprg-1s-mtsn%2Cprg-1sw-wxrus%2Cpreprg-tds-fsmb2%2Cbtie-freqcap-t%2Cprg-ias%2Croutentpring2c%2Cprg-entcomp%2C1s-fcrypt%2Cprg-wtch-tg3%2Cprg-prmt-crtdv2%2Cprg-wpo-dbcg2%2Cprg-crsl-dr-sc-ctrl%2Cprg-1sw-oldcarscrintlads%2Cprg-1sw-intlsd2%2Cprg-1sw-prodcar%2Cprg-1sw-prodcarscr%2Cprg-1sw-shcanema%2Cprg-sh-fixprong1%2Cprg-sh-wnwmkt%2Cprg-1sw-cgrndc%2Cprg-1sw-splog%"
		"2Cprg-ctr-pnpc%2Cprg-1sw-hdukr%2C288gc813%2Cprg-wpo-stopwpocrs%2Cprg-upsaip-w1-t%2Cprg-feed2feed-t5%2Cprg-varfont%2Cprg-intapperr%2Cprg-upsaip-r-t%2Cads-msanapac%2Cprg-wx-anmpr%2C1s-contentview-1%2Cprg-wcm-istc%2Cmuidflt22cf%2C521f7706%2Ca83d7349%2Cprg-wx-sbn-vm%2Cprg-1sw-sagetrim%2Cprg-wtchbutton1%2Cprg-1sw-sbn-mm%2Cprg-1sw-c-linkacc%2Cprg-langdiscov%2Cprg-1sw-icwhp%2Cprg-ccmfa-t%2Chp-wea-locfcst2v%2Cprg-wx-cminitext%2C1s-rpssecautht%2Cprg-apilog%2Cprg-1sw-p1wtrclm%2Cprg-card-distpeh%2Cgbj35620%2"
		"Cmktautospgntncf%2Cprg-officecm-t1e%2Cprg-1sw-mbnodp%2Cprg-sh-newdl%2Cprg-wcard-distp%2Cprg-clb%2Cprg-1sw-mbcache%2Cmktautosnavalgn%2Cprg-spr-t-intl%2Cprg-spr-egreco%2Cprg-spr-emttof%2Cprg-spr-st-gmarketv2%2Cprg-anidelay-ro%2Cprg-anidelay%2Cprg-1sw-wf50c%2Cprg-1sw-pllmtrt&ocid=anaheim-dhp&apikey=0QfOX3Vn51YCzitbLaRkTTBadtWpgTN8NZLW0C1SEM&user=m-0A6D71F5F61E661B16276153F7856730", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ntp.msn.com/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	web_url("actions", 
		"URL=https://assets.msn.com/service/graph/actions?apikey=0QfOX3Vn51YCzitbLaRkTTBadtWpgTN8NZLW0C1SEM&activityId=99CB58CA-530C-49C7-9E22-61039F4D61FD&ocid=anaheim-dhp-Peregrine&market=en-in&user=m-0A6D71F5F61E661B16276153F7856730&fdhead="
		"msnallexpusers%2Cprg-wtchleftrail%2Cads-tabbeaconc%2Coneboxdhpcf%2Cprg-hp-t1int%2Cprg-hp-stopsw%2Cprg-hp-t1%2Cbingcollabhp2cf%2Cmodcoglangc%2Cprg-hub-staging%2Cprg-prod7%2Caudexhz1cf%2Cprg-ads-c-onesz-r2%2Cprg-backntpcf%2Cprg-1sw-bld-carc%2Cprg-denserivera1-c%2Cprg-wpo-new7gvt%2Cprg-tel-trdom%2Cpreprg-1sw-sawnlenc%2Cprg-ntbl-nd%2Cshophp2cf%2Cenglishuxbundle%2Cprg-1sw-sacfcdt3%2Cprg-1sw-sam3th3%2Cprg-ntbell-expt%2Cprg-commonbell%2Cprg-nt-vertical%2Cprg-1sw-newmb2%2Cprg-1sw-shopiconctr%2Cprg-1sw-cib"
		"anditc%2Cprg-1sw-cmlth2%2Cprg-1sw-remvta2%2Cprg-sf-config%2Cprg-1sw-tf-iexbbox%2Cprg-transallmc%2Cprg-adspeek%2Cprg-jprewards-revc%2Cprg-wpo-encvd%2Cprg-wpo-covid%2Cprg-ent-dcp1%2C1s-brsagewnlt2%2Cprg-1s-brln%2Cprg-1s-webnews%2Cprg-1s-wf-g1%2Cprg-1s-wntpsk%2Cprg-ent-intldcp1%2Cprg-ent-tmpl1%2Cprg-locnew-genc%2Cprg-sh-mkton%2Cprg-sh-scarsint1pure%2Cprg-sh-sdintmkt%2Cprg-spr-histon%2Cprg-spr-osq5%2Cprg-watvid-genc%2Cprg-wpo-intlfdheads%2Cprg-fin-l3fin%2Cbtrecrow1%2C1s-winauthservice%2Cprg-tat-cxtmen"
		"utc%2Cwf-sunny-first%2Cweather8cf%2Cprg-wxuftrg%2Cprg-1sw-clbdg%2C1s-p2-brknb%2C1s-p2cl-bdg%2Cprg-1sbgbanner%2Cprg-1sw-wxbdg%2Cprg-1sw-clrot%2Cprg-1s-mtsn%2Cprg-1sw-wxrus%2Cpreprg-tds-fsmb2%2Cbtie-freqcap-t%2Cprg-ias%2Croutentpring2c%2Cprg-entcomp%2C1s-fcrypt%2Cprg-wtch-tg3%2Cprg-prmt-crtdv2%2Cprg-wpo-dbcg2%2Cprg-crsl-dr-sc-ctrl%2Cprg-1sw-oldcarscrintlads%2Cprg-1sw-intlsd2%2Cprg-1sw-prodcar%2Cprg-1sw-prodcarscr%2Cprg-1sw-shcanema%2Cprg-sh-fixprong1%2Cprg-sh-wnwmkt%2Cprg-1sw-cgrndc%2Cprg-1sw-splog%"
		"2Cprg-ctr-pnpc%2Cprg-1sw-hdukr%2C288gc813%2Cprg-wpo-stopwpocrs%2Cprg-upsaip-w1-t%2Cprg-feed2feed-t5%2Cprg-varfont%2Cprg-intapperr%2Cprg-upsaip-r-t%2Cads-msanapac%2Cprg-wx-anmpr%2C1s-contentview-1%2Cprg-wcm-istc%2Cmuidflt22cf%2C521f7706%2Ca83d7349%2Cprg-wx-sbn-vm%2Cprg-1sw-sagetrim%2Cprg-wtchbutton1%2Cprg-1sw-sbn-mm%2Cprg-1sw-c-linkacc%2Cprg-langdiscov%2Cprg-1sw-icwhp%2Cprg-ccmfa-t%2Chp-wea-locfcst2v%2Cprg-wx-cminitext%2C1s-rpssecautht%2Cprg-apilog%2Cprg-1sw-p1wtrclm%2Cprg-card-distpeh%2Cgbj35620%2"
		"Cmktautospgntncf%2Cprg-officecm-t1e%2Cprg-1sw-mbnodp%2Cprg-sh-newdl%2Cprg-wcard-distp%2Cprg-clb%2Cprg-1sw-mbcache%2Cmktautosnavalgn%2Cprg-spr-t-intl%2Cprg-spr-egreco%2Cprg-spr-emttof%2Cprg-spr-st-gmarketv2%2Cprg-anidelay-ro%2Cprg-anidelay%2Cprg-1sw-wf50c%2Cprg-1sw-pllmtrt&scn=APP_ANON&%24top=100&$filter=actionType+eq+%27Follow%27", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ntp.msn.com/", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_header("X-Client-Data", 
		"eyIxIjoiMiIsIjIiOiIxIiwiMyI6IjAiLCI0IjoiNDA1MjgyOTMzNTIxNDI0NDkyNyIsIjUiOiJcIkVSZG9HT2FNb0tDRThWOUt6ZURhZ1dSZG5FQzdGa2hWMmlOYWV4Y3RBSFk9XCIiLCI2Ijoic3RhYmxlIiwiNyI6IjEwMzUwODcxMTgzMzgiLCI5IjoiZGVza3RvcCJ9");

	web_add_header("X-Edge-Shopping-Flag", 
		"1");

	web_custom_request("data", 
		"URL=https://www.bing.com/profile/history/data?do=2&userAccountType=2", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ntp.msn.com/", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		EXTRARES, 
		"Url=/th?id=ORMS.cfa6772e70c22964f4ad1346a5258530&pid=Wdp&w=612&h=304&qlt=90&c=1&rs=1&dpr=1&p=0", "Referer=https://ntp.msn.com/", ENDITEM, 
		"Url=/th?id=ORMS.4bd34bc8a360ab7d5ead36a343079527&pid=Wdp&w=612&h=304&qlt=90&c=1&rs=1&dpr=1&p=0", "Referer=https://ntp.msn.com/", ENDITEM, 
		"Url=/th?id=ORMS.00f6de9af5afb36e64e61e172852f0d9&pid=Wdp&w=612&h=304&qlt=90&c=1&rs=1&dpr=1&p=0", "Referer=https://ntp.msn.com/", ENDITEM, 
		"Url=/th?id=ORMS.4649f3bd6d09de5451756ba2ac07dcaa&pid=Wdp&w=612&h=304&qlt=90&c=1&rs=1&dpr=1&p=0", "Referer=https://ntp.msn.com/", ENDITEM, 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABA2VjbgNkZXYMdmlydHVhbGVhcnRoA25ldAAAHAABAAApEAAAAAAAAEsADABHAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", ENDITEM, 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABA2VjbgNkZXYMdmlydHVhbGVhcnRoA25ldAAAAQABAAApEAAAAAAAAEsADABHAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", ENDITEM, 
		"Url=https://ecn.dev.virtualearth.net/REST/v1/Imagery/Map/roadondemandfull/12.950,77.630/7?mapSize=268,136&shading=terrain&key=AnTcaqBi2ypp0xI-OZNi4W_ik2KhjgpqioTAtXLC8GzkMBQRMlyxvxyTnd5b73im&c=en-in&maxAge=86400&st=me|lv:0_vg|v:0_nh|lv:1_pp|lv:1;lbc:FFFFFFFF;loc:75000000_trs|v:1;lv:0;sc:FF6B6B6B;fc:FF6B6B6B;strokeWidthScale:0.2_cst|v:1;fc:FF000000;strokeWidthScale:0.5_pt|v:0&ml=fg&shdw=true&logo=n&da=ro", "Referer=https://ntp.msn.com/", ENDITEM, 
		"Url=https://ecn.dev.virtualearth.net/REST/v1/Imagery/Map/RoadVibrant/12.93,77.61/12?ms=300,304&ml=TrafficFlow,Basemap,TrafficIncidents,OsmBuildings&key=AiiEtIMBa-OHub99K9Px16NjMPvRWEG5l33Ab4XeqA6PtM5GFwiGWBIroOWv4fNW&c=en-in&fmt=png&od=1&logo=n&da=ro&maxAge=1200", "Referer=https://ntp.msn.com/", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"frame");

	web_add_header("Origin", 
		"http://localhost:1080");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(15);

	web_submit_data("login.pl", 
		"Action=http://localhost:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userSession", "Value=134199.332037262zQAciHipVtVzzzzHtVtVHpcziif", ENDITEM, 
		"Name=username", "Value=jojo", ENDITEM, 
		"Name=password", "Value=bean", ENDITEM, 
		"Name=login.x", "Value=35", ENDITEM, 
		"Name=login.y", "Value=15", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		LAST);

	lr_end_transaction("login",LR_AUTO);

	lr_start_transaction("selectflight");

	web_revert_auto_header("Sec-Fetch-User");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	lr_think_time(30);

	web_url("Search Flights Button", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=search", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABBGVkZ2UJbWljcm9zb2Z0A2NvbQAAAQABAAApEAAAAAAAAFEADABNAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", ENDITEM, 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABBGVkZ2UJbWljcm9zb2Z0A2NvbQAAHAABAAApEAAAAAAAAFEADABNAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", ENDITEM, 
		"Url=https://edge.microsoft.com/autofillservice/v1/pages/ChRDaHJvbWUvMTAzLjAuNTA2MC41MxIsCUFCU6JtyxUKEgUNVGIprRIFDXudxKUSBQ0fOzmFEgUN2oWZYRIFDamOSr0=?alt=proto", "Referer=", ENDITEM, 
		LAST);

	lr_end_transaction("selectflight",LR_AUTO);

	lr_start_transaction("continue");

	web_add_header("Origin", 
		"http://localhost:1080");

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(29);

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
		"Name=depart", "Value=London", ENDITEM, 
		"Name=departDate", "Value=07/02/2022", ENDITEM, 
		"Name=arrive", "Value=Sydney", ENDITEM, 
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

	lr_start_transaction("logout");

	web_revert_auto_header("Sec-Fetch-User");

	lr_think_time(36);

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