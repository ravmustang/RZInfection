![ArmA 1.68](https://img.shields.io/badge/ArmA%203-1.68-blue.svg) ![Exile 1.0.2](https://img.shields.io/badge/Exile-1.0.2%20Kohlrabi-yellowgreen.svg) ![eXpoch Beta](https://img.shields.io/badge/eXpoch-Public%20Beta-green.svg) ![Build Status](https://img.shields.io/badge/Custom%20Build-passing-38AA38.svg)

# eXpoch Infection

Allows for use of antiviral pills and injector within Exile and eXpoch and any other Exile variants
Configure antivirals for use with Exile Inventory Consume and Health System
Create override for non-infection use of antivirals

ClassNames:

			rzinfection_antivirus_pills
			rzinfection_antivirus_injector

## Credits

- DonkeyPunch Development Team
- DirtySanchez
- Patrix87
- ExileMod Development Team
- Ryan Zombies Development Team
- and anyone else I might not have listed here!
			
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

## Licensing

1. Listed Mods uses and has its own licensing included in its addon mod, please refer to that for any questions concerning Listed Mods
	- Exile
	- Ryan Zombies 

2. This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License.
	- To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
	- You can use it, abuse it and modify it with proper "Credits" of course for your server.
	- These "Credits" will come in the fashion of either "DonkeyPunch Community Gaming" or "DirtySanchez"
	- These "Credits" will also include the website for download and support should anyone else want to use it. http://DonkeyPunch.INFO	
	- Personal feelings and emotional responses will not come from this work or its use in the public.

3. You are not allowed to sell this "Script" or provide any service to install it.
	- You are not allowed to add it to another named script and sell that script with this work included.
	- "WE" the authors reserve the right to disallow certain individual communities and persons from using, hosting, modifying, selling, distributing and leave this list open ended so that all aspects of disllowed usage can be added at any time.
	- "WE" will not use this aspect against anyone unless their actions in the "Arma" or internet communities displays that of a greedy, profiteering nature and not one of advancement of "Arma" or the internet communities.

4. Definitions
	- "Arma" being the product made by Bohemia Interactive and purchased through BIS Store or Steam with a valid legal License for use and ownership.
	- "WE" being any individual that is a part of DonkeyPunch Community Gaming Development Team.
	- "Script" being any work, "code", comments not a part of the original program or software. 
	- "Code" does not limit the definition to only the parts that operate within "Arma", but is a broad term used to define the entire product within including all comments and remarks made by "WE".
	- "Credits" being the author("DonkeyPunch Community Gaming" or "DirtySanchez") and website(http://DonkeyPunch.INFO)


