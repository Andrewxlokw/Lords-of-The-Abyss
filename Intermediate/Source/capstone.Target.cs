using UnrealBuildTool;

public class capstoneTarget : TargetRules
{
	public capstoneTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.V3;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Game;
		ExtraModuleNames.Add("capstone");
	}
}
