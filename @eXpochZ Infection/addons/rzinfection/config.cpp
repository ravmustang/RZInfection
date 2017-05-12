////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////
// 	RZ Infection for Exile
// 	Mod by DirtySanchez and Patrix87
//	config.cpp
////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class rzinfection
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"exile_client","exile_assets","Ryanzombies"};
	};
};
class CfgMagazines
{
	class Exile_AbstractItem_Interaction_Consuming_Healing;
	class Exile_AbstractItem;
	///////////////////////////////
	//Drink Items
	///////////////////////////////
	class rzinfection_antivirus_pills : Exile_AbstractItem
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Antiviral Pills";
		descriptionShort = "Temporarily, prevent infection and alleviate the symptoms of an infection. Side-effects possible";
		author = "Sanchez";
		model = "\Ryanzombies\pillbottle.p3d";
		picture = "\rzinfection\images\av_pills_ca.paa";
		icon = "\rzinfection\images\av_pills_icon.paa";
		mass = 3;
		mapSize = 0.034;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Consuming_Healing{};
		};
	};
	class rzinfection_antivirus_injector : Exile_AbstractItem
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Antivirus Injector";
		descriptionShort = "Cure the current infection. Side-effects possible";
		author = "Sanchez";
		model = "\Ryanzombies\injector.p3d";
		picture = "\rzinfection\images\av_injector_ca.paa";
		icon = "\rzinfection\images\av_injector_icon.paa";
		mass = 5;
		mapSize = 0.034;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Consuming_Healing{};
		};
	};
};
class cfgMods
{
	author = "DonkeyPunch.INFO";
	timepacked = "1337000000";
};
//};
