#include <iostream>
#include <string>
#include <Windows.h>
#include <chrono>

using namespace std;



string inventory[8] = { " ", " "," ", " ", " ", " ", " ", " ", };

// Function to choose a character
string CharacterSelect() {
	string characterChoice;
	cout << "Choose your character:" << endl;
	cout << "1. Sea Horse" << endl;
	cout << "2. Puffer Fish" << endl;
	cout << "3. Crab" << endl;
	cout << "Enter 1, 2, 3,: ";
	getline(cin, characterChoice);

	if (characterChoice == "1") {
		return "Crab";
	}
	else if (characterChoice == "2") {
		return "Sea Horse";
	}
	else if (characterChoice == "3") {
		return "Puffer Fish";
	}
	else {
		cout << "Invalid choice, defaulting to Crab." << endl;
		return "Crab";
	}
}

//declaration
void TreasureChest();
void shop();

//global variables
int money = 100;


// Function to display ASCII art at the beginning
void DisplayASCIIArt() {
	cout << "                                                                                    " << endl;
	cout << "                              ..                                                    " << endl;
	cout << "                              .+-..                               .:..               " << endl;
	cout << "                              .+++..                             .-+..   ..:...        " << endl;
	cout << "                             .:++++:                            .+++-.    .:++=.       " << endl;
	cout << "                        ..-++=:+++++..                        ..++++-.      -+++-..    " << endl;
	cout << "                      ..=+++=.=+++++-.                        .-+++++-.     .=++++..   " << endl;
	cout << "                     .=++++:.-++++++=.                        .=+++++:.      .:++++:   " << endl;
	cout << "                  ..:++++=...-++++++-.                        .-+++++++.     ..-++++:.  " << endl;
	cout << "                  .=++++-.. -+++++++:.                        .:++++++=.        -++++:. " << endl;
	cout << "                 .=++++-  ..-+++++++..                        ..++++++++:.      .=++++. " << endl;
	cout << "                .=++++:.  .=+++++++=                            :++++++++-.     .:++++=. " << endl;
	cout << "              ..=++++:.  .=++++++++:                            .++++++++=.       .++++: " << endl;
	cout << "             ..=++++.....-++++++++=.                             :+++++++++:...   .=++++.. " << endl;
	cout << "            ..-++++=.::+++++++++++.                              .:+++++++++++.....+++++-. " << endl;
	cout << "          ..=++++++++++++++++++++:.                               .-+++++++++++++++++++++-. " << endl;
	cout << "          .=++*#*+++++++++++++++:.                                ..-++++++++++++++++*#+++-. " << endl;
	cout << "          .*#*+++++++++++++++++:      .....               .....     .-++++++++++++++++++##*. " << endl;
	cout << "          :*#*++++++++++++++++:.    .=+++++.             :+++++:     ..+++++++++++++++++*#*. " << endl;
	cout << "          .++**+**+++++++++++..     -+%@%=%+..          :+%@%-%+..    ..-+++++++++++***#*++: " << endl;
	cout << "          .+++++**+++++++++:        :+%@@@#+..          :+%@@@%+..       .=+++++++++**+++++. " << endl;
	cout << "          .-++++++++++++=..         .-++++=.            .:+++++:          ..-++++++++++++-.. " << endl;
	cout << "            .+++++=====+=.           ...:-.   .........  .:-....            .=======++++=. " << endl;
	cout << "            =*++++++==+++.              :=..:--======+=--:+-                :+++=+++++++*-. " << endl;
	cout << "            +##*++++*++++.            ..:=======+*==*+======-...            :++++*++++#*%-. " << endl;
	cout << "            -%%#%#+++++**.           .:==========+##+==========:..          .#*+++++%%#%#: " << endl;
	cout << "            .*%%%%%##%%+..        ..-============================:.          .*%%%%%%%%%-. " << endl;
	cout << "             .-*%#**++++:.      ..-================================:..      .=++++**%#+:.. " << endl;
	cout << "              ..%#+++++*=.   ..:======================================:.    .+*++++*%+. " << endl;
	cout << "                =%*+++*#..=++++========================================+++=: =#*++*##:. " << endl;
	cout << "                .+%##%##*.:++++=======================================++++-.-###%#%#:. " << endl;
	cout << "             .-*##*#%#####*+***++=====================================+**++#######*+-.. " << endl;
	cout << "            .:*#############*****+==================================+****########*####*. " << endl;
	cout << "            .++++:....:#######*****+===============================****#######=..:##**+. " << endl;
	cout << "            .+++-.   ..=+*#%#######**+=========================+***########*+:.   .:+++: " << endl;
	cout << "            :++=....=++++++-..:-+#%##**#***====+=========+*******#%%*..-=+++++++-...=++: " << endl;
	cout << "            :++: .=+++++-.  .-++++=#%%%%%%####%%#****###**#%%%%%%%#*++=.  .:+++***: :++- " << endl;
	cout << "            :+-..+###*:.  .:++++=...:#%%%%%%%%%%%%%%%%%%%%%%%%%%#:.-++++-.  ..+####-.++: " << endl;
	cout << "            :+=.:###*:.  .-++++:..   ..=#%%%%%%%%%%%%%%%%%%%%#=...  .+**+=.  ..=***:.-+: " << endl;
	cout << "            .-=. -+++:.  .*##*-          .:=*##%%%%%%%%##*=:         .+***+.  .+++=..+=. " << endl;
	cout << "             .:. .-+++.  =###*.               ..........             .:####: .:+++. .=. " << endl;
	cout << "              .. ..=++=. .+*++=.                                     .-+*##: .=++:. ... " << endl;
	cout << "                    -++:  .-++++..                                  .=+++=.  :++:. " << endl;
	cout << "                    ..++-.. .-+++:.                               ..++++:...:++. " << endl;
	cout << "                      .:+=.   .-++=...                           .-+++.   .-+:. " << endl;
	cout << "                         ...    .:=++-.                       .:=++-..   ... " << endl;
	cout << "                                  ......                    ..::....                    " << endl;






	cout << ".........            .-+-......" << endl;
	cout << "                         ....       .--..   . ..+...    .:-:=....... " << endl;
	cout << "                         .+=       .:-=.......=:+     ..+::+.. .." << endl;
	cout << "                       .:-:-.......:--+++++++*++...:-==++++=.... . " << endl;
	cout << "             .    ...=*++++********++=--:...:-=++*****************-....:+*.. " << endl;
	cout << "             ==. .=*+=-:..:-==++++===---:::::---==++****+*++*+*****#**+-=... " << endl;
	cout << "             =:=-++==---------======------------====+++++:+====+++***###*+.. " << endl;
	cout << "             =-++==-----------------------------========-===-=====+++***###*:. " << endl;
	cout << "            .++==--------------------------------======---------====+++****##*-.. " << endl;
	cout << "          ..+==---------------::--------=++=---------------------=++=++++****##*:......... " << endl;
	cout << "       .=..+==-+@@@@@#----------------#%===+@#=----------------==::++=++++=--:-+*#*++++*:.. " << endl;
	cout << "       .=-*===#:.....+@-------------=#:......:%=-----====-------:-=====+++++****##***+.... " << endl;
	cout << "       .:*===+....::.:-%------------+....:-...:#------:--==+-------=====++++++***###=. . .. " << endl;
	cout << "       .=+==+:..:=**#*:*-----------*:..-+##*#:.-*=-----------------======++++++***###+.. " << endl;
	cout << "       -+==+-::*:%@@@#+=+=========-=::*=@@@@##::#===---------------=====++++++++***###*+=.. " << endl;
	cout << "      .++==#-:+=%@@@@%*+==========+-:*=@@@@@@#+:*=====------------=====-:.-*++++==**##**++*.. " << endl;
	cout << "      -++++*-:+-@@@@@#++==========+=-*=@@@@@@#+-#======------:.-+======+++++++++=-::+##*=:... " << endl;
	cout << "     .=+++++=:-=+@@@#*=++++++++++===-+-#@@@@##-=*======------===*+=====++++++++++++***#**... " << endl;
	cout << "    .+++++++*-:-+==++=+++++++++++++*-:+-+@%+++-*+++====------========+++=:::::::+++***##*: " << endl;
	cout << "  ..-:::::::--=-::--*+++=------=++++#-:=*++#:-*++++++===-----===++++++-::-:....::+****###=.      . .---=.. " << endl;
	cout << " .::::::.....::::=++=-:--++++------=+**=--::::::::--=++=-::.:===++++---::.......:+*****##**=....:-::::::-. " << endl;
	cout << " :-:::........:::::--:=#*++++***----=-:::::.......::::-======+++++==-::--:......:******##*...:-::::.:::::. " << endl;
	cout << " :-:::..........:::::-+=-=+++++++*+--::::............::::-++=----=++=-:::........-##****##*--:--:......:-:.. " << endl;
	cout << "-::::.........::::::-*===++++++++*#:::::............::::--=+=---:-*==-::........-##*****#*=-:::.......::::- " << endl;
	cout << "-:::::........::::::**+++%%%%%*+=+**::::::.........::::::---+=----+==-----......-##*****#*==-::.......::::- " << endl;
	cout << "=:::::.........:::::**+*#%%%%%%*+=++*::::::.......::--:::----+===+=-----::......-**+====+*=--:-:......::-:. " << endl;
	cout << "-::::::........::::::##%%%%%%%%%*++**#*::..........:::::--::::=++*++-::::::....::**++===+*+-:.........:::-. " << endl;
	cout << " :-::::::.......::::::*****%%%##*#####%=..............::::::::::-+++++++=::::::::-***+***#==::..::.....::::- " << endl;
	cout << ".:-:::::::.....:::::-*:=+**#*+++++**#:................::::::::::::=++++++++=---+***++****=-:-.........::--. " << endl;
	cout << "...-:::::::....::::::*==++***++=++**:..........:-.......::::::::::::-=+++++++++++++++***-----:::......:-... " << endl;
	cout << "..::--::::-::.::::::::+*******+**#:...........--.:-.....:::::::::::-=-::-=++++++++++++==..-:::-.......:-... " << endl;
	cout << "..-.:--:::-:::::::::::::-+*##*+-............................:::::----::::::-----------=....-:::::...:::::. " << endl;
	cout << ".:--..-:::--:::::::::::::..............................::-:..:::::::::::::::---=-----=-=....:::::::::::-.. " << endl;
	cout << ".......-::-:::::::...:..............:...:...............:::-:.:::::::::::::::-------=.... ....-:::-::... " << endl;
	cout << "... ...:--::::::::::.................:..:......................::::::::::::::----===-...      ..-:-..... " << endl;
	cout << "       :.:-::::::-:::::.....:.........-.:......................::::::---:::----===-:---..        .... " << endl;
	cout << "      .-..--::::::-:::::.-.-.....................::..........:::::----:::----====:.. ... " << endl;
	cout << "      .::-..--::::::::::::-:.......................:-:......:::::::::::----====---:... " << endl;
	cout << "       :-.....=:::::--:::::::....:.-.............::::--..::::::::::::---======---::.. " << endl;
	cout << "        ....  ..-::::::::::::::::.-::-..............::::::::::::::----====-=.. " << endl;
	cout << "                .---:::::::::::::::::--:.....:.:::::::::::::::-----====-==--.. " << endl;
	cout << "                ..=.=--::::::::::::::::::::::::::::::::::------=======-....... " << endl;
	cout << "                  .--..----:::::::::::::::::::-:::::----=========-----.... " << endl;
	cout << "                        ...==-::-::::::::::--:-=--------===---=....-====-. " << endl;
	cout << "                          ..::..-------:::----------------... " << endl;
	cout << "                           .--.   .....:--=..........----. " << endl;
	cout << "                             ...       ..---.         ..:-.. " << endl;
	cout << "                                        ..:-:             . " << endl;




	cout << "............ ............. ................................................. .........................." << endl;
	cout << "..... ............. ............. .........................:**=............................. .........." << endl;
	cout << "... ........ ............. ........ ...  ... ........ .....*++*-............ ............. ............" << endl;
	cout << "...........................................................+++#-......................................." << endl;
	cout << "...........................................................=++*-......................................." << endl;
	cout << "......................................-++++*...............=+++-......................................." << endl;
	cout << "......................................=#*+++-..............=+++=......................................." << endl;
	cout << "............ ............. ............:#**++:... ... .....*==++........ ... ............. ........ ..." << endl;
	cout << "..................................... ..=#**++:...........-===+*:.................=-..................." << endl;
	cout << ".........................................+#++=*:.........-=:--*#+..............:+*#=..................." << endl;
	cout << "..........................................***+=+:......=-::-++=**-=..........+==**-...................." << endl;
	cout << ". ........ ... .... ................. ....:#**+===-:::::-=**++++++:-==..:-+====**:................... ." << endl;
	cout << "... ........ ............. .......  ......:#++=======+++=--+++-=+=*+=::---::-+**:......... ........ ..." << endl;
	cout << "..........................................:*++=::-====-----++=+========++=++=+*:......................." << endl;
	cout << "..........................................+++====-====-------=========:-*+=+*++........................" << endl;
	cout << ".........................................+===----------------=+++=====++++++*=+-......................." << endl;
	cout << ".......... ........ ..................-++==--------:::::--------::--==+++++**+--=:......:==:..........." << endl;
	cout << "............ ............. ........*==+----==*==++--------:------:-======--****-------:-=+#:....... ..." << endl;
	cout << "...................................=*+==-=+#*%%@@%==+=-:-=-----==---======***+=#+.:-====+*:............" << endl;
	cout << "...................................:#+=-=+*%%@#=.-%@%==-:=======-:-+++=====***+*+.======++............." << endl;
	cout << "...................................-*==+=+#@#@@@%@@@*%++++=====--=+..::+====++****-==::--+:............" << endl;
	cout << "...................................*--=+++*@+*@@@@%-##+++++====---=+=::=++==+******=:::::-+............" << endl;
	cout << ".................................-+--=++++*#%%%%###%#+*+----======--++++*+===*+*+**+===-:::-=-........." << endl;
	cout << "........==:...................:==---=====+****#####**++--:--====++--+=++**==++++++*+-=--:::--=*........" << endl;
	cout << "......+*++++:.............-------=-----=====*****##*++=----===+++++++++**++=*++++++*::::+++++#-........" << endl;
	cout << "......%**+*+===-..:-===---------::::::::::=**+++**+++=----====+++++-::*#**-*+++++*+*=+*+===++-........." << endl;
	cout << ".......:##*+*+--=-===----::::.::=+**##%%%%##*##*=++++=======+++++**--*#*=-*+*--**+-*#++----++.........." << endl;
	cout << ".........:%*++**-::::-=+*##%%####*******************++++*=:-###%%=-+*#*=+***-:******#+*::::-=-..... ..." << endl;
	cout << "...........*++++*****##**+++*#%%#*++++++++*%#**********-::+%#**=--*#++==+**-:*#**#**#+++=-:--==........" << endl;
	cout << "...........:#+++=*#*++##+=:..................:#%****#+-:=%#*****%*+===+**=::###*=**#==--------==*......" << endl;
	cout << "............@==:###+:..........................+%#*++=*#*##%@%*=====+*#=::-#**#*+###=*****++++*-......." << endl;
	cout << "  ... ......#%%#%*..... .... .... ... .............:+@@@@%#*===+***#+-:::=#*******#+#*====++++:...... ." << endl;
	cout << "..............-=:...................................-@#%%%%%%%%%*=-----:*******###%+*++=====+.........." << endl;
	cout << "....................................................+%%%#%%%#******+=--=++**==###%-*+--:-=+*:.........." << endl;
	cout << "...............................................-#*+==*%##*****++====-=-:-+**####%**++-::-==*=.........." << endl;
	cout << "...............................................#####+========++=----==.=#***##*#*-#++++=-===+:........." << endl;
	cout << ". ... ........ .... ........  ... ............+###*++***==------:--==+#*+**##*#%-#+--::--===-+:....... " << endl;
	cout << "............ .............................*==+#*++=+======---=-::-=-*++++=+*##%:###***+**++**+:........" << endl;
	cout << "..................................... ...-**=--====-----::----::::=:=#=+++****=##*-:-==++**:..........." << endl;
	cout << ".........................................*****=::::::-----::::--:-**++++++*+*=+#*===--=+#-............." << endl;
	cout << "............ ............. ............:*+===++**++==-:::::.:=--=+++++++:-**=+%=::---=+*-.......... ..." << endl;
	cout << ". ... ........ .... .... ...........:-=++=-----============:-::.*++++******+-%%%%*+====*-.............." << endl;
	cout << ".... ....... ......................++-:::--------------------=+**+++***+++*-%%:....-+*++............... " << endl;
	cout << "...................................+**=:::-----------::------=++++*******#-%%@-.......::=-............." << endl;
	cout << "..................................:+*++*--::::::::--------=+++++++****###*+%@-....:-=+*+=*............." << endl;
	cout << "..................................*+==++*****===--::::--=-::=*+++=###*###:%%%%%%*****++==*............." << endl;
	cout << " ............. .... .... ........================-------=++***++*#######*#%%%#**+++==-===+:........... " << endl;
	cout << "............ ............. .....++======----------------==++*++*#*#####**%%%########**++=#......... ..." << endl;
	cout << "...............................%*-----====-----=--:-----=++++++****####*#%#%%======+====++............." << endl;
	cout << "................................#%*-:::---------:::--=-+:.-++++*#######*%%%#==*####**++=#:............." << endl;
	cout << "................................#####=::::::::::::::-==+--*++++*########%%#####*+++++++*-.............." << endl;
	cout << ".......... ... .................+######%%#****+==+=:-===+++++++*#*##*###%%%#*********+*.............." << endl;
	cout << "................................-#*****#*****++++++========+++++*******#@%#%#%#*****##+................" << endl;
	cout << "................................:#*******+===============:-====******###-...=#*##***#:................." << endl;
	cout << "................................:#**********+==========++-+====*#******%-.....+#***#-.................." << endl;
	cout << "............ ...................-#*********+++====--===+++=====*###*+**#*... ..-##=................ ..." << endl;
	cout << ". ............ .... .............:%*=-==+++=-:::----=+++++++++++*###***#*........:.......... .... ...." << endl;
	cout << "............ ......................+%%%%%%*+*#%%##***++++=+=+++++=+****#-......:-++#:.................." << endl;
	cout << "....................................-%##########****+++*-:*+++++++++****#*##**+++++#+.................." << endl;
	cout << "......................................###########*****+*##**+==+==+++=++*%%%%###**#:.................." << endl;
	cout << ".......................................##**######*#****##***#=:-++=++=:++#%%%%%#****..................." << endl;
	cout << "  ............ .... .... ..............-#*--=+*++*#%%%%####**###*=+=+++++*%#%******+........ .... ...." << endl;
	cout << "... ........ ............. ........ ....##*%###%%##############***+==+++=*+#######+....... ........ ..." << endl;
	cout << "............................................:####%%%#####***%%#%#=**==++=-++*#%##%:...................." << endl;
	cout << "...............................................*##%#+=+#%%#########*====++++++=*+......................" << endl;
	cout << "................................................-%%%%#####*+*%%%%%%*=====++++**........................" << endl;
	cout << ". ... ............. .... ........ ... ...............:#%*+%%%%%####*%======*===%-........... .........." << endl;
	cout << ".......................... .......................... ..*%%#%#*##%%#*#=====*+==#-......... ............" << endl;
	cout << ".........................................................:...-@%%***#**====+*++#-......................" << endl;
	cout << "...............................................................+%%#%%#*+===+#**+*#....................." << endl;
	cout << "................................................................=%#*****+=+++**+**....................." << endl;


	cout << endl;
}











