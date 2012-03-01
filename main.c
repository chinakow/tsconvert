#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	char	date_str[80];

	if(argc != 2) {
		printf("usage: %s <unix timestamp>\n", argv[0]);
		return -1;
	}

	time_t date = strtol(argv[1], NULL, 10);
	struct tm *loc_time = localtime(&date);
	strftime(date_str, 80, "%Y/%m/%d %H:%M:%S", loc_time);
	printf("localtime: %s\n", date_str);
	struct tm *utc_time = gmtime(&date);
	strftime(date_str, 80, "%Y/%m/%d %H:%M:%S", utc_time);
	printf(" UTC time: %s\n", date_str);

	return 0;
}
