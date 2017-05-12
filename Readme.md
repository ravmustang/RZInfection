![ArmA 1.68](https://img.shields.io/badge/ArmA%203-1.66-blue.svg) ![Exile 1.0.2](https://img.shields.io/badge/Exile-1.0.2%20Kohlrabi-yellowgreen.svg) ![Build Status](https://img.shields.io/badge/Custom%20Build-passing-38AA38.svg)

# eXpoch Infection

Allows for use of antiviral pills and injector within Exile and eXpoch and any other Exile variants
Configure antivirals for use with Exile Inventory Consume and Health System
Create override for non-infection use of antivirals

ClassNames:

			rzinfection_antivirus_pills
			rzinfection_antivirus_injector

## Server Side Installation:

Place @RZInfection or (whatever you name the mod folder)in your arma 3 server directory
Add to startup parameters to load the mod 
		"-mod=@exile;@RZInfection;"

## Mission File Installation

1. Place the Overrides folder in your mission

2. Edit config.cpp >> CfgExileCustomCode


		//RZ Infection Addon ADD THESE LINES :)
		ExileClient_object_item_consume = "Overrides\ExileClient_object_item_consume.sqf";

3. Edit pricing and add to config.cpp >> CfgExileArsenal 

			class rzinfection_antivirus_pills                { quality = 1; price = 1; sellPrice = 1; };
			class rzinfection_antivirus_injector                { quality = 1; price = 1; sellPrice = 1; };

4. Add these to config.cpp >> CfgTraderCategories >> FirstAid >> items[]

            "rzinfection_antivirus_pills",
            "rzinfection_antivirus_injector"




