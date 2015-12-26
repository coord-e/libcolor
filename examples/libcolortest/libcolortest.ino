#include <libcolor.h>

colors cp(THEME_PRIMARY);
colors cf(THEME_FLAT);
colors cj(THEME_JAPANESE);
colors cw(THEME_WESTERN);

void setup() {
  Serial.begin(9600);
  Serial.println(F("libcolor test by coord.e\n"));

  Serial.println(F("Color Constants Test"));
  
  Serial.println(F("Color\tPrimary\tFlat\tJapanese\tWestern"));
  Serial.print(F("BLACK\t0x"));
  Serial.print(cp.BLACK(),HEX);
  Serial.print(F("\t0x"));
  Serial.print(cf.BLACK(),HEX);
  Serial.print(F("\t0x"));
  Serial.print(cj.BLACK(),HEX);
  Serial.print(F("\t0x"));
  Serial.print(cw.BLACK(),HEX);  
  Serial.println();

  Serial.print(F("RED\t0x"));
  Serial.print(cp.RED(),HEX);
  Serial.print(F("\t0x"));
  Serial.print(cf.RED(),HEX);
  Serial.print(F("\t0x"));
  Serial.print(cj.RED(),HEX);
  Serial.print(F("\t0x"));
  Serial.print(cw.RED(),HEX);
  Serial.println();

  Serial.print(F("GREEN\t0x"));
  Serial.print(cp.GREEN(),HEX);
  Serial.print(F("\t0x"));
  Serial.print(cf.GREEN(),HEX);
  Serial.print(F("\t0x"));
  Serial.print(cj.GREEN(),HEX);
  Serial.print(F("\t0x"));
  Serial.print(cw.GREEN(),HEX);
  Serial.println();

  Serial.print(F("BLUE\t0x"));
  Serial.print(cp.BLUE(),HEX);
  Serial.print(F("\t0x"));
  Serial.print(cf.BLUE(),HEX);
  Serial.print(F("\t0x"));
  Serial.print(cj.BLUE(),HEX);
  Serial.print(F("\t0x"));
  Serial.print(cw.BLUE(),HEX);
  Serial.println();
  
  Serial.print(F("WHITE\t0x"));
  Serial.print(cp.WHITE(),HEX);
  Serial.print(F("\t0x"));
  Serial.print(cf.WHITE(),HEX);
  Serial.print(F("\t0x"));
  Serial.print(cj.WHITE(),HEX);
  Serial.print(F("\t0x"));
  Serial.print(cw.WHITE(),HEX);
  Serial.println();
  Serial.println(F("You can use another various colors. Please check libcolor.h\n"));

  Serial.println(F("Color Convert Test"));
  Serial.print(F("colorUtil::rgb565(50,100,150) => 0x"));
  Serial.println(colorUtil::rgb565(50,100,150),HEX);  
  Serial.print(F("colorUtil::htmlCode(\"#bdc3c7\") => 0x"));
  Serial.println(colorUtil::htmlCode("#bdc3c7"),HEX);
  
  Serial.println(F("\ndone!"));
}

void loop() {
}