int timeLeft = 360; //this is how much time on the timer 600 seconds = 10 minutes
const int TIME_LIMIT = 360;





int main() {


	auto start = chrono::steady_clock::now();


	system("color 34");

	DisplayASCIIArt();

	//local variables
	int currentRoom = 1;

	string input;

	// Choose a character
	string character = CharacterSelect();
	cout << "You are now a " << character << " exploring the underwater pipe." << endl;

	cout << "Welcome to the Rusty Pipe Adventure! You are exploring rooms inside a rusty pipe deep in the ocean." << endl;
	cout << "Your goal is to collect items and navigate through the rooms. You can type 'inventory' to see your collected items, or use 'forward' and 'backward' to move." << endl;

	while (currentRoom != 10 && timeLeft >= 0) { //GAME LOOP
		auto now = chrono::steady_clock::now();
		timeLeft = TIME_LIMIT - chrono::duration_cast<chrono::seconds>(now - start).count();
		cout << "Time Left:" << timeLeft << endl;
		switch (currentRoom) {
		case 1:
			Beep(100000, 10000);
			cout << "You are in a small, dimly lit chamber. The walls are covered in barnacles, and a faint sound of water trickles through. There's a cracked shell on the ground." << endl;
			if (inventory[0] == " ") {
				inventory[0] = "CrackedShell";
				cout << "you picked up a cracked Shell" << endl;
			}
			inventory[0] = "CrackedShell";
			cin >> input;
			if (input == "forward")
				currentRoom = 2;
			else if (input == "inventory")
				for (int i = 0; i < 5; i++)
					cout << inventory[i] << " ";
			for (int i = 0; i < 8; i++) // invetory slots
				inventory[i] = " ";

			break;
		case 2:
			cout << "This room is a bit wider, but the rusted walls make it feel claustrophobic. A small coral reef grows through a crack in the pipe." << endl;
			if (inventory[1] == " ") {
				inventory[1] = "CoralFragment";
				cout << "you picked up a coral fragment" << endl;
			}
			inventory[1] = "CoralFragment";
			cin >> input;
			if (input == "forward")
				currentRoom = 3;
			else if (input == "backward")
				currentRoom = 2;
			else if (input == "inventory")
				for (int i = 0; i < 5; i++)
					cout << inventory[i] << " ";
			for (int i = 0; i < 8; i++) // invetory slots
				inventory[i] = " ";
			break;
		case 3:
			cout << "A larger room with broken pipes, water slowly drips down from a small crack in the ceiling. You spot a glimmering object in a dark corner." << endl;
			if (inventory[2] == " ") {
				inventory[2] = "RustyKey";
				cout << "you picked up a rusty key" << endl;
			}

			cin >> input;
			if (input == "forward")
				currentRoom = 4;
			else if (input == "backward")
				currentRoom = 3;
			else if (input == "inventory")
				for (int i = 0; i < 5; i++)
					cout << inventory[i] << " ";
			for (int i = 0; i < 8; i++) // invetory slots
				inventory[i] = " ";
			break;
		case 4:
			cout << "The water level is higher here, nearly up to your claws. A small treasure chest sits on a rock, waiting to be opened. There's a dude in the cornder with a money game set up" << endl;
			if (inventory[3] == " ") {
				inventory[3] = "TreasureChest";
				cout << "you picked up a Treasure Chest" << endl;
				cout << "you can open the treasure chest would you like to?" << endl;
			}

			cin >> input;
			if (input == "forward")
				currentRoom = 5;
			else if (input == "backward")
				currentRoom = 4;


			if (input == "open")
				if (inventory[2] == "RustyKey")
					TreasureChest();
			//add an if statement here letting them use the treasurechest
				  //add another if statement checking if they have the key
				  //if yes, call the treasure function

				else if (input == "inventory")
					for (int i = 0; i < 5; i++)
						cout << inventory[i] << " ";

			break;
		case 5:
			cout << "You enter a room with long, swaying seaweed. The pipe curves here, making it feel like you're entering a tunnel. A mysterious item floats by." << endl;
			if (inventory[4] == " ") {
				inventory[4] = "MysteriousPearl";
				cout << "you picked up a MysteriousPearl" << endl;
			}
			inventory[4] = "MysteriousPearl";
			cin >> input;
			if (input == "forward")
				currentRoom = 6;
			else if (input == "backward")
				currentRoom = 5;
			else if (input == "inventory")
				for (int i = 0; i < 5; i++)
					cout << inventory[i] << " ";
			for (int i = 0; i < 8; i++) // invetory slots
				inventory[i] = " ";
			break;
		case 6:
			cout << "This room is filled with the sound of rushing water. The current is strong. You must be careful here." << endl;
			if (inventory[5] == "") {
				inventory[5] = "";
			}

			cin >> input;
			if (input == "forward")
				currentRoom = 7;
			else if (input == "backward")
				currentRoom = 6;
			else if (input == "inventory")
				for (int i = 0; i < 5; i++)
					cout << inventory[i] << " ";
			for (int i = 0; i < 8; i++) // invetory slots
				inventory[i] = " ";
			break;
		case 7:

			Beep(252, 340);
			cout << "A narrow passage, almost completely submerged. You squeeze through and find a strange mechanical contraption." << endl;
			if (inventory[6] == " ") {
				inventory[6] = "OldWrench";
				cout << "you picked up a Old Wrench" << endl;
			}
			inventory[6] = "OldWrench";
			cin >> input;
			if (input == "forward")
				currentRoom = 8;
			else if (input == "backward")
				currentRoom = 7;
			else if (input == "inventory")
				for (int i = 0; i < 5; i++)
					cout << inventory[i] << " ";
			for (int i = 0; i < 8; i++) // invetory slots
				inventory[i] = " ";
			break;
		case 8:
			cout << "The light dims as you enter this room. The walls are covered in glowing algae, and you notice a delicate-looking item on the ground." << endl;
			if (inventory[7] == " ") {
				inventory[7] = "GlowingAlgae";
				cout << "you picked up a Glowing Algae" << endl;
			}

			cin >> input;
			if (input == "forward")
				currentRoom = 9;
			else if (input == "backward")
				currentRoom = 8;
			else if (input == "inventory")
				for (int i = 0; i < 5; i++)
					cout << inventory[i] << " ";
			for (int i = 0; i < 8; i++) // invetory slots
				inventory[i] = " ";
			break;
		case 9:
			cout << "A large, open space, where the pipe seems to have split in two. A treasure chest sits in the middle of the room." << endl;
			if (inventory[7] == " ") {
				inventory[7] = "GoldenCoin";
				cout << "you picked up a Golden Coin" << endl;
			}

			cin >> input;
			if (input == "forward")
				currentRoom = 10;
			else if (input == "backward")
				currentRoom = 9;
			else if (input == "inventory")
				for (int i = 0; i < 5; i++)
					cout << inventory[i] << " ";
			for (int i = 0; i < 8; i++) // invetory slots
				inventory[i] = " ";
			break;

		case 10:
			cout << "looks like a dead end?? : do you want to go forward" << endl;
			if (input == "forward")
				currentRoom = 11;
			else if (input == "backward")
				currentRoom = 10;
			else if (input == "inventory")
				for (int i = 0; i < 5; i++)
					cout << inventory[i] << " ";
			for (int i = 0; i < 8; i++) // invetory slots
				inventory[i] = " ";
			break;

		case 11:
			
			Beep(432, 230);
			
			
			cout << "you pushed through, now you are in a septic tank, you start taking damage" << endl;
			cin >> input;
			if (input == "forward")
				currentRoom = 12;
			else if (input == "backward")
				currentRoom = 11;
			else if (input == "inventory")
				for (int i = 0; i < 5; i++)
					cout << inventory[i] << " ";
			for (int i = 0; i < 8; i++) // invetory slots
				inventory[i] = " ";

			break;

		case 12:
			cout << "you got out of the tank, but the water is still merc-y but you see something glowing in the dicstance." << endl;
			cin >> input;
			if (input == "forward")
				currentRoom = 13;
			else if (input == "backward")
				currentRoom = 12;
			else if (input == "inventory")
				for (int i = 0; i < 5; i++)
					cout << inventory[i] << " ";
			for (int i = 0; i < 8; i++) // invetory slots
				inventory[i] = " ";
			break;








		case 13:
			cout << " You are in the second to last room, there is a shop, and a crack in the pipe you see the light through the crack" << endl;
			if (input == "shop")
				if (money < 50)
					cout << "you dont have enough money to shop here" << endl;
				else if (money > 60)
					shop();
			cout << "you have enough money come on in" << endl;


			break;

		case 14:
			cout << "You've reached the final room. The journey ends here. Congratulations " << character << "!" << endl;
			break;
		default:
			break;
		}
	}
}


