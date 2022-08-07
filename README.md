# Friday Night Funkin' - Noizey Notes
*This is a modification of [Psych Engine EK+](https://github.com/dopadream/FNF-PsychEngine-EKPlus) intended for a specific mod, if you're looking for the original repository, you have come to the wrong place.*

## Compiling Tutorial
### = API Keys =
Once the repository has been cloned; make a file in `/source`, name it `APIStuff.hx`, and copy & paste this into it:
```haxe
package;

class APIStuff
{
	public static var API:String = "";
	public static var EncKey:String = "";
}

```
### = Dependencies =

- Git
- [Haxel](https://haxe.org/download/) (LATEST VERSION, STOP USING 4.1.5!!!!)
- VS Community (Windows only!)
- 25 gigs of space (Windows only, due to Visual Studio and other crap)
- 1-5 gigs of space (Non-Windows)

### = OPTIONAL Dependencies = 

- Visual Studio Code (for modifying the code itself if you don't want to use Visual Studio itself)

### = Recommended VS Code Extensions =

- Lime
- Bracket Pair Colorizer 2
- HXCPP Debugger
- Tabline

### = Downloads =

Git:
- Windows/Mac: https://git-scm.com/downloads

- Linux (Ubuntu/Debian based Distros): 
```
sudo apt-get update
sudo apt-get install git -y
```


Linux (Arch based Distros): 
```
sudo pacman -Sy git --noconfirm;mkdir ~/haxelib && haxelib setup ~/haxelib
```


Haxel:
- Windows/Mac: https://haxe.org/download/

- Linux (Ubuntu/Debian based Distros):
```
sudo add-apt-repository ppa:haxe/releases -y
sudo apt-get update
sudo apt-get install haxe -y
mkdir ~/haxelib && haxelib setup ~/haxelib
```



- Linux (Arch based Distros)
```
sudo pacman -Sy haxe --noconfirm
```

### = VS Community Setup =

For Windows, you need to install Visual Studio Community 2019. While installing VSC19, don't click on any of the options to install workloads. Instead, go to the individual components tab and choose the following:

* MSVC v142 - VS 2019 C++ x64/x86 build tools
* Windows SDK (10.0.17763.0)

It is recommended to reboot your PC once it finishes, but it's not required.



### = Terminal Setup & Compiling Game =

- Windows: press "Windows+R" and type in "cmd", if you don't like cmd, or you just use something different, open that program instead. Make sure to use normal CMD, not admin CMD
CMD is preinstalled, so it's easier to work with.

- Some Linux Distros: Press "CTRL+ALT+T" and a Terminal window should open
- Other Linux Distros: Usually you can find your Terminal in your applications menu, or press Ctrl+Alt+2-6 to open the TTY, Ctrl+Alt+7 usually gets you back to your desktop

- Mac: Press cmd+space and type "Terminal" into spotlight or open Launchpad and look for Terminal

Type in these commands:
```
haxelib setup
haxelib git discord_rpc https://github.com/Aidan63/linc_discord-rpc
haxelib git linc_luajit https://github.com/nebulazorua/linc_luajit.git
haxelib git hxvm-luajit https://github.com/nebulazorua/hxvm-luajit
haxelib git faxe https://github.com/uhrobots/faxe
haxelib git polymod https://github.com/MasterEric/polymod.git
haxelib git extension-webm https://github.com/KadeDev/extension-webm
haxelib install lime 7.9.0
haxelib install openfl
haxelib install flixel
haxelib install flixel-tools
haxelib install flixel-ui
haxelib install hscript
haxelib install flixel-addons
haxelib install actuate
haxelib install hxCodec
haxelib run lime setup
haxelib run lime setup flixel
haxelib run flixel-tools setup
```

Read carefully when it prompts for you to do anything (like: setup the lime command, setup flixel tools, etc)

Run `lime setup PLATFORM`(Replace platform with your device's platform)

To compile & run, run `lime test PLATFORM`(Replace platform with your device's platform)

= Debug Builds =

Add a `-debug` flag at the end of `lime test <platform>`
e.g. `lime test windows -debug`

= VS Code Installation =
- Windows/Mac: https://code.visualstudio.com/

- Linux (Ubuntu and Debian based Distros):
```
sudo apt install software-properties-common apt-transport-https wget
wget -q https://packages.microsoft.com/keys/microsoft.asc -O- | sudo apt-key add -
sudo add-apt-repository "deb [arch=amd64] https://packages.microsoft.com/repos/vscode stable main"
sudo apt install code
```


- Linux (Arch based distros):
```
sudo pacman -Sy code
```
If you don't want your mod to be able to run .lua scripts, delete the "LUA_ALLOWED" line on Project.xml

This should clear up every question you have about compiling!

## Credits:
* Shadow Mario - Coding
* RiverOaken - Arts and Animations
* bbpanzu - Assistant Coding

### Special Thanks
* shubs - New Input System
* SqirraRNG - Chart Editor's Sound Waveform base code
* iFlicky - Delay/Combo Menu Song Composer + Dialogue Sounds
* PolybiusProxy - .MP4 Loader Extension
* Keoiki - Note Splash Animations
* Smokey - Spritemap Texture Atlas support
* Cary - OG Resolution code
* Nebula_Zorua - VCR Shader code
_____________________________________

## Psych Engine EKPlus Credits:
* tposejank - Original Programmer
* dopadream - Update Maintainer & Programmer

## Psych Engine Credits:
* Shadow Mario - Programmer
* RiverOaken - Artist
* Yoshubs - Assistant Programmer

### Special Thanks
* bbpanzu - Ex-Programmer
* shubs - New Input System
* SqirraRNG - Crash Handler and Base code for Chart Editor's Waveform
* KadeDev - Fixed some cool stuff on Chart Editor and other PRs
* iFlicky - Composer of Psync and Tea Time, also made the Dialogue Sounds
* PolybiusProxy - .MP4 Video Loader Library (hxCodec)
* Keoiki - Note Splash Animations
* Smokey - Sprite Atlas Support
* Nebula the Zorua - LUA JIT Fork and some Lua reworks

# Features

## Attractive animated dialogue boxes:

![](https://user-images.githubusercontent.com/44785097/127706669-71cd5cdb-5c2a-4ecc-871b-98a276ae8070.gif)


## Mod Support
* Probably one of the main points of this engine, you can code in .lua files outside of the source code, making your own weeks without even messing with the source!
* Comes with a Mod Organizing/Disabling Menu. 


## Atleast one change to every week:
### Week 1:
  * New Dad Left sing sprite 
  * Unused stage lights are now used
### Week 2:
  * Both BF and Skid & Pump does "Hey!" animations
  * Thunders does a quick light flash and zooms the camera in slightly
  * Added a quick transition/cutscene to Monster
### Week 3:
  * BF does "Hey!" during Philly Nice
  * Blammed has a cool new colors flash during that sick part of the song
### Week 4:
  * Better hair physics for Mom/Boyfriend (Maybe even slightly better than Week 7's :eyes:)
  * Henchmen die during all songs. Yeah :(
### Week 5:
  * Bottom Boppers and GF does "Hey!" animations during Cocoa and Eggnog
  * On Winter Horrorland, GF bops her head slower in some parts of the song.
### Week 6:
  * On Thorns, the HUD is hidden during the cutscene
  * Also there's the Background girls being spooky during the "Hey!" parts of the Instrumental

## Cool new Chart Editor changes and countless bug fixes
![](https://github.com/ShadowMario/FNF-PsychEngine/blob/main/docs/img/chart.png?raw=true)
* You can now chart "Event" notes, which are bookmarks that trigger specific actions that usually were hardcoded on the vanilla version of the game.
* Your song's BPM can now have decimal values
* You can manually adjust a Note's strum time if you're really going for milisecond precision
* You can change a note's type on the Editor, it comes with two example types:
  * Alt Animation: Forces an alt animation to play, useful for songs like Ugh/Stress
  * Hey: Forces a "Hey" animation instead of the base Sing animation, if Boyfriend hits this note, Girlfriend will do a "Hey!" too.
  * Multikey support:
  * You can choose how many keys (through 1-10) specific charts can have.
  * You can also dynamically change the amount of keys with the "Change Mania" event.
  * There is no support for 11 keys or more. You do not have more than 10 fingers.

## Multiple editors to assist you in making your own Mod
![Screenshot_3](https://user-images.githubusercontent.com/44785097/144629914-1fe55999-2f18-4cc1-bc70-afe616d74ae5.png)
* Working both for Source code modding and Downloaded builds!

## Story mode menu rework:
![](https://i.imgur.com/UB2EKpV.png)
* Added a different BG to every song (less Tutorial)
* All menu characters are now in individual spritesheets, makes modding it easier.

## Credits menu
![Screenshot_1](https://user-images.githubusercontent.com/44785097/144632635-f263fb22-b879-4d6b-96d6-865e9562b907.png)
* You can add a head icon, name, description and a Redirect link for when the player presses Enter while the item is currently selected.

## Awards/Achievements
* The engine comes with 16 example achievements that you can mess with and learn how it works (Check Achievements.hx and search for "checkForAchievement" on PlayState.hx)

## Options menu:
* You can change Note colors, Delay and Combo Offset, Controls and Preferences there.
 * On Preferences you can toggle Downscroll, Middlescroll, Anti-Aliasing, Framerate, Low Quality, Note Splashes, Flashing Lights, etc.

## Other gameplay features:
* When the enemy hits a note, their strum note also glows.
* Lag doesn't impact the camera movement and player icon scaling anymore.
* Some stuff based on Week 7's changes has been put in (Background colors on Freeplay, Note splashes)
* You can reset your Score on Freeplay/Story Mode by pressing Reset button.
* You can listen to a song or adjust Scroll Speed/Damage taken/etc. on Freeplay by pressing Space.
