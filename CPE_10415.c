#include <stdio.h>

int main(){
    int N;
    char note;
    
    
    int c[10] = {0,1,1,1,0,0,1,1,1,1};
    int d[10] = {0,1,1,1,0,0,1,1,1,0};
    int e[10] = {0,1,1,1,0,0,1,1,0,0};
    int f[10] = {0,1,1,1,0,0,1,0,0,0};
    int g[10] = {0,1,1,1,0,0,0,0,0,0};
    int a[10] = {0,1,1,0,0,0,0,0,0,0};
    int b[10] = {0,1,0,0,0,0,0,0,0,0};
    
    int C[10] = {0,0,1,0,0,0,0,0,0,0};
    int D[10] = {1,1,1,1,0,0,1,1,1,0};
    int E[10] = {1,1,1,1,0,0,1,1,0,0};
    int F[10] = {1,1,1,1,0,0,1,0,0,0};
    int G[10] = {1,1,1,1,0,0,0,0,0,0};
    int A[10] = {1,1,1,0,0,0,0,0,0,0};
    int B[10] = {1,1,0,0,0,0,0,0,0,0};
    
    
    
    
    scanf("%d\n", &N);
    for (int line = 0; line < N; line++){
        int finger_count[10] = {0,0,0,0,0,0,0,0,0,0};
        int now[10] = {0,0,0,0,0,0,0,0,0,0};
        while (0 == 0){
            note = getchar();
            if (note == '\n' || note == EOF){
                break;
            }else{
                //printf("%c", note);
                for (int each_finger = 0; each_finger < 10; each_finger++){
                    switch (note){
                        case 'a':
                            if (a[each_finger] > now[each_finger]) { finger_count[each_finger]++; }
                            now[each_finger] = a[each_finger];
                            break;
                        case 'b':
                            if (b[each_finger] > now[each_finger]) { finger_count[each_finger]++; }
                            now[each_finger] = b[each_finger];
                            break;
                        case 'c':
                            if (c[each_finger] > now[each_finger]) { finger_count[each_finger]++; }
                            now[each_finger] = c[each_finger];
                            break;
                        case 'd':
                            if (d[each_finger] > now[each_finger]) { finger_count[each_finger]++; }
                            now[each_finger] = d[each_finger];
                            break;
                        case 'e':
                            if (e[each_finger] > now[each_finger]) { finger_count[each_finger]++; }
                            now[each_finger] = e[each_finger];
                            break;
                        case 'f':
                            if (f[each_finger] > now[each_finger]) { finger_count[each_finger]++; }
                            now[each_finger] = f[each_finger];
                            break;
                        case 'g':
                            if (g[each_finger] > now[each_finger]) { finger_count[each_finger]++; }
                            now[each_finger] = g[each_finger];
                            break;
                        case 'A':
                            if (A[each_finger] > now[each_finger]) { finger_count[each_finger]++; }
                            now[each_finger] = A[each_finger];
                            break;
                        case 'B':
                            if (B[each_finger] > now[each_finger]) { finger_count[each_finger]++; }
                            now[each_finger] = B[each_finger];
                            break;
                        case 'C':
                            if (C[each_finger] > now[each_finger]) { finger_count[each_finger]++; }
                            now[each_finger] = C[each_finger];
                            break;
                        case 'D':
                            if (D[each_finger] > now[each_finger]) { finger_count[each_finger]++; }
                            now[each_finger] = D[each_finger];
                            break;
                        case 'E':
                            if (E[each_finger] > now[each_finger]) { finger_count[each_finger]++; }
                            now[each_finger] = E[each_finger];
                            break;
                        case 'F':
                            if (F[each_finger] > now[each_finger]) { finger_count[each_finger]++; }
                            now[each_finger] = F[each_finger];
                            break;
                        case 'G':
                            if (G[each_finger] > now[each_finger]) { finger_count[each_finger]++; }
                            now[each_finger] = G[each_finger];
                            break;
                    }
                    
                }
            }
        }
        for (int k = 0; k < 10; k++){
            printf("%d", finger_count[k]);
            if (k != 9){
                printf(" ");
            }
        }
        printf("\n");
    }
    
}