void TreasureChest() {
	int choice;
	int num1 = 0; int num2 = 0; int num3 = 0;
	int scramble = rand() % 3 + 1;

	if (scramble == 1) { num1 = -10; num2 = -40, num3 = 50; }
	if (scramble == 2) { num1 = -40; num2 = 50, num3 = -10; }
	if (scramble == 3) { num1 = 50; num2 = -10, num3 = -40; }
	cout << " your current money" << money << endl;
	cout << "lets play the money making game : type 1, 2, or 3 to select a chest." << endl;
	cin >> choice;


	if (money < 10) {
		cout << "you don't have enough money to play" << endl;
	}

	else {
		cout << "chest results:" << num1 << " " << num2 << " " << num3 << endl;
		if (choice == 1) {
			money += num1;
		}
		else if (choice == 2) {
			money += num2;
		}
		else {
			money += num3;
		}
		cout << "your new money:" << money << endl;
	}
}

void shop() {
	char input = 'a';
	cout << endl << endl << "---------------------------------------------------------" << endl;
	cout << "welcome to the shop! Use this space to buy back your health items" << endl;
	cout << "type 'q' to quit" << endl;
	while (input != 'q') {
		cout << "Pick a health item: ) glowing algae ) Treasure chest d) drippy cheese" << endl;
		cin >> input;
		switch (input) {
		case 'g':
			cout << "" << endl;
			inventory[7] = "glowing algae";
			break;
		case 't':
			cout << "Heres your treasure chest" << endl;
			inventory[3] = "treasure chest";
			break;
		case 'd':
			cout << "Heres your CHEESE, it isn't drippy" << endl;
			inventory[5] = "rustydrippycheese";
			break;
		}

	}
	cout << "---------------------------------------------------------" << endl;
}
