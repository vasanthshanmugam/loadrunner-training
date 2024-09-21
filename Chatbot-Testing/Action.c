//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	lr_start_transaction("Transaction 1");
	truclient_step("3", "Navigate to 'https://advantageonlinebanking.com/'", "snapshot=Action_3.inf");
	lr_end_transaction("Transaction 1",0);
	truclient_step("4", "Wait 10 seconds", "snapshot=Action_4.inf");
	lr_start_transaction("Transaction 2");
	truclient_step("6", "Click on Live Support", "snapshot=Action_6.inf");
	lr_end_transaction("Transaction 2",0);
	truclient_step("7", "Wait 10 seconds", "snapshot=Action_7.inf");
	lr_start_transaction("Transaction 3");
	truclient_step("8", "Click on textbox (1) textbox", "snapshot=Action_8.inf");
	lr_end_transaction("Transaction 3",0);
	truclient_step("9", "Wait 10 seconds", "snapshot=Action_9.inf");
	lr_start_transaction("Transaction 4");
	truclient_step("10", "Click on element (3)", "snapshot=Action_10.inf");
	truclient_step("11", "Type Yes in textbox (1) textbox", "snapshot=Action_11.inf");
	lr_end_transaction("Transaction 4",0);
	truclient_step("12", "Wait 10 seconds", "snapshot=Action_12.inf");
	lr_start_transaction("Transaction 5");
	truclient_step("13", "Click on element (3)", "snapshot=Action_13.inf");
	truclient_step("14", "Type Banking in textbox (1) textbox", "snapshot=Action_14.inf");
	lr_end_transaction("Transaction 5",0);
	truclient_step("15", "Wait 10 seconds", "snapshot=Action_15.inf");
	lr_start_transaction("Transaction 6");
	truclient_step("16", "Click on element (3)", "snapshot=Action_16.inf");
	truclient_step("17", "Type test@gmail.com in Your email emailbox", "snapshot=Action_17.inf");
	truclient_step("18", "Click on Submit", "snapshot=Action_18.inf");
	lr_end_transaction("Transaction 6",0);
	truclient_step("19", "Wait 10 seconds", "snapshot=Action_19.inf");
	lr_start_transaction("Transaction 7");
	truclient_step("20", "Type 7400123456 in 7400 123456 textbox", "snapshot=Action_20.inf");
	truclient_step("21", "Click on Submit", "snapshot=Action_21.inf");
	lr_end_transaction("Transaction 7",0);
	truclient_step("22", "Wait 10 seconds", "snapshot=Action_22.inf");
	lr_start_transaction("Transaction 8");
	truclient_step("23", "Click on textbox (1) textbox", "snapshot=Action_23.inf");
	truclient_step("24", "Type thanks in textbox (1) textbox", "snapshot=Action_24.inf");
	truclient_step("25", "Click on element (3)", "snapshot=Action_25.inf");
	lr_end_transaction("Transaction 8",0);

	return 0;
}
