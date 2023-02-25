Powershell, start server-only:

& "Z:\programs\unreal\UE_5.1\Engine\Binaries\Win64\UnrealEditor-Cmd.exe" "Z:\code\donkey\Donkey\Donkey.uproject" /Game/Donkey/Maps/PuzzleMap -server -log -ResX=1280 -ResY=720 -WINDOWED

Powershell, join server as client:
& "Z:\programs\unreal\UE_5.1\Engine\Binaries\Win64\UnrealEditor-Cmd.exe" "Z:\code\donkey\Donkey\Donkey.uproject" 127.0.0.1 -game -log -ResX=1280 -ResY=720 -WINDOWED
& "Z:\programs\unreal\UE_5.1\Engine\Binaries\Win64\UnrealEditor-Cmd.exe" "Z:\code\donkey\Donkey\Donkey.uproject" 192.168.0.236 -game -log -ResX=1280 -ResY=720 -WINDOWED

Start game
& "Z:\programs\unreal\UE_5.1\Engine\Binaries\Win64\UnrealEditor-Cmd.exe" "Z:\code\donkey\Donkey\Donkey.uproject" -game -log -ResX=1280 -ResY=720 -WINDOWED
