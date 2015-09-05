#!/bin/bash
#This file was created on 09/05/2015 by mauro

#This script enables you to easily change the layout of your keyboard

clear

while true 
do
echo "#####################################"
echo "Choose one of the options:"
echo "Print your keyboard settings: P"
echo "List available XkbModels: LM"
echo "List avaiable XkbLayouts: LL"
echo "List available XkbVariants: LV"
echo "List available XkbOptions: LO"
echo "Change keyboard settings for current Session: SC"
echo "Change keyboard settings permanently: SP"
echo "Help: H"
echo "Clear: C"
echo "Quit: Q"
echo "#####################################"
read ASW

case $ASW in
	P)
		setxkbmap -print -verbose 10
	;;

	"LM")
		localectl list-x11-keymap-models
	;;

	"LL")
		localectl list-x11-keymap-layouts
	;;

	"LV")
		localectl list-x11-keymap-variants
	;;

	"LO")
		localectl list-x11-keymap-options
	;;

	"SC")
		echo "Set XkbModel: SM"
		echo "Set XkbLayout: SL" 
		echo "Set XkbVariant: SV"
		echo "Set XkbOption: SO"
		read ASW1
			
			case $ASW1 in
				"SM")
					echo "Choose XkbModel: "
					read ASW2
					setxkbmap -model $ASW2 
				;;

				"SL")
					echo "Choose XkbLayout: "
					read ASW2
					setxkbmap -layout $ASW2
				;;
				
				"SV")
					echo "Choose XkbVariant: "
					read ASW2
					setxkbmap -variant $ASW2
				;;

				"SO")
					echo "Choose XkbOption: "
					read ASW2
					setxkbmap -option $ASW2
				;;
					
				*)
					echo "Wrong option."
				;;
			esac
	;;

	"SP")
		echo "Set XkbModel: SM"
		echo "Set XkbLayout: SL" 
		echo "Set XkbVariant: SV"
		echo "Set XkbOption: SO"
		read ASW1
			
			case $ASW1 in
				"SM")
					echo "Choose XkbModel: "
					read ASW2
					localectl --no-convert set-x11-keymap $ASW2
				;;

				"SL")
					echo "Choose XkbLayout: "
					read ASW2
					localectl --no-convert set-x11-keymap $ASW2
				;;
				
				"SV")
					echo "Choose XkbVariant: "
					read ASW2
					localectl --no-convert set-x11-keymap $ASW2
				;;

				"SO")
					echo "Choose XkbOption: "
					read ASW2
					localectl --no-convert set-x11-keymap $ASW2
				;;
					
				*)
					echo "Wrong option."
				;;
			
			esac
	;;

	H)
		echo -e "\nXkbModel selects the keyboard model. This has an influence only for some extra keys your keyboard might have. The safe fallback are pc104 or pc105. But for instance laptops usually have some extra keys, and sometimes you can make them work by simply setting a proper model.\n"

		echo -e "\nXkbLayout selects the keyboard layout. Multiple layouts may be specified in a comma-separated list, e.g. if you want to quickly switch between layouts.\n"

		echo -e "\nXkbVariant selects a specific layout variant. For instance, the default sk variant is qwertz, but you can manually specify qwerty, etc.\n"

		echo -e "\nXkbOptions contains some extra options. Used for specifying layout switching, notification LED, compose mode etc.\n"

	;;

	C)
		clear
	;;

	Q)
		exit
	;;

	*)
		echo "Wrong option."
	;;

esac

done
