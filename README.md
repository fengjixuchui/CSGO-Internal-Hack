<h1>CSGO-Internal-Hack</h1>
<h3>An example of Internal Game Hacking (CSGO) using CTHackFramework.</h3>

<h1>Notice</h1>
    <p>
        &emsp;Recently, I received a number of issues, which mentioned that injecting Dll will lead to game crash and other situations. At the same time, I personally encountered similar situations, such as prompting "LoadLibraryW failed".
    </p>
     <p>
        &emsp;After a period of searching, I found that the problem comes from the Dll injection process, because I do not know enough about dll injection, so I have been unable to solve these problems.
    </p>
    <p>
        &emsp;Recently, I found that by using "GH-Injector", some problems can be solved.
The method of use is as follows:
    </p>
    <p>&emsp;1. Download the GH-Injector from <a href="https://guidedhacking.com/resources/guided-hacking-dll-injector.4/">Guid Hacking</a></p>
    <p>&emsp;2. Inject <b>Indicium-Supra.dll<b/> using <b>LoadLibraryExW<b/> and <b>NtCreateThreadEx<b/>.</p>
    <p>&emsp;3. Inject <b>CSGO-Hack.dll<b/> using <b>ManualMap<b/> and <b>NtCreateThreadEx<b/>.</p>
    <p>&emsp;4. A overlay should be shown in the game.</p>
        
<h1>Introduction</h1>
    <p>
        &emsp;An example of internal game hacking based on CTHackFramework, give you a basic idea of game hacking using C/C++ and CTHackFramework.   
    </p>

<h2>What is "internal" hacking?</h2>
    <p>
        &emsp;Since it`s a so-called "Internal" hack, what does it means is that basically, instead of creating a new process and then read/write data in the memory of the game process, "internal" hack would inject our codes into the target process, and run our code inside target proc, which has lots of advantages compared with External method.
        <ul>
            <li>Fast memory access</li> 
            <p>&emsp;Within the process, you can access memory directly and freely cause target memory is also "your" memory, if you get the idea. </p>
            <li>Call game function</li>
            <p>&emsp;As a internal hack, your code is injected into the target process, so you can call the function from game.Such as some command like GiveWeapon, KillBot, and even functions that from game engine like UpdateTexture or LoadSound.</p>
            <li>The same privilege</li>
            <p>&emsp;Since target process consider your code as his code, your code will run with the same privilege as the targer process does.</p>
            <li>Concealment</li>
            <p>&emsp;If done right, the hack code will not be detected by anti-cheat system that easy.</p>          
        </ul>
    </p>

<h2>How does it work?</h2>
    <p>
        &emsp;First, we use DLL injection to inject our .dll into the target process, then we hook the d3d9 device of the target process, so we can replace present()
        function with our modified one, draw our contents after the game has finished drawing and before it present to the user. Here we use ImGui for gui. Then we
        can do stuff as we want, change the value, read enemy position, fire your weapon, etc.
    </p>

<h2>Features</h2>
<img src="https://github.com/CelestialTS/CSGO-Internal-Hack/blob/master/Image/gui.jpg" alt="GUI">
<p>
    &emsp;You can use the simple and convenient built-in user interface to set up your hack, and you can quickly configure the function in the game.
</p>
<h4>◉ Trigger Bot</h4>
<p>
    &emsp;When your crosshair is pointing to an enemy, the trigger is pulled automatically by trigger bot. You can also add auto recoil
    compensation, scope-only mode, etc. Automatically change the behavior based on what weapon you are holding.
</p>

<h4>◉ Aim Bot</h4>
<img src="https://github.com/CelestialTS/CSGO-Internal-Hack/blob/master/Image/aimsetting.jpg" alt="Aimbot Setting">
<p>
    &emsp;In Aimlock mode, your crosshair is locked to the nearest enemy`head. You can lock enemy whether it`s behind the wall or not, but you can also lock
    on an enemy only if he is visible in your screen of view.
</p> 
<p>
    &emsp;In FOV(Field of View) mode, your crosshair will snap to the nearest enemy that is within specific angle range, for example only when enemy whose head
    is nearby your crosshair with a range about 10 degrees. To be more advanced, you can use dynamic FOV range, different horizontal and vertical sensitivity, 
    movement speed compensation, etc.
</p> 
<p>
    &emsp;Smooth value controlls how fast your crosshair moves to the target, imagine the aimbot is allways tries to drag yor crosshair to the enemys head, or any 
    body parts you want. This can make the hacks more covert, and seems more legit, which you can call it a micro-aimbot.
</p> 
<p>
    &emsp;What`s more, you can now combine aimbot and RCS together to be more legit and effective. Just like a pro, aim to the enemy and spray em down. Do the transfer, do the clutch, just enjoy.
</p> 

<h4>◉ RCS</h4>
<img src="https://github.com/CelestialTS/CSGO-Internal-Hack/blob/master/Image/rcs.jpg" alt="RCS" width=1600 height="=900">
<p>
    &emsp;With RCS, which stands for the Recoil Control System, you can spray any weapon with high accuracy, the recoil has been compensated automatically by RCS, just aim to the enemy then push the button and let it does the anti-recoil stuff for you.
</p>

<h4>◉ Glow Wall Hack</h4>  
<img src="https://github.com/CelestialTS/CSGO-Internal-Hack/blob/master/Image/glow.jpg" alt="Glow" width=1600 height="=900">
<p>
    &emsp;Glow hack will glow all the entity we interested in, such as enemies, weapons on the ground, C4, grenades,etc. You can also use the color picker provided
    by ImGui to customize the color for different entities.
