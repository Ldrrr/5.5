int lengthOfLastWord(char * s)
{
	int i,len,t=0;
	len=strlen(s);
	i=len-1;
	if(len==0) return 0;
	while(i>=0&&s[i]==' ') i--;
	while(i>=0&&s[i]!=' ') {
		t++;
		i--;
	}
	return t;
}
