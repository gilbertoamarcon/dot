#include "eng.hpp"

int main(int argc, char ** argv){
	Eng eng;
	eng.loadParams("param/param.yaml");
	eng.run();
	return 0;
}