#ifndef commandlineoption.h
#define commandlineoption.h

class CommandLineOption {
	private:
		char *shortName;
		char *longName;
		char *help;
		bool isSwitch;
		bool isMultivalued;
	
		char *values[128]; // replace it list
		int totalValues;
	
	public:
		CommandLineOption();
		CommandLineOption(char* shortname);
		CommandLineOption(char* shortname, char *longname);
		CommandLineOption(char *shortname, char *help);
		CommandLineOption(char *shortname, char *help, bool multival);
		
};

#endif
