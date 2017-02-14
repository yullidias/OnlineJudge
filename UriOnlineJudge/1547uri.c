#include <stdio.h>

int main() {
  int n, qt, s, value;
  int i;
  typedef struct{
    int value;
    int difference;
    int position;
  }Diff;

  scanf("%d", &n);
  while(n--){
    scanf("%d %d", &qt, &s);
    Diff diff = {0, -1, -1};
    for(i=0; i<qt; i++){
      scanf("%d", &value);
      int difference = abs (value-s);
      if(diff.difference == -1){
        diff.value = value;
        diff.difference = difference;
        diff.position = i+1;
      }
      else{
        if(difference < diff.difference){
          diff.value = value;
          diff.difference = difference;
          diff.position = i+1;
        }
      }
    }
    printf("%d\n", diff.position);
  }
     return 0;
}
