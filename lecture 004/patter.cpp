#include<iostream>
using namespace std;
/*
Q1. Print n=4
1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4

int main(){
  int n;
  cin>>n;
  int i=1;
  while(i <=n){
    int j=1;
    while(j<=n){
      cout<<j<<" ";
      j++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}


Q2. for n=4
4 3 2 1
4 3 2 1
4 3 2 1
4 3 2 1

int main(){
  int n;
  cin>>n;
  int i=1;
  while(i <=n){
    int j=n;
    while(j>=1){
      cout<<j<<" ";
      j--;
    }
    cout<<endl;
    i++;
  }
  return 0;
}


Q3. n = 3
1 2 3
4 5 6
7 8 9

int main(){
  int n;
  cin>>n;
  int count = 1;
  int i=1;
  while(i <=n){
    int j=1;
    while(j<=n){
      cout<<count<<" ";
      count++;
      j++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}

Q4.n=3
9 8 7
6 5 4
3 2 1

int main(){
  int n;
  cin>>n;
  int count = n*n;
  int i=1;
  while(i <=n){
    int j=1;
    while(j<=n){
      cout<<count<<" ";
      count--;
      j++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}

Q5. n=4
*
* * 
* * *
* * * *

int main(){
  int n;
  cin>>n;
  int i=1;
  while(i <=n){
    int j=1;
    while(j<=i){
      cout<<"*"<<" ";
      j++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}

Q6.n=4
1
2 2
3 3 3
4 4 4 4

int main(){
  int n;
  cin>>n;
  int i=1;
  while(i <=n){
    int j=1;
    while(j<=i){
      cout<<i<<" ";
      j++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}

Q. n=4
1
2 3
4 5 6
7 8 9 10

int main(){
  int n;
  cin>>n;
  int i=1;
  int count = 1;
  while(i <=n){
    int j=1;
    while(j<=i){
      cout<<count++<<" ";
      j++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}

Q5. n=4
1
2 3
3 4 5
4 5 6 7
int main(){
  int n;
  cin>>n;
  int i=1;
  while(i <=n){
    int j=1;
    int count = i;
    while(j<=i){
      cout<<count++<<" ";
      j++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}
solve without extra variable
int main(){
  int n;
  cin>>n;
  int i=1;
  while(i <=n){
    int j=1;
    while(j<=i){
      cout<<j+i-1<<" ";
      j++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}

Q. n=4
1
2 1
3 2 1
4 3 2 1
int main(){
  int n;
  cin>>n;
  int i=1;
  while(i<=n){
    int j=1;
    while(j<=i){
      cout<<i-j+1<<" ";
      j++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}


Q. n=4
A A A A
B B B B
C C C C
D D D D
int main(){
  int n;
  cin>>n;
  int i=1;
  while(i<=n){
    int j=1;
    char ch = 'A'+i-1;
    while(j<=n){
      cout<<ch<<" ";
      j++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}

Q. n=4
A B C
A B C
A B C

int main(){
  int n;
  cin>>n;
  int i=1;
  while(i<=n){
    int j=1;
    char ch = 'A';
    while(j<=n){
      ch = ch+1;
      cout<<ch<<" ";
      j++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}

Q n=3
A B C
D E F
G H I

int main(){
  int n;
  cin>>n;
  int i=1;
  char ch = 'A';
  while(i<=n){
    int j=1;
    while(j<=n){
      cout<<ch<<" ";
      ch = ch+1;
      j++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}


Q. n=3
A B C
B C D
C D E
int main(){
  int n;
  cin>>n;
  int i=1;
  while(i<=n){
    int j=1;
    while(j<=n){
      char ch = 'A'+i+j-2;
      cout<<ch<<" ";
      j++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}

Q n=3
A
B B
C C C

int main(){
  int n;
  cin>>n;
  int i=1;
  while(i<=n){
    int j=1;
    char ch = 'A'+i-1;
    while(j<=i){
      cout<<ch<<" ";
      j++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}

Q n=4
A
B C
D E F
G H I J
int main(){
  int n;
  cin>>n;
  int i=1;
  char ch = 'A';
  while(i<=n){
    int j=1;
    while(j<=i){
      cout<<ch++<<" ";
      j++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}

Q n=4
A 
B C
C D E
D E F G
int main(){
  int n;
  cin>>n;
  int i=1;
  while(i<=n){
    int j=1;
    char ch = 'A'+i-1;
    while(j<=i){
      cout<<ch++<<" ";
      j++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}

Q. n=4
D
C D
B C D
A B C D
int main(){
  int n;
  cin>>n;
  int i=1;
  while(i<=n){
    int j=1;
    char ch = 'A'+n-i;
    while(j<=i){
      cout<<ch++<<" ";
      j++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}

Q. n=4
      *
     **
    ***
   ****
int main(){
  int n;
  cin>>n;
  int i=1;
  while(i<=n){
    // space print
    int space = n-i;
    while(space>=1){
      cout<<" ";
      space--;
    }
    // star
    int j=1;
    while(j<=i){
      cout<<"*";
      j++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}

Q. n=4
* * * *
* * *
* *
*
int main(){
  int n;
  cin>>n;
  int i=1;
  while(i<=n){
    // star
    int j=1;
    while(j<=n-i+1){
      cout<<"* ";
      j++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}

Q. n=4
* * * *
  * * *
    * *
      * 
      int main() {
    int n;
    cin >> n;
    int i = 1;
    while (i <= n) {
        // Print spaces
        int space = 1;
        while (space <= i - 1) {
            cout << "  ";
            space++;
        }
        // Print stars
        int j = 1;
        while (j <= n - i + 1) {
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
Q. n=4
1 1 1 1
  2 2 2
    3 3
      4

      int main() {
    int n;
    cin >> n;
    int i = 1;
    while (i <= n) {
        // Print spaces
        int space = 1;
        while (space <= i - 1) {
            cout << "  ";
            space++;
        }
        // Print stars
        int j = 1;
        while (j <= n - i + 1) {
            cout << i <<" ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
Q. n=4
      1
    2 2
  3 3 3
4 4 4 4 

int main() {
    int n;
    cin >> n;
    int i = 1;
    while (i <= n) {
        // Print spaces
        int space = 1;
        while (space <= n-i) {
            cout << "  ";
            space++;
        }
        // Print stars
        int j = 1;
        while (j <= i) {
            cout << i <<" ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}

Q.n=4
      1
    2 3
  4 5 6
7 8 9 10

int main(){
    int n;
    cin >> n;
    int i = 1;
    int count = 1;
    while (i <= n) {
        // Print spaces
        int space = 1;
        while (space <= n-i) {
            cout << "  ";
            space++;
        }
        // Print stars
        int j = 1;
        while (j <= i) {
            cout <<count++<<" ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}


Q. n=4
        1
       121
      12321
     1234321

     int main() {
    int n;
    cin >> n;
    int i = 1;
    while (i <= n) {
        // Print spaces
        int space = 1;
        while (space <= n-i) {
            cout << "  ";
            space++;
        }
        // Print stars
        int j = 1;
        while (j <= i) {
            cout <<j<<" ";
            j++;
        }
        j = j-2;
        while (j >= 1) {
          cout <<j<<" ";
          j--;
      }
        cout << endl;
        i++;
    }
    return 0;
}

Q. n=5
1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1

int main() {
    int n;
    cin >> n;
    int i = 1;
    while (i <= n) {
        // Left numbers
        int j = 1;
        while (j <= n - i + 1) {
            cout << j;
            j++;
        }
        // Stars
        int star = 1;
        while (star <= 2 * (i - 1)) {
            cout << "*";
            star++;
        }
        // Right numbers
        j = n - i + 1;
        while (j >= 1) {
            cout << j;
            j--;
        }
        cout << endl;
        i++;
    }
    return 0;
}

*/
