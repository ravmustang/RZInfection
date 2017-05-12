/////////////////////////////////////////////////////////////
////                                                     ////
////                                                     ////
////        RZ Infection for Exile v0.2                  ////
////		                                         ////
////		                                         ////
////                                                     ////
////	    Created by =RAV=MusTanG and Patrix87         ////
////                                                     ////
////                                                     ////
/////////////////////////////////////////////////////////////

Server Side Installation:

Place @RZInfection in your server directory
Load the mod "-mod=@exile;@RZInfection;"
///////////////////////////////////////////
Place the Override folder in your mission
Edit your config.cpp in your mission 
inside of here:
class CfgExileCustomCode 
{

	//RZ Infection Addon ADD THESE LINES :)
	ExileClient_object_item_consume = "Overrides\ExileClient_object_item_consume.sqf";
};
///////////////////////////////////////////
Add the following two classes

rzinfection_antivirus_pills
rzinfection_antivirus_injector


To your:
loot table(server side config)

**CfgTraderCategories**
**class FirstAid**
Add these classnames to items[]
            "rzinfection_antivirus_pills",
            "rzinfection_antivirus_injector"

**CfgExileArsenal**
Add these lines - edit them if you need to
class rzinfection_antivirus_pills                { quality = 1; price = 1; sellPrice = 1; };
class rzinfection_antivirus_injector                { quality = 1; price = 1; sellPrice = 1; };

///////////////////////////////////////////
Adding in 'zedkills' column for saving with ExileZ v2.7

open up your database editor like MySql or any one you like.
run this query on your exile table

ALTER TABLE `account`
	ADD COLUMN `zedkills` int(11) unsigned NOT NULL DEFAULT '0' AFTER `kills`;
	
///////////////////////////////////////////