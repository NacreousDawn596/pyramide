#include <stdio.h>
#include <sys/ioctl.h>
#include <unistd.h>

int main(){
	struct winsize w;
	ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
	int width = w.ws_col/2 - 1;
	int um = 0, n = 0;
	int pyramide = 1;
	int reverse = 0;
	for(int times = 0; times <= n; times++){
		if (pyramide){
			for(int i = um; i <= width; i++){
				for(int idk = 0; idk <= width - i - 1; idk++){
					printf(" ");
				}
				for(int j = 1; j <= i + 1; j++){
					printf("* ");
				}
				printf("\n");
			}
		}
		if (reverse){
			for(int i = width - 1; i >= 0; i=i-1){
		                for(int idk = 0; idk <= width - i - 1; idk++){
		                        printf(" ");
		                }
		                for(int j = 1; j <= i + 1; j++){
		                        printf("* ");
		                }
		                printf("\n");
		        }
			int um = 1;
		}
	}
	return 0;
}
