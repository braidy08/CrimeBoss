using UnrealBuildTool;

public class AdvancedSessions : ModuleRules {
    public AdvancedSessions(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "CrimeBossUGC",
            "Engine",
            "OnlineSubsystemUtils",
        });
        PrivateDependencyModuleNames.AddRange(new string[] {
            "OnlineSubsystem",
        });
    }
}
