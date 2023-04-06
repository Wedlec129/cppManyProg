char ang[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

char randChar() {

	int i=1 + rand() % 26; 
	
	return ang[i];

}
