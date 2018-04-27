#ifndef commandlineparser_h
#define commadnlineparser_h

class CommandLineParser {
	private:
		char *values[128];
		int totalValues;
		CommandLineOption *optionList[128]; //replace it by list
		int totalOption;
		
		int argc;
		
	protected:
		CommandLineOption* findOption(char *optName);
		
	public:
		CommandLineParser();
		CommandLineParser(char **argv);
		
		void setArgument(char **args);
		int parse();
};


#endif
