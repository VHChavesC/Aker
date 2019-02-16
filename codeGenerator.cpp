#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class CodeGenerator {

public:
	//Class constructor
	//Starts the code 
	void start();

	//Finishes the code
	void finish();

	//Inclues the functions for the gps
	void gps_code();

	//Inclues the functions for the bmp
	void bmp_code();

	//Inclues the functions for the communication
	void comm_code();
};

void CodeGenerator::start(){

	//Starts the generated code file
	ofstream codeFile;
	string code;

	codeFile.open("code.cpp");

	code = "//This code was generated by codeGenerator\n";
	//Fist, all the includes should be put here
	code = code + "#include<iostream>\n";
	//Namespace std, default in c++ applications
	code = code + "using namespace std;\n\n";
	//Starts the main function
	code = code + "int main(){\n";
	//Code....

	//Writes to file
	codeFile << code;
	codeFile.close();
}

void CodeGenerator::finish(){

	//Starts the generated code file
	ofstream codeFile;
	string code;

	//Open the file to append
	codeFile.open("code.cpp", ios_base::app);

	//Writes the main return and closes the code
	code = "\n";
	code = code + "	return 0;\n";
	code = code + "}";

	//Writes to file
	codeFile << code;
	codeFile.close();
}

void CodeGenerator::gps_code(){

	//Starts the generated code file
	ofstream codeFile;
	string code;

	//Open the file to append
	codeFile.open("code.cpp", ios_base::app);

	code = "\n";
	code = code + "	//Code for the gps\n";
	code = code + "	set_gps();\n";
	code = code + "	get_gps();\n";
	code = code + "\n";

	//Writes to file
	codeFile << code;
	codeFile.close();
}

void CodeGenerator::bmp_code(){

	//Starts the generated code file
	ofstream codeFile;
	string code;

	//Open the file to append
	codeFile.open("code.cpp", ios_base::app);

	code = "\n";
	code = code + "	//Code for the bmp\n";
	code = code + "	set_bmp();\n";
	code = code + "	get_bmp();\n";
	code = code + "\n";

	//Writes to file
	codeFile << code;
	codeFile.close();
}

void CodeGenerator::comm_code(){

	//Starts the generated code file
	ofstream codeFile;
	string code;

	//Open the file to append
	codeFile.open("code.cpp", ios_base::app);

	code = "\n";
	code = code + "	//Code for the communication\n";
	code = code + "	open_comm();\n";
	code = code + "	send_data();\n";
	code = code + "	close_comm();\n";
	code = code + "\n";

	//Writes to file
	codeFile << code;
	codeFile.close();
}

int main(){
	CodeGenerator codeGen;

	codeGen.start();
	codeGen.gps_code();
	codeGen.bmp_code();
	codeGen.comm_code();
	codeGen.finish();

	return 0;
}