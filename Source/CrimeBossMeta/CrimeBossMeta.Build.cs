using UnrealBuildTool;

public class CrimeBossMeta : ModuleRules {
    public CrimeBossMeta(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AkAudio",
            "BF_FrameworkBase",
            "BF_FrameworkGame",
            "BF_GUI",
            "BF_Voiceover",
            "BinkMediaPlayer",
            "CinematicCamera",
            "Common_Data",
            "Common_Save",
            "Common_Utils",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "GameplayTags",
            "GenericGraphRuntime",
            "IGS_UIFramework",
            "Payback",
            "PaybackDefinitions",
            "SlateCore",
            "UMG",
        });
    }
}
