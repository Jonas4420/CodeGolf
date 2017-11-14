#define Q "###"
#define R "    "
#define S R R R R
#define T Q Q"#"
#define V W" "
#define W R R
#define X Q"##"
#define Y "#  #"
#define Z R"#"
char*c[]={S"  #"V Y R Y" "X"  ##"Z V,S"  ##"W Q"#"R T"  #   #"Z"#"W,S Q"#"W"##  "Z"#"R Y"## "T W,S Y V"#   "Z R X" "Q" "Y W,S Y" "Q" "X"   "X Z V Y W,S T" ##"Y"  ##"Y Z"#"W Q"#"W,S"##"Z"   "Y"#"Y"  "T W"##"V" ",S" #"Z"#  "X"   "X" "Y V"#"V" ",S"##"Z V V" #"V Y" "X"  ",S" #"Z"#"V V"##"W T"  #  ",S" "T V"   "Z Q W"##"R Y"##",S Q" "Y V R"   "Y V"#"R X" ",S R Y V R"   "Y" "Q" "X Z R" ",S Z Q V R"   "T" ##"Y Z"#"R ,S Z"#"V V"##"Z"   #  "T R,S" "Z V V" #"Z"#  "X" "Y R};j;main(i,b)char**b;{for(i=0;i<32;puts(""),++i)for(j=0;j<64;)putchar(i<16?c[i][j++]:c[31-i][63-j++]);for(i=63;i>=32&&printf("%s%s",S,S);puts(""),--i)for(j=0;j<32;++j)putchar(j<16?c[j][i]:c[31-j][63-i]);}
