MauvilleCity_PokemonCenter_1F_MapScripts:: @ 8210E5B
	map_script 3, MauvilleCity_PokemonCenter_1F_MapScript1_210E66
	map_script 5, MauvilleCity_PokemonCenter_1F_MapScript1_277C30
	.byte 0

MauvilleCity_PokemonCenter_1F_MapScript1_210E66: @ 8210E66
	setrespawn 5
	call MauvilleCity_PokemonCenter_1F_EventScript_2718DE
	goto MauvilleCity_PokemonCenter_1F_EventScript_210E74
	end

MauvilleCity_PokemonCenter_1F_EventScript_210E74:: @ 8210E74
	special sub_8120B5C
	end

MauvilleCity_PokemonCenter_1F_EventScript_210E78:: @ 8210E78
	setvar VAR_0x800B, 1
	call MauvilleCity_PokemonCenter_1F_EventScript_27191E
	waitmessage
	waitbuttonpress
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_210E86:: @ 8210E86
	msgbox MauvilleCity_PokemonCenter_1F_Text_210EA1, 2
	end

MauvilleCity_PokemonCenter_1F_EventScript_210E8F:: @ 8210E8F
	msgbox MauvilleCity_PokemonCenter_1F_Text_210F06, 2
	end

MauvilleCity_PokemonCenter_1F_EventScript_210E98:: @ 8210E98
	msgbox MauvilleCity_PokemonCenter_1F_Text_210F8A, 2
	end

MauvilleCity_PokemonCenter_1F_Text_210EA1: @ 8210EA1
	.string "That man over there, he says weird\n"
	.string "things!\p"
	.string "He’s funny in a weird way.\n"
	.string "I doubt I’ll forget about him!$"

MauvilleCity_PokemonCenter_1F_Text_210F06: @ 8210F06
	.string "When I accessed the RECORD CORNER,\n"
	.string "the data for what’s hot in HUHFORD\l"
	.string "got updated.\p"
	.string "Now that bit of data is the same\n"
	.string "as my friend’s!$"

MauvilleCity_PokemonCenter_1F_Text_210F8A: @ 8210F8A
	.string "A RECORD CORNER opened upstairs in\n"
	.string "the POKéMON CENTER.\p"
	.string "I don’t know what it’s about, but it\n"
	.string "sounds fun. I’ll go check it out!$"

