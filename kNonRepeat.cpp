////
//// Created by jeevan on 3/7/17.
////
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//int cmpfunc (const void * a, const void * b)
//{
//   return ( *(int*)a - *(int*)b );
//}
//
//int main(int args, char* argv[]) {
//
//	int i = 0, k;
//	char s[100];
//
//	puts("Enter string: ");
//	scanf("%s", s);
//	int n = strlen(s);
//
//	puts("Enter k: ");
//	scanf("%d", &k);
//
//
//	int count[256] , index[256];
//    char *temp = s;
//
//	for(int j = 0; j < 256; j++) {
//		index[j] = n;
//		count[j] = 0;
//	}
//
//	while(*temp) {
//		char curr = *temp;
//
//		count[curr]++;
//
//		if(count[curr] == 1)
//			index[curr] = i;
//
//		else if(count[curr] == 2)
//			index[curr] = n;
//
//		i++; temp++;
//	}
//
//	qsort(index, 256, sizeof(int), cmpfunc);
//
//	if(index[k - 1] == n)
//		printf("No k");
//	else
//		printf("%c\n", s[index[k - 1]]);
//
//
//	return 0;
//}
//
//