</p>
<img src="https://github.com/CelestialTS/CSGO-Internal-Hack/blob/master/Image/glowsetting.jpg" alt="Glow Setting"> 

<h4>◉ Radar Hack</h4>
<img src="https://github.com/CelestialTS/CSGO-Internal-Hack/blob/master/Image/radarhack.jpg" alt="Radar" width=1600 height="=900">
<p>
    &emsp;Radar hack will display the marker which stands for an enemy on your in-game radar when the enemy is nearby, even if they've never shown theirselves.
</p>  

<h4>◉ Bhop</h4>
<p>
    &emsp;Good old bhop, jump like a bunny, gain speed and move your ass faster than what your component could imagine.
</p>

<h4>◉ SkinChanger</h4>
<img src="https://github.com/CelestialTS/CSGO-Internal-Hack/blob/master/Image/skinchanger.jpg" alt="Skin Changer" width=1600 height="=900">
<p>
    &emsp;Access all the skins available in CSGO, dragon lore, fire serpent,etc. Change the skin as you wish, without limitation. You can change the worn and the seed of
    the skin and all the add-ons available, such as statrack, nametag. 
</p>

<h2>How to use</h2>
<p>&emsp;1. Download the repo and extract it. </p>
<p>&emsp;2. Download all the dependency mentioned bellow. </p>
<p>&emsp;3. Open with VS 2017 or higher and complie the code. Make sure to build as <b>release x86</b> configuration.</p>
<p>&emsp;4. Create a new folder, put Indicium-Supra.dll, CSGO-Hack.dll and Injector.exe in it. </p>
<p>&emsp;5. Open up CMD and use cd command to navigate to this folder. </p>
<b>&emsp;&emsp;&emsp;cd (PATH_TO_THE_FOLDER)</b>
<p>&emsp;6. Use the injector to inject both dll in to csgo.exe. (Indicium-Supra.dll must be injected first)</p>
<b>&emsp;&emsp;&emsp;Injector -n csgo.exe -i Indicium-Supra.dll CSGO-Hack.dll</b>
<p>&emsp;7. An in-game overlay will appear.</p>
<p>&emsp;8. Hacks on babe.</p>
 
<h2>To be more convenient</h2>
   <p>
        &emsp;Write yourself a .bat script to automate the injection process. Put the .bat in the same folder.
   </p> 
    
   <p> Inject.bat</p>

<p><b> &emsp; &emsp; &emsp;Injector -n csgo.exe -i Indicium-Supra.dll CSGO-Hack.dll</b></p>
<p><b> &emsp; &emsp; &emsp;ping 192.0.2.2 -n 1 -w 1000 > nul</b></p>
<p><b> &emsp; &emsp; &emsp;EXIT </b></p>


   <p> Eject.bat</p>
<p><b> &emsp; &emsp; &emsp;Injector -n csgo.exe -e CSGO-Hack.dll Indicium-Supra.dll </b></p>
<p><b> &emsp; &emsp; &emsp;ping 192.0.2.2 -n 1 -w 1000 > nul</b></p>
<p><b> &emsp; &emsp; &emsp;EXIT </b></p>

<h2>Troubleshoot</h2>
<p>&emsp;1. If is says no pch.h found, just go to Project->Property->C/C++->Precompiled Header change to <b>Not Using Precompiled Headers</b>.</p>
<p>&emsp;2. If some include path is broken, just follow the error and change the path.</p>
<p>&emsp;3. If you use other injector, remember that <b>Inject Indicium-Supra.dll first and then inject CSGO-Hack.dll</b>.</p>
<p>&emsp;4. Remember to update the file path in the code and make sure it`s correct.</p>

<h2>Dependency</h2>
<h4>Dear ImGui</h4>
<p>
        &emsp;Dear ImGui is a bloat-free graphical user interface library for C++. It outputs optimized vertex buffers that you can render anytime in your 3D-pipeline enabled application. It is fast,
    portable, renderer agnostic and self-contained (no external dependencies).
</p> 
<p>&emsp;Check Dear ImGui on github: <a href="https://github.com/ocornut/imgui">Dear ImGui</a></p>

<h4>Injector</h4>
<p>
        &emsp;nefarius`s Dll Injector is a command line tool abstracting the messy injection process away from you. 
</p>
<p>&emsp;Check Injector on github: <a href="https://github.com/nefarius/Injector">Injector</a></p>

<h4>Indicium-Supra</h4>
<p>
        &emsp;Indicium-Supra consists of a self-contained library (DLL) which exposes a minimalistic API for rendering custom content in foreign processes
    eliminating the need for in-depth knowledge about Direct3D and API-hooking. The most common use-case might be drawing custom overlays on top
    of your games. The framework takes care about pesky tasks like detecting the DirectX version the game was built for and supports
    runtime-hooking (no special launcher application required).
</p>
<p>&emsp;Check Indicium-Supra on github: <a href="https://github.com/nefarius/Indicium-Supra">Indicium-Supra</a></p>

<h2>About</h2>
    <p>&emsp;It`s welcomed for anyone to contribute to this project. Feel free to upload your code and pull a request. More than anything, please share your idea and give me some precious advices. </p>
    <img src="https://github.com/CelestialTS/CTHackFramework/blob/master/res/logo.png" alt="Celestial Tech" width=400 height="=100">
    <p>&emsp;For more please check out website: <a href="http://www.tianshicangxie.com">Celestial Tech</a></p>
    <p>&emsp;Copyright © 2019 Celestial Tech</p>
