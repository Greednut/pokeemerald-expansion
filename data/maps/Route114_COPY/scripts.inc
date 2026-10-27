Route114_COPY_MapScripts::
	.byte 0

TheDock_EventScript_Bugman::
	msgbox TheDock_Text_BugmanTalks, MSGBOX_NPC
	end

TheDock_EventScript_TestSign::
	msgbox TheDock_Text_TestSign, MSGBOX_SIGN
	end

TheDock_Text_BugmanTalks:
	.string "Technology is incredible!\n"
	.string "ROM hacking allows me to talk normally!\p"
	.string "I will now loop my dialogue.$"

TheDock_Text_TestSign:
	.string "TEST SIGN\n"
	.string "“A sign used for testing.”$"